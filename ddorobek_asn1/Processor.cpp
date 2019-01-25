/* 
 * File:   Processor.cpp
 * Author: Damien Dorobek
 * Description: This file retrieves processor information.
 * Date: October 4, 2018
 * 
 */

#include <string>
#include<iostream>
#include <fstream>
#include <sys/sysinfo.h>
#include <sstream>
#include "Processor.h"
using namespace std;

/* 
 * Function: Constructor.
 * Description: constructs Processor object.
 * Parameters: none.
 * Return: n/a.
 */
Processor::Processor() {
	struct sysinfo sysInfo;
	
	string line;
	ifstream file;
	file.open("/proc/cpuinfo"); // Opens file to get cpu info from.
	
	while (getline(file, line)) {
		if(line.find("vendor_id") == 0) {
			vendor = line; // If the line being checked contains "vendor_id" then vendor is set to this line.
		}
		
		if(line.find("model name") == 0) {
			modelName = line; // If the line being checked contains "model name" then modelName is set to this line.
		}
		
		if(line.find("cpu MHz") == 0) {
			clockSpeed = line; // If the line being checked contains "cpu MHz" then clockSpeed is set to this line.
		}
	}
	
	file.close(); // Closes file after information is retrieved.
	
	// Sets one, five, and fifteen minute load averages to their respective values found from sysinfo object.
	loadOne = sysInfo.loads[0];
	loadFive = sysInfo.loads[1];
	loadFifteen = sysInfo.loads[2];
	
};

//Destructor
Processor::~Processor() {
	
}

/* 
 * Function: getVendor()
 * Description: returns processor's vendor as string.
 * Parameters: none.
 * Return: processor's vendor.
 *
 */
string Processor::getVendor() {
	return vendor;
}

/* 
 * Function: getModelName()
 * Description: returns processor's model name as string.
 * Parameters: none.
 * Return: processor's model name.
 *
 */
string Processor::getModelName() {
	return modelName;
}

/* 
 * Function: getClockSpeed()
 * Description: returns processor's clock speed in MHz as string.
 * Parameters: none.
 * Return: processor's clock speed.
 *
 */
string Processor::getClockSpeed() {
	return clockSpeed;
}

/* 
 * Function: getLoadOne()
 * Description: returns processor's 1 minute load average as unsigned long.
 * Parameters: none.
 * Return: processor's 1 minute load average.
 *
 */
unsigned long Processor::getLoadOne() {
	return loadOne;
}

/* 
 * Function: getLoadFive()
 * Description: returns processor's 5 minute load average as unsigned long.
 * Parameters: none.
 * Return: processor's 5 minute load average.
 *
 */
unsigned long Processor::getLoadFive() {
	return loadFive;
}

/* 
 * Function: getLoadFifteen()
 * Description: returns processor's 15 minute load average as unsigned long.
 * Parameters: none.
 * Return: processor's 15 minute load average.
 *
 */
unsigned long Processor::getLoadFifteen() {
	return loadFifteen;
}

/* 
 * Function: to_string()
 * Description: returns string representation of processor information.
 * Parameters: none.
 * Return: processor information.
 *
 */		
string Processor::to_string() {
	stringstream ss;
	ss << vendor << endl << modelName << endl << clockSpeed << endl << "1 min load      : " << loadOne << endl << "5 min load      : " << loadFive << endl << "15 min load     : " << loadFifteen << endl;
	return ss.str();
}