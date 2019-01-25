/* 
 * File: Process.cpp
 * Author: Damien Dorobek
 * Description: This file creates a Process object that will be put in a vector.
 * Date: October 4, 2018
 * 
 */

#include <string>
#include "Process.h"
using namespace std;

/* 
 * Function: Constructor.
 * Description: constructs empty Process object.
 * Parameters: none.
 * Return: n/a.
 */
Process::Process() {
	id = "";
	name = "";
	ownerUID = "";
	parentProcessID = "";
	state = "";
};

//Destructor
Process::~Process() {
	
}

/* 
 * Function: getProcessID()
 * Description: returns processID as string.
 * Parameters: none.
 * Return: processID.
 *
 */
string Process::getProcessID() {
	return id;
}
		
/* 
 * Function: getProcessName()
 * Description: returns process name as string.
 * Parameters: none.
 * Return: process name.
 *
 */
string Process::getProcessName() {
	return name;
}

/* 
 * Function: getOwnerUID()
 * Description: returns Owner UID as string.
 * Parameters: none.
 * Return: Owner UID.
 *
 */
string Process::getOwnerUID() {
	return ownerUID;
}

/* 
 * Function: getParentProcessID()
 * Description: returns parent process ID as string.
 * Parameters: none.
 * Return: parent process ID.
 *
 */
string Process::getParentProcessID() {
	return parentProcessID;
}

/* 
 * Function: getProcessState()
 * Description: returns process state as string.
 * Parameters: none.
 * Return: process state.
 *
 */
string Process::getProcessState() {
	return state;
}
		
/* 
 * Function: setProcessID()
 * Description: sets process ID to string passed as parameter.
 * Parameters: process ID.
 * Return: void.
 *
 */
void Process::setProcessID(string processID) {
	id = processID;
}
	
/* 
 * Function: setProcessName()
 * Description: sets process name to string passed as parameter.
 * Parameters: process name.
 * Return: void.
 *
 */	
void Process::setProcessName(string processName) {
	name = processName;
}

/* 
 * Function: setOwnerUID()
 * Description: sets Owner UID to string passed as parameter.
 * Parameters: Owner UID.
 * Return: void.
 *
 */	
void Process::setOwnerUID(string pOwnerUID) {
	ownerUID = pOwnerUID;
}

/* 
 * Function: setParentProcessID()
 * Description: sets parent process id to string passed as parameter.
 * Parameters: parent process id.
 * Return: void.
 *
 */	
void Process::setParentProcessID(string pProcessID) {
	parentProcessID = pProcessID;
}

/* 
 * Function: setProcessState()
 * Description: sets process state to string passed as parameter.
 * Parameters: process state.
 * Return: void.
 *
 */	
void Process::setProcessState(string processState) {
	state = processState;
}

/* 
 * Function: to_string()
 * Description: returns string representation of process ID.
 * Parameters: none.
 * Return: process ID.
 *
 */			
string Process::to_string() {
	return id;
}