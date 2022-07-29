#pragma once
#include <iostream>
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

void programlist() {
	std::string progL = "wmic product get name >> programlist%random%.dat";
	system(progL.c_str());
}

void scanwin() {
	std::string scanW = "sfc /scannow";
	system(scanW.c_str());
}

void tempF(){
	std::string temp = "del /f /q /s %temp%\\*";
	system(temp.c_str());

}

void checkHDD() {
	string Uchd;
	string chdvol;
	cout << "Enter the switches needed";
	cin >> Uchd; 
	cout << "Enter the drive";
	cin >> chdvol;
	std::string chd1 = ("chkdsk /" + Uchd + chdvol);
	system(chd1.c_str());
}

void driverinfo(){
	std::string drv = "driverquery /fo list /v >> driver%random%.dat";
	system(drv.c_str());
}