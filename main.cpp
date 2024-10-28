#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


#include "fonte/fonte.h"
#include "resistor/resistor.h"
#include "capacitor/capacitor.h"


using namespace std;


int main()
{

    resistor r1(2200);
    capacitor c1(0.00005);

    fonte Vf(10);



    ofstream outf;
    outf.open("vc.dat",ios::out);

    double dt=0.001;
    c1.dT(dt);
    double i;

    for (int tempo=0;tempo<1000;tempo++)
    {
    cout << r1.v();
    i=r1.I(Vf.v()-c1.v());

    c1.V(i);
    cout << "t= " << tempo*dt << "  Vc = " << c1.v()<< endl;
    outf << tempo*dt << "  " << c1.v()<<  "  " << i<<  endl;

    }

    outf.close();

}
