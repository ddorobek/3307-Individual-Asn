/* 
 * File: NetworkInterfaceList.h
 * Author: Damien Dorobek
 * Description: Header file of NetworkInterfaceList.cpp file which creates list of network interfaces information.
 * Date: October 4, 2018
 * 
 */
 
#ifndef NETWORKINTERFACELIST_H
#define NETWORKINTERFACELIST_H

#include <string>
#include <vector>
#include "NetworkInterface.h"

class NetworkInterfaceList {
	public:
		NetworkInterfaceList();
		~NetworkInterfaceList();
		std::vector<NetworkInterface> getInterfaceList();
		std::string to_string();
	private:
		std::vector <NetworkInterface> interfaceList;
};

#endif