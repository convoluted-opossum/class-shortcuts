// Libs
#include <iostream>
#include <cstdlib>
#include <string>
// Headers
#include "computernetwork.h"
#include "computersystem.h"
#include "makebat-old.h"
#include "lots-ofwords.h"
// Namespace
using namespace std;
// Main body
int main(){
	int x{};
	while (x < 9) {
	maintext();
	std::cin >> x;
	switch (x) {
	    case 0:
			oldbat();
			continue;
		case 1:
			ping();
			continue;
		case 2:
			tracenetwork();
			continue;
		case 3:
			releaserenew();
			continue;
		case 4:
			flush();
			continue;
		case 5:
			netstat();
			continue;
		case 6:
			nslookup();
			continue;
		case 7:
			compinfo();
			continue;
		case 8:
			networkinfo();
			continue;
		case 9:
			programlist();
			continue;
		case 10:
			scanwin();
			continue;
		case 11:
			checkHDD();
			continue;
		case 12:
			tempF();
			continue;
		case 13: 
			driverinfo();
			continue;
		case 222:
			makingbat();
			break;
		}
	}
	return 0;
}
// End and Comments
// Badly made by convoluted-opossum (Github)