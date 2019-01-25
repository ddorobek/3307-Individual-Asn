/* 
 * File: NetworkInterfaceList.cpp
 * Author: Damien Dorobek
 * Description: This file creates a vector of NetworkInterface objects.
 * Date: October 4, 2018
 * 
 */

#include <unistd.h>
#include <dirent.h>
#include <string>
#include <fstream>
#include <iostream>
#include <sys/types.h>
#include <sstream>
#include <vector>
#include "NetworkInterface.h"
#include "NetworkInterfaceList.h"
using namespace std;

/* 
 * Function: Constructor.
 * Description: constructs NetworkInterfaceList object.
 * Parameters: none.
 * Return: n/a.
 */
NetworkInterfaceList::NetworkInterfaceList() {
	
	DIR *dirPointer;
	struct dirent *dirEntryPointer;
	string filepath;
	string interfaceName;
	
	string directory = "/sys/class/net";
	dirPointer = opendir(directory.c_str()); // Opens directory of network interfaces
	
	//If dirPointer points to a directory, this code is executed.
	if(dirPointer != NULL) {
		
		//Loops while there are still files to read in the directory.
		while(dirEntryPointer = readdir(dirPointer)) {
		
			if (!dirEntryPointer->d_name || dirEntryPointer->d_name[0] == '.') {
				//If directory doesn't begin with a number, it is skipped over.
				continue;
			}
			
			interfaceName = string(dirEntryPointer->d_name); // Sets interfaceName to name of file being read.
			filepath = "/sys/class/net/" + interfaceName + "/address"; // Gets path of file in order to read it.
			string line;
			ifstream file;
			file.open(filepath);
			
			// Loops while there are still lines to read.
			while (getline(file, line)) {
				NetworkInterface netInterface; // Creates NetworkInterface interface object to insert name and MAC address.
				netInterface.setInterfaceName(interfaceName); // Sets netInterface's name to filename.
				netInterface.setMacAddress(line); // Sets netInterface's MAC address to line read from file.
				
				interfaceList.push_back(netInterface); // Adds netInterface object to interfaceList.
			}
		}
	}
};

//Destructor
NetworkInterfaceList::~NetworkInterfaceList() {
	
}

/* 
 * Function: getInterfaceList()
 * Description: returns vector of NetworkInterface objects.
 * Parameters: none.
 * Return: interfaceList.
 *
 */
vector<NetworkInterface> NetworkInterfaceList::getInterfaceList() {
	return interfaceList;
}

/* 
 * Function: to_string()
 * Description: returns string representation of vector of NetworkInterface objects.
 * Parameters: none.
 * Return: Each NetworkInterface's interface and MAC address.
 *
 */	
string NetworkInterfaceList::to_string() {
	stringstream ss;
	for(int i=0; i<interfaceList.size(); i++) {
		ss << "Interface: " << interfaceList[i].getInterfaceName() << " , MAC Address: " << interfaceList[i].getMacAddress() << endl;
	}
	return ss.str();
}