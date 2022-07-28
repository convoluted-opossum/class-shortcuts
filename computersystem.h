#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void compinfo() {
	std::string ci = "systeminfo >> systeminfo%random%.dat";
	system(ci.c_str());
}

void networkinfo() {
	std::string ni = "ipconfig /all >> networkinfo%random%.dat";
	system(ni.c_str());
}
