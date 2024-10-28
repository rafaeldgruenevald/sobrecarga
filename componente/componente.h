#include <ostream>
#include <string>
#ifndef COMPONENTE_H
#define COMPONENTE_H



class componente
{
    public:
//        componente();
        componente(double val=0);
        virtual ~componente();
        double v();
        virtual double V(double i){return tensao;};
        double i(void);
        virtual double I(double v){return corrente;};
        double dT(void);
        bool dT(double val);
        double getVal(){return valor;};
        std::string getU(){return unidade;};
    protected:
        double valor;
        std::string unidade;
        double tensao;
        double corrente;
        double dt;
    private:
};

std::ostream& operator << (std::ostream&saida,componente &cmp);

#endif // COMPONENTE_H
