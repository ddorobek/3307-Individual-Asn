/* 
 * File: Memory.cpp
 * Author: Damien Dorobek
 * Description: This file retrieves memory information.
 * Date: October 4, 2018
 * 
 */

#include <unistd.h>
#include <string>
#include<iostream>
#include <sys/sysinfo.h>
#include <sstream>
#include "Memory.h"
using namespace std;

/* 
 * Function: Constructor.
 * Description: constructs Memory object.
 * Parameters: none.
 * Return: n/a.
 */
Memory::Memory() {

	struct sysinfo sysInfo;
	sysinfo(&sysInfo);
	
	totalMemory = sysInfo.totalram; // sets totalMemory to value found from sysinfo object.
	freeMemory = sysInfo.freeram; // sets freeMemory to value found from sysinfo object.
};

//Destructor
Memory::~Memory() {
	
}

/* 
 * Function: getTotalMemory()
 * Description: returns total memory available as string.
 * Parameters: none.
 * Return: total memory.
 *
 */
unsigned long Memory::getTotalMemory() {
	return totalMemory;
}

/* 
 * Function: getFreeMemory()
 * Description: returns free memory available as string.
 * Parameters: none.
 * Return: free memory.
 *
 */
unsigned long Memory::getFreeMemory() {
	return freeMemory;
}

/* 
 * Function: to_string()
 * Description: returns string representation of memory information.
 * Parameters: none.
 * Return: memory information.
 *
 */		
string Memory::to_string() {
	stringstream ss;
	ss << "Total Memory: " << totalMemory << " Bytes" << endl << "Free Memory:  " << freeMemory << " Bytes" << endl;
	return ss.str();
}