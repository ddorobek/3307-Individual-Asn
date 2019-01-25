/* 
 * File:   Processor.h
 * Author: Damien Dorobek
 * Description: Header file of OperatingSystem.cpp file which retrieves processor information.
 * Date: October 4, 2018
 * 
 */
#ifndef PROCESSOR_H
#define PROCESSOR_H

#include <unistd.h>
#include <string>
#include <iostream>
#include <string.h>
#include <sstream>

class Processor {
	public:
		Processor();
		~Processor();
		std::string getVendor();
		std::string getModelName();
		std::string getClockSpeed();
		unsigned long getLoadOne();
		unsigned long getLoadFive();
		unsigned long getLoadFifteen();
		std::string to_string();
		
	private:
		std::string vendor;
		std::string modelName;
		std::string clockSpeed;
		unsigned long loadOne;
		unsigned long loadFive;
		unsigned long loadFifteen;
};

#endif