/* 
 * File: Memory.h
 * Author: Damien Dorobek
 * Description: Header file of Memory.cpp file which retrieves processor information.
 * Date: October 4, 2018
 * 
 */
#ifndef MEMORY_H
#define MEMORY_H

#include <unistd.h>
#include <string>
#include<iostream>
#include <sys/sysinfo.h>
#include <sstream>

class Memory {
	public:
		Memory();
		~Memory();
		unsigned long getTotalMemory();
		unsigned long getFreeMemory();
		std::string to_string();
	private:
		unsigned long totalMemory;
		unsigned long freeMemory;
};

#endif