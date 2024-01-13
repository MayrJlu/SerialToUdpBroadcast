#include <cstdlib>
#include <iostream>
#include "./UdpClnt.h"

using  namespace std;

int udpPort;

int main(int argc, char *argv[])
{
    const char *input;
    if (argc >= 3)
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
	    if (i == 2)
	    {
                input = argv[i];
                cout << "udp" << endl;
                cout << input << endl;
                cout << "Port" << endl;
	    }
        }
	udpClnt(udpPort, input);
        return 1;
    }
    else
    {
        cout << "example: ./UdpC 8080 text_to_send" << endl;
        return 0;
    }
}

