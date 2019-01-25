/* 
 * File:   ProcessorMain.cpp
 * Author: Damien Dorobek
 * Description: Tests Processor.cpp functionality.
 * Date: October 4, 2018
 * 
 */

#include <string>
#include<iostream>
#include <fstream>
#include <sys/sysinfo.h>
#include <sstream>
#include "Processor.h"
using namespace std;

 /* 
 * Function: Main.
 * Description: constructs Processor object and displays information to user.
 * Parameters: none.
 * Return: 0.
 */
int main() {
	Processor pInfo;
    cout << pInfo.to_string();
    return 0;
}