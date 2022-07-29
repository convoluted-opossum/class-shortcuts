#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void oldbat() {
	std::ofstream old("old.bat");
	std::string oldb = "@echo off \n"
		"color 0d\n"
		"echo NOTE : Makesure to edit the stuff in the\n"
		"echo Ping, Tracert Options\n"
		"echo NOTE This bat file is no longer used and so there won't be any more corrections made\n"
		"echo Visit convoluted-opossum on Github for the .exe version, which has far better options\n"
		"echo I'm not responsible for any damages you might cause\n"
		"echo If you continue you agreed to my warning\n"
		"pause\n"

		": Main\n"
		"cls\n"
		"CHOICE /c : 123456 /m \"SystemInfo IPConfig Ping Tracert Netstat\"\n"
		"IF ERRORLEVEL 5 GOTO NetstatCMD\n"
		"IF ERRORLEVEL 4 GOTO TracertCMD\n"
		"IF ERRORLEVEL 3 GOTO PingCMD\n"
		"IF ERRORLEVEL 2 GOTO IPConfigCMD\n"
		"IF ERRORLEVEL 1 GOTO SystemCMD\n"

		":: >>>>>>>>>>>>>>>>>>>> > Things that need to be edited\n"
		": Ping\n"
		"::Edit before use\n"
		"ping google.com - n 10 >> ping - v4.dat\n"
		"GOTO PingCMD\n"

		": Ping - v6\n"
		"::Edit before use\n"
		"::ping(IPv6) - n6 10 >> ping - v6.dat\n"
		"GOTO PingCMD\n"

		": Tracert\n"
		"::Edit before use\n"
		"tracert - h 15 google.com >> tracert - v4.dat\n"
		"GOTO TracertCMD\n"

		": Tracertv6\n"
		"::Edit before use\n"
		"::tracert - h15(IPV6) - 6 >> tracert - v6.dat\n"
		"GOTO TracertCMD\n"

		":: ================================ = Tools DO NOT EDIT\n"
		": SystemInfo\n"
		"systeminfo >> systeminfo.dat\n"
		"GOTO SystemCMD\n"

		": SystemNetwork\n"
		"ipconfig / all >> networkinfo.dat\n"
		"GOTO SystemCMD\n"

		": ReleaseRenew\n"
		"ipconfig release\n"
		"timeout 5\n"
		"ipconfig renew\n"
		"GOTO IPConfigCMD\n"

		": ReleaseRenew6\n"
		"ipconfig release6\n"
		"timeout 5\n"
		"ipconfig renew6\n"
		"GOTO IPConfigCMD\n"

		": Flush\n"
		"ipconfig flushdns\n"
		"timeout 5\n"
		"GOTO IPConfigCMD\n"
		":: ======================================Menus DO NOT EDIT\n"
		": PingCMD\n"
		"cls\n"
		"CHOICE /c:123 /m \"Ping IPv6 BACK\"\n"
		"IF ERRORLEVEL 3 GOTO Main\n"
		"IF ERRORLEVEL 2 GOTO Ping - v6\n"
		"IF ERRORLEVEL 1 GOTO Ping\n"

		": TracertCMD\n"
		"cls\n"
		"CHOICE /c:12 /m \"Tracert BACK\"\n"
		"IF ERRORLEVEL 2 GOTO Main\n"
		"IF ERRORLEVEL 3 GOTO Tracertv6\n"
		"IF ERRORLEVEL 1 GOTO Tracert\n"

		": IPConfigCMD\n"
		"cls\n"
		"CHOICE /c: 123456 /m \"RRIPv4 RRIPv6 Flush BACK\"\n"
		"IF ERRORLEVEL 4 GOTO Main\n"
		"IF ERRORLEVEL 3 GOTO Flush\n"
		"IF ERRORLEVEL 2 GOTO ReleaseRenew6\n"
		"IF ERRORLEVEL 1 GOTO ReleaseRenew\n"

		": SystemCMD\n"
		"cls\n"
		"CHOICE /c:123 /m \"Systeminfo Networkinfo BACK\"\n"
		"IF ERRORLEVEL 3 GOTO Main\n"
		"IF ERRORLEVEL 2 GOTO SystemNetwork\n"
		"IF ERRORLEVEL 1 GOTO SystemInfo\n"

		": NetstatCMD\n"
		"cls\n"
		"CHOICE /c:12345 /m \"Ethernet Route Stat Exe Netstat BACK\"\n"
		"IF ERRORLEVEL 6 GOTO Main\n"
		"IF ERRORLEVEL 5 GOTO NetS\n"
		"IF ERRORLEVEL 4 GOTO NetExe\n"
		"IF ERRORLEVEL 3 GOTO Netstat\n"
		"IF ERRORLEVEL 2 GOTO NetRoute\n"
		"IF ERRORLEVEL 1 GOTO NetEthernet\n"

		"::NetStat\n"
		":NetEthernet\n"
		"netstat - e >> netstat - ethernet.dat\n"
		"timeout 5\n"
		"GOTO NetstatCMD\n"

		": NetRoute\n"
		"netstat - r >> Netstat - routing.dat\n"
		"GOTO NetstatCMD\n"

		": Netstat\n"
		"netstat - s >> Netstat - stat.dat\n"
		"timeout 5\n"
		"GOTO NetstatCMD\n"

		": NetExe\n"
		"netstat - bo >> Netstat - exe.dat\n"
		"GOTO NetstatCMD\n"

		": NetS\n"
		"netstat - no Netstat.dat\n"
		"GOTO NetstatCMD";
	old << oldb;
	old.close();
}

void makingbat() {
	int MB{};
	while (MB < 8) {
		string SYSTEMINFO = "@echo off\n systeminfo >> OUTPUT%random%.txt", 
			IPCONFIGINFO = "@echo off\n ipconfig /all >> OUTPUT%random%.txt", 
			PING = "@echo off\n ping IP >> OUTPUT%random%.txt", 
			TRACERT = "@echo off\n tracert -SWITCH IP >> OUTPUT%random%.txt", 
			NETSTAT = "@echo off\n netstat SWITCH >> OUTPUT%random%.txt", 
			NSLOOKUP = "@echo off\n nslookup SWITCH >> OUTPUT%random%.txt", 
			FLUSHDNS = "@echo off\n ipconfig /flushdns", 
			RELEASERENEW = "@echo off\n ipconfig /release\n ipconfig /renew";
		fstream making("madebat%random%.bat");
		cout << "What type of bat file?\n\n"
			"(1) SYSTEMINFO\n",
			"(2) IPCONFIG /ALL\n",
			"(3) PING -- REMEMBER to Edit\n",
			"(4) TRACERT -- REMEMBER to Edit\n",
			"(5) NETSTAT -- REMEMBER to Edit\n",
			"(6) NS LOOK UP -- REMEMBER to Edit\n"
			"(7) FLUSHDNS\n",
			"(8) IPCONFIG /RELEASE /RENEW\n";
		cin >> MB;
		switch (MB) {
		case 1:
			making << SYSTEMINFO;
			making.close();
			continue;
		case 2:
			making << IPCONFIGINFO;
			making.close();
			continue;
		case 3:
			making << PING;
			making.close();
			continue;
		case 4:
			making << TRACERT;
			making.close();
			continue;
		case 5:
			making << NETSTAT;
			making.close();
			continue;
		case 6:
			making << NSLOOKUP;
			making.close();
			continue;
		case 7:
			making << FLUSHDNS;
			making.close();
			continue;
		case 8:
			making << RELEASERENEW;
			making.close();
			continue;

		}
	}
}
