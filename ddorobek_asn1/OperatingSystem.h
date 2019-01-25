/* 
 * File:   OperatingSystem.h
 * Author: Damien Dorobek
 * Description: Header file of OperatingSystem.cpp file which retrieves operating system details.
 * Date: October 4, 2018
 * 
 */
 
#ifndef OPERATINGSYSTEM_H
#define OPERATINGSYSTEM_H

#include <unistd.h>
#include <string>
#include <iostream>
#include <sstream>

class OperatingSystem {
	public:
		OperatingSystem();
		~OperatingSystem();
		std::string getOSName();
		std::string getOSRelease();
		std::string getOSVersion();
		std::string getOSData();
		int getSysUptime();
		std::string to_string();
	private:
		std::string osName;
		std::string osRelease;
		std::string osVersion;
		std::string osData;
		int sysUptime;
};

#endif