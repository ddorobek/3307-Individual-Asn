/* 
 * File: NetworkInterface.h
 * Author: Damien Dorobek
 * Description: Header file of NetworkInterface.cpp file which retrieves network interface information.
 * Date: October 4, 2018
 * 
 */
 #ifndef NETWORKINTERFACE_H
#define NETWORKINTERFACE_H
#include <string>
#include <sstream>

class NetworkInterface {
	public:
		NetworkInterface();
		~NetworkInterface();
		std::string getInterfaceName();
		std::string getMacAddress();
		void setInterfaceName(std::string name);
		void setMacAddress(std::string mac);
		std::string to_string();	
	private:
		std::string interfaceName;
		std::string macAddress;
};

#endif