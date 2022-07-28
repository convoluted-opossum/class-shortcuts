#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;

void ping() {
	std::string ipP;
	std::cout << "Enter your ip address\n";
	std::cin >> ipP;
	std::string pin = "ping " + ipP + " >> pingdata%random%.dat";
	system(pin.c_str());	
}

void tracenetwork() {
	std::string ipT;
	std::cout << "Enter your ip address\n";
	std::cin >> ipT;
	std::string tra = "tracert -h 15 " + ipT + " >> tracertdata%random%.dat";
	system(tra.c_str());
}

void releaserenew() {
	std::string rr1 = "ipconfig /release", rr2 = "ipconfig /renew";
	system(rr1.c_str());
	system(rr2.c_str());
}

void netstat() {
	std::string net1;
	std::cout << "Enter your switch\n" << "e ethernet stats\n" << "r routing table\n" << "s per protocol stats\n" << "b shows the exe associated\n";
	std::cin >> net1;
	std::string netS = "-" + net1 + " ";
	std::string net = "netstat " + netS + " >> netstat%random%.dat";
	system(net.c_str());
}

void flush() {
	std::string fl = "ipconfig /flushdns";
	system(fl.c_str());
}

void nslookup() {
//	std::cout << "Set your parmameter\n\n" << "ls Domain Info" << "" << "" << "\n" << "\n" << "\n";
	std::string nsL;
	std::cout << "Enter the domain to look up\n\n";
	std::cin >> nsL;
	std::string nsup = "nsloopup ls " + nsL + " >> nslookup%random%.dat";
	system(nsup.c_str());
}

