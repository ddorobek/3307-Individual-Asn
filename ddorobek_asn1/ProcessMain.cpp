/* 
 * File:   ProcessMain.cpp
 * Author: Damien Dorobek
 * Description: Tests ProcessList.cpp and Process.cpp functionality.
 * Date: October 4, 2018
 * 
 */

#include <unistd.h>
#include <dirent.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "Process.h"
#include "ProcessList.h"
using namespace std;

/* Function: Main.
 * Description: constructs ProcessList object and displays information to user.
 * Parameters: none.
 * Return: 0.
 */
int main() {
	ProcessList procList;
    cout << procList.to_string();
    return 0;
}