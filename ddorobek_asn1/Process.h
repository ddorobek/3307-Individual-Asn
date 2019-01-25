/* 
 * File: Process.h
 * Author: Damien Dorobek
 * Description: Header file of Process.cpp file which retrieves process information.
 * Date: October 4, 2018
 * 
 */

#ifndef PROCESS_H
#define PROCESS_H
#include <string>

class Process {
	public:
		Process();
		~Process();
		std::string getProcessID();
		std::string getProcessName();
		std::string getOwnerUID();
		std::string getParentProcessID();
		std::string getProcessState();
		void setProcessID(std::string processID);
		void setProcessName(std::string processName);
		void setOwnerUID(std::string pOwnerUID);
		void setParentProcessID(std::string pProcessID);
		void setProcessState(std::string processState);
		std::string to_string();
	private:
		std::string id;
		std::string name;
		std::string ownerUID;
		std::string parentProcessID;
		std::string state;
};

#endif