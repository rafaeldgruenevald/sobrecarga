#include <cstdlib>
#include <iostream>

#include "fonte/fonte.h"
#include "resistor/resistor.h"
#include "capacitor/capacitor.h"


using namespace std;

int main()
{

    capacitor c1(500);
    capacitor c2(500);
    capacitor c3;

    c3 = c1 || c2;
    std::cout << c3;
}
