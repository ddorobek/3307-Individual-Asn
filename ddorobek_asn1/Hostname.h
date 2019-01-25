/* 
 * File:   Hostname.h
 * Author: Damien Dorobek
 * Description: Header file of Hostname.cpp file which retrieves the system hostname.
 * Date: October 4, 2018
 * 
 */
 
#ifndef HOSTNAME_H
#define HOSTNAME_H

#include <unistd.h>
#include <string>
#include <iostream>
#include <string.h>

class Hostname {
	public:
		Hostname();
		~Hostname();
		std::string getHostname();
		std::string to_string();
	private:
		std::string hostname;
};

#endif