
#include "../componente/componente.h"


#ifndef CAPACITOR_H
#define CAPACITOR_H


class capacitor : public componente
{
    public:
        capacitor();
        capacitor(double val);
    //    double v();
        double V(double i);
        double I(double v);
        double c();

        bool c(double valor);
    protected:

    private:
};

#endif // CAPACITOR_H
