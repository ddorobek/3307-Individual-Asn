/* 
 * File: MenuMain.cpp
 * Author: Damien Dorobek
 * Description: This file displays a menu that the user can traverse to find out information about their computer.
 * Date: October 4, 2018
 * 
 */
 
#include <iostream>
#include <string>
#include <sstream>
#include <ctype.h>
#include "Hostname.cpp"
#include "OperatingSystem.cpp"
#include "Processor.cpp"
#include "Memory.cpp"
#include "NetworkInterface.cpp"
#include "NetworkInterfaceList.cpp"
#include "Process.cpp"
#include "ProcessList.cpp"

int main() {

	while(true) {
		string userInput = "";
		cout << "Enter the number corresponding to the information you would like to view: " << endl;
		cout << "1: System hostname" << endl;
		cout << "2: Operating system details" << endl;
		cout << "3: Processor information" << endl;
		cout << "4: Memory information" << endl;
		cout << "5: Network interfaces" << endl;
		cout << "6: Processes" << endl;
		cout << "7: EXIT" << endl;
		cin >> userInput; //Prompts user to input the number of the information they want to see.
		
		//If user enters 1, creates Hostname object and displays system hostname then deletes object.
		if (userInput == "1") {
			cout << endl;
			Hostname* host = new Hostname();
			cout << "Hostname: " << host->to_string() << endl;
			delete host;
		}
		
		//If user enters 2, creates OperatingSystem object and displays OS information then deletes object.
		else if (userInput == "2") {
			cout << endl;
			OperatingSystem* osInfo = new OperatingSystem();
			cout << osInfo->to_string() << endl;
			delete osInfo;
		}
		
		//If user enters 3, creates Processor object and displays processor information then deletes object.
		else if (userInput == "3") {
			cout << endl;
			Processor* processorInfo = new Processor();
			cout << processorInfo->to_string() << endl;
			delete processorInfo;
		}
		
		//If user enters 4, creates Memory object and displays memory information then deletes object.
		else if (userInput == "4") {
			cout << endl;
			Memory* memoryInfo = new Memory();
			cout << memoryInfo->to_string() << endl;
			delete memoryInfo;
		}
		
		//If user enters 5, creates NetworkInterfaceList object and displays network interfaces then deletes object.
		else if (userInput == "5") {
			cout << endl;
			NetworkInterfaceList* interfaceList = new NetworkInterfaceList();
			cout << interfaceList->to_string() << endl;
			delete interfaceList;
		}
		
		//If user enters 6, creates ProcessList object and displays processes then deletes object.
		else if (userInput == "6") {
			cout << endl;
			ProcessList* processList = new ProcessList();
			cout << processList->to_string() << endl;
			delete processList;
		}
		
		//If user enters 7, loop exits and program terminates.
		else if (userInput == "7") {
			break;
		}
		
		//Otherwise, program will let user know they entered an invalid input and loop will start again.
		else {
			cout << "Invalid input. Please try again." << endl << endl;
			userInput = "";
		}
		
	}
 
}