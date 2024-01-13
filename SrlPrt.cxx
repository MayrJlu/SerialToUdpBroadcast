#include <cstdlib>
#include <iostream>
#include "./SrlPrtRd.h"

using  namespace std;

char *serPort;
int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        cout << "running" << endl;
        serPort = argv[1];
        cout << "ser" << endl;
        cout << serPort << endl;
        cout << "Port" << endl;
        
        srlPrtRd(serPort);
        return 1;
    }
    else
    {
        cout << "example: ./SrlPrt /dev/ttyUSB0" << endl;
        return 0;
    }
}

