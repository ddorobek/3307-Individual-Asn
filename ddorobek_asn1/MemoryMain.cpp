/* 
 * File:   MemoryMain.cpp
 * Author: Damien Dorobek
 * Description: Tests Memory.cpp functionality.
 * Date: October 4, 2018
 * 
 */

#include <unistd.h>
#include <string>
#include<iostream>
#include <sys/sysinfo.h>
#include <sstream>
#include "Memory.h"
using namespace std;

 /* 
 * Function: Main.
 * Description: constructs Memory object and displays information to user.
 * Parameters: none.
 * Return: 0.
 */
int main() {
	Memory memInfo;
    cout << memInfo.to_string();
    return 0;
}