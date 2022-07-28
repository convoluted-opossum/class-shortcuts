// Libs
#include <iostream>
#include <cstdlib>
#include <string>
// Headers
#include "computernetwork.h"
#include "computersystem.h"
// Namespace
using namespace std;
// Main body
int main(){
	int x{};
	while (x < 9) {
	system("cls");
	std::cout << "Choose an option\n\n" << "1 Ping IP\n" << "2 Tracert IP\n" << "3 Release and Renew\n" << "4 DNS Flush\n" << "5 Netstat\n" << "6 NS Lookup\n" << "7 Computer Info\n" << "8 Network Info\n\n";
	std::cin >> x;
	switch (x) {
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
		}
	}
	return 0;
}
// End and Comments
