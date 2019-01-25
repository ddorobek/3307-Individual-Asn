/* 
 * File:   OperatingSystemMain.cpp
 * Author: Damien Dorobek
 * Description: Tests OperatingSystem.cpp functionality.
 * Date: October 4, 2018
 * 
 */

#include <unistd.h>
#include <string>
#include <iostream>
#include <sys/utsname.h>
#include <sys/sysinfo.h>
#include <sstream>
#include "OperatingSystem.h"
 
 /* 
 * Function: Main.
 * Description: constructs OperatingSystem object and displays information to user.
 * Parameters: none.
 * Return: 0.
 */
int main() {
	OperatingSystem systemInfo;
    cout << systemInfo.to_string();
    return 0;
}