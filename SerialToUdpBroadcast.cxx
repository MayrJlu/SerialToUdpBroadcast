#include <cstdlib>
#include <iostream>
#include "./UdpClnt.h"
#include "./SrlPrtRd.h"

using  namespace std;

char *serPort;
int udpPort;
int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        cout << "running" << endl;
        for(int i = 1; i < argc ; i++ )
        {
            if (i == 1)
            {
                serPort = argv[i];
                cout << "ser" << endl;
                cout << serPort << endl;
                cout << "Port" << endl;
            }
            else
            {
                const int inputValue = std::stoi(argv[i]);
                udpPort = inputValue;
                cout << "udp" << endl;
                cout << udpPort << endl;
                cout << "Port" << endl;
            }
        }
        srlPrtRd(serPort);
	const char *buf = "buf tud";
	udpClnt(udpPort, buf);
        return 1;
    }
    else
    {
        cout << "example: ./SerialToUdpBroadcast /dev/ttyUSB0 8080" << endl;
        return 0;
    }
}

