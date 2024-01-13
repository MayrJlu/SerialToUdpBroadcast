#include <cstdlib>
#include <iostream>
#include "./UdpSrvr.h"

using  namespace std;

int udpPort;

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        cout << "running" << endl;
        for(int i = 1; i < argc ; i++ )
        {
            if (i == 1)
            {
                const int inputValue = std::stoi(argv[i]);
                udpPort = inputValue;
                cout << "udp" << endl;
                cout << udpPort << endl;
                cout << "Port" << endl;
            }
        }
	udpSrvr(udpPort);
        return 1;
    }
    else
    {
        cout << "example: ./UdpS 8080" << endl;
        return 0;
    }
}

