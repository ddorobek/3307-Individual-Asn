/* 
 * File:   OperatingSystem.cpp
 * Author: Damien Dorobek
 * Description: This file retrieves operating system details.
 * Date: October 4, 2018
 * 
 */

#include <unistd.h>
#include <string>
#include <iostream>
#include <sstream>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include "OperatingSystem.h"
using namespace std;

/* 
 * Function: Constructor.
 * Description: constructs OperatingSystem object.
 * Parameters: none.
 * Return: n/a.
 */
OperatingSystem::OperatingSystem() {

		struct utsname unameData;
		struct sysinfo sysInfo;
		
		uname(&unameData);
		sysinfo(&sysInfo);
		
		// Initializes OperatingSystem attributes from utsname and sysinfo objects.
		osName = unameData.sysname;
		osRelease = unameData.release;
		osVersion = unameData.version;
		osData = unameData.machine;
		sysUptime = sysInfo.uptime;
};

//Destructor
OperatingSystem::~OperatingSystem () {
	
}

/* 
 * Function: getOSName()
 * Description: returns operating system name as string.
 * Parameters: none.
 * Return: operating system name.
 *
 */
string OperatingSystem::getOSName() {
	return osName;
}

/* 
 * Function: getOSRelease()
 * Description: returns operating system release as string.
 * Parameters: none.
 * Return: operating system release.
 *
 */
string OperatingSystem::getOSRelease() {
	return osRelease;
}

/* 
 * Function: getOSVersion()
 * Description: returns operating system version as string.
 * Parameters: none.
 * Return: operating system version.
 *
 */
string OperatingSystem::getOSVersion() {
	return osVersion;
}

/* 
 * Function: getOSData()
 * Description: returns operating system data as string.
 * Parameters: none.
 * Return: operating system data.
 *
 */
string OperatingSystem::getOSData() {
	return osData;
}

/* 
 * Function: getSysUptime()
 * Description: returns operating system uptime as int.
 * Parameters: none.
 * Return: operating system uptime.
 *
 */
int OperatingSystem::getSysUptime() {
	return sysUptime;
}

/* 
 * Function: to_string()
 * Description: returns string representation of operating system details.
 * Parameters: none.
 * Return: operating system details.
 *
 */
string OperatingSystem::to_string() {
	stringstream ss;
	ss << "OS Name: " << osName << "\nOS Release: " << osRelease << "\nOS Version: " << osVersion << "\nOS Data: " << osData << "\nSystem Uptime: " << sysUptime/60/60/24 << ":" << sysUptime/60/60%24 << ":" << sysUptime/60%60 << ":" << sysUptime%60 << endl;
	return ss.str();
}