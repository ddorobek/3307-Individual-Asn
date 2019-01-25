/* 
 * File: NetworkInterface.cpp
 * Author: Damien Dorobek
 * Description: This file creates a NetworkInterface object that will be put in a vector.
 * Date: October 4, 2018
 * 
 */

#include "NetworkInterface.h"
#include <string>
#include <sstream>
using namespace std;

/* 
 * Function: Constructor.
 * Description: constructs NetworkInterface object.
 * Parameters: none.
 * Return: n/a.
 */
NetworkInterface::NetworkInterface() {
	interfaceName = "";
	macAddress = "";
};

NetworkInterface::~NetworkInterface() {
	
}

/* 
 * Function: getInterfaceName()
 * Description: returns interface name as string.
 * Parameters: none.
 * Return: interface name.
 *
 */
string NetworkInterface::getInterfaceName() {
	return interfaceName;
}
	
/* 
 * Function: getMacAddress()
 * Description: returns MAC address as string.
 * Parameters: none.
 * Return: MAC address.
 *
 */	
string NetworkInterface::getMacAddress() {
	return macAddress;
}
	
/* 
 * Function: setInterfaceName()
 * Description: sets interface name of NetworkInterface object.
 * Parameters: name of new interface name.
 * Return: void.
 *
 */		
void NetworkInterface::setInterfaceName(string name) {
	interfaceName = name;
}
		
/* 
 * Function: setMacAddress()
 * Description: sets MAC address of NetworkInterface object.
 * Parameters: new MAC address string.
 * Return: void.
 *
 */		
void NetworkInterface::setMacAddress(string mac) {
	macAddress = mac;
}

/* 
 * Function: to_string()
 * Description: returns string representation of NetworkInterface object.
 * Parameters: none.
 * Return: Interface name and MAC address of NetworkInterface object..
 *
 */			
string NetworkInterface::to_string() {
	stringstream ss;
	ss << "Interface Name: " << interfaceName << ", MAC Address: " << macAddress << endl;
	return ss.str();
}