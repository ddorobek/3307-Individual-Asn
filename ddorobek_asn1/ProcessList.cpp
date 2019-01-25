/* 
 * File: ProcessList.cpp
 * Author: Damien Dorobek
 * Description: This file creates a vector of Process objects.
 * Date: October 4, 2018
 * 
 */

#include <unistd.h>
#include <dirent.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "Process.h"
#include "ProcessList.h"
using namespace std;

/* 
 * Function: Constructor.
 * Description: constructs ProcessList object.
 * Parameters: none.
 * Return: n/a.
 */
ProcessList::ProcessList() {
	
	DIR *dirPointer;
	struct dirent *dirEntryPointer;
	string filepath;
	
	string directory = "/proc";
	dirPointer = opendir(directory.c_str()); // Opens directory of processes
	
	//If dirPointer points to a directory, this code is executed.
	if(dirPointer != NULL) {
		
		//Loops while there are still files to read in the directory.
		while(dirEntryPointer = readdir(dirPointer)) {
			
			
			if (!dirEntryPointer->d_name || dirEntryPointer->d_name[0] == '.')
				// . and .. directories are skipped over.
				continue;
			
			if(!(dirEntryPointer->d_name[0] == '0' || dirEntryPointer->d_name[0] == '1' || dirEntryPointer->d_name[0] == '2' || dirEntryPointer->d_name[0] == '3' || dirEntryPointer->d_name[0] == '4' || dirEntryPointer->d_name[0] == '5' || dirEntryPointer->d_name[0] == '6' || dirEntryPointer->d_name[0] == '7' || dirEntryPointer->d_name[0] == '8' || dirEntryPointer->d_name[0] == '9')) {
				// If directory doesn't start with a number, it is skipped over (processes are integers).
				continue;
			}
			
			Process process; // Initializes Process object
			process.setProcessID("Pid:    " + string(dirEntryPointer->d_name)); //Sets process id to name of file being read.
			
			filepath = "/proc/" + string(dirEntryPointer->d_name) + "/status"; //Gets path of file containing processor information.
			string line;
			ifstream file;
			file.open(filepath);
			
			//Loops while there are still lines to be read.
			while (getline(file, line)) {
							
				if (line.find("Name") == 0) {
					process.setProcessName(line); //Sets processor name to line containing "Name".
				}
				
				if (line.find("Uid") == 0) {
					process.setOwnerUID(line); //Sets owner UID to line containing "Uid".
				}
				
				if (line.find("PPid") == 0) {
					process.setParentProcessID(line); //Sets parent processor id to line containing "PPid".
				}
				
				if (line.find("State") == 0) {
					process.setProcessState(line); //Sets processor state to line containing "State".
				}	
			}
			
			processList.push_back(process); // Adds netInterface object to interfaceList.
		}
	}
};

//Destructor
ProcessList::~ProcessList() {
	
}

/* 
 * Function: getProcessList()
 * Description: returns vector of Process objects.
 * Parameters: none.
 * Return: processList.
 *
 */
vector<Process> ProcessList::getProcessList() {
	return processList;
}

/* 
 * Function: to_string()
 * Description: returns string representation of vector of Process objects.
 * Parameters: none.
 * Return: Each Process's information.
 *
 */
string ProcessList::to_string() {
	stringstream ss;
	for(int i=0; i<processList.size(); i++) {
		ss << processList[i].getProcessID() << endl << processList[i].getProcessName() << endl << processList[i].getOwnerUID() << endl << processList[i].getParentProcessID() << endl <<  processList[i].getProcessState() << endl << endl;
	}
	return ss.str();
}