/* 
 * File:   Hostname.cpp
 * Author: Damien Dorobek
 * Description: This file retrieves the system hostname.
 * Date: October 4, 2018
 * 
 */

#include <unistd.h>
#include <string>
#include <iostream>
#include <string.h>
#include "Hostname.h"

using namespace std;

/* 
 * Function: Constructor.
 * Description: constructs Hostname object.
 * Parameters: none.
 * Return: n/a.
 */
Hostname::Hostname() {
	char host[128];
	gethostname(host, 128); // Gets system hostname and stores it in host.
	
	for(int i=0; i<(unsigned)strlen(host); i++) {
		hostname += host[i]; // Appends each host character to hostname string.
	}
};

//Destructor
Hostname::~Hostname() {
	
}

/* 
 * Function: getHostName()
 * Description: returns system hostname as string.
 * Parameters: none.
 * Return: system hostname.
 *
 */
string Hostname::getHostname() {
	return hostname;
}

/* 
 * Function: to_string()
 * Description: returns string representation of system hostname.
 * Parameters: none.
 * Return: system hostname.
 *
 */
string Hostname::to_string() {
	return hostname + "\n";
}
