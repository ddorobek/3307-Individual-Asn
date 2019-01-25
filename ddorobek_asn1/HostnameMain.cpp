/* 
 * File:   HostnameMain.cpp
 * Author: Damien Dorobek
 * Description: Tests Hostname.cpp functionality.
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
 * Function: Main.
 * Description: constructs Hostname object and displays information to user.
 * Parameters: none.
 * Return: 0.
 */
int main() {
	Hostname host;
    cout << "Hostname: " << host.to_string();
    return 0;
}