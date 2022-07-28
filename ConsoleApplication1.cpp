// Libs
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
// Headers
#include "computernetwork.h"
#include "computersystem.h"
// Namespace
using namespace std;
// Main body
int main()
{
	int input;
	
	std::cout << "Choose an option\n\n" << "1 Ping IP\n" << "2 Tracert IP\n" << "3 Release and Renew\n" << "4 Netstat" << "5 Computer Info\n" << "6 Network Info\n" << "7 Flush Dns\n" << "8 Nslookup\n" << "9 EXIT\n\n";
	std::cin >> input;

	if (input == 1) {
		ping();
		
	}

	if (input == 2) {
		tracenetwork();
		
	}

	if (input == 3) {
		releaserenew();
		
	}

	if (input == 4) {
		netstat();
		
	}

	if (input == 5) {
		compinfo();
		
	}

	if (input == 6) {
		networkinfo();
		
	}

	if (input == 7) {
		flush();
		
	}

	if (input == 8) {
		nslookup();
		
	}

	if (input > 9) {
		std::cout << "Between 1 to 9 ONLY try again\n\n";
		system("cls");
		
	}

	return 0;
}
// End and Comments

