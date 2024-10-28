#include <cstdlib>
#include "componente.h"

using namespace std;
// construtor - metodo chamado quando o objeto eh criado
/*
componente::componente()
{
    //ctor
    tensao=0;
    corrente=0;
    valor=0;
    unidade="";
    dt=0.000001;
}
*/
// construtor - metodo chamado quando o objeto eh criado
componente::componente(double val)
{
    //ctor
    tensao=0;
    corrente=0;
    valor=0;
    unidade="";
    dt=0.000001;
    valor=val;

}







// construtor - metodo chamado quando o objeto eh criado
componente::~componente()
{
    //ctor

}


// interfaces
double componente::v()
       {
           return tensao;
      }

double componente:: i(void)
       {
           return corrente;
       }

double componente::dT(void)
{
    return dt;
}
bool componente::dT(double val)
{
  if (val>0)
    {
        dt=val;
        return true;
    }
    else
        return false;
}

 // Sobrecarga fora da classe
std::ostream& operator << (std::ostream&saida,componente &cmp)
{
    saida << cmp.getVal() << " " << cmp.getU() ;
    return saida;
}


