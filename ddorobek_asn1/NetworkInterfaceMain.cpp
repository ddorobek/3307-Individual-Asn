/* 
 * File:   NetworkInterfaceMain.cpp
 * Author: Damien Dorobek
 * Description: Tests NetworkInterfaceList.cpp and NetworkInterface.cpp functionality.
 * Date: October 4, 2018
 * 
 */

#include "NetworkInterface.h"
#include "NetworkInterfaceList.h"
#include <unistd.h>
#include <dirent.h>
#include <string>
#include <fstream>
#include <iostream>
#include <sys/types.h>
#include <sstream>
#include <vector>
using namespace std;

/* Function: Main.
 * Description: constructs NetworkInterfaceList object and displays information to user.
 * Parameters: none.
 * Return: 0.
 */
int main() {
	NetworkInterfaceList netInterfaces;
    cout << netInterfaces.to_string();
    return 0;
}