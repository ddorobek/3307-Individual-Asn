/* 
 * File: ProcessList.h
 * Author: Damien Dorobek
 * Description: Header file of ProcessList.cpp file which creates list of network interfaces information.
 * Date: October 4, 2018
 * 
 */
 
#ifndef PROCESSLIST_H
#define PROCESSLIST_H

#include <unistd.h>
#include <dirent.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "Process.h"

class ProcessList {
	public:
		ProcessList();
		~ProcessList();
		std::vector<Process> getProcessList();
		std::string to_string();
	private:
		std::vector <Process> processList;
};

#endif