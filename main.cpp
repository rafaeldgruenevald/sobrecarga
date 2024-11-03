#include <cstdlib>
#include <iostream>

#include "fonte/fonte.h"
#include "resistor/resistor.h"
#include "capacitor/capacitor.h"


using namespace std;

int main()
{

    resistor r1(501.3);
    resistor r2(501.3);
    resistor r3;

    r3 = r1 + r2;
    std::cout << r3 << std::endl;

    capacitor c1(500);
    capacitor c2(500);
    capacitor c3;

    c3 = c1 || c2;
    std::cout << c3 << std::endl;
}
