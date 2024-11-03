#include <cstdlib>
#include <iostream>
#include <string>
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

std::string componente::getValMult() {
    std::string mult;
    std::string val;
    // escolhe o multiplicador adequado
    if (valor >= 1000000) { // Maior que 1M
        val = std::to_string(valor/1000000);
        mult = "M";
    } else if (valor >= 1000) { // Maior que 1k
        val = std::to_string(valor/1000);
        mult = "k";
    } else if (valor < 0.000000001) { // Menor que 1n
        val = std::to_string(valor/0.000000000001);
        std::cout << val << std::endl;
        mult = "p";
    } else if (valor < 0.000001) { // Menor que 1u
        val = std::to_string(valor/0.000000001);
        std::cout << val << std::endl;
        mult = "n";
    } else if (valor < 0.001) { // Menor que 1m
        val = std::to_string(valor/0.000001);
        mult = "u";
    } else { // Nao precisa de multiplicador
        val = std::to_string(valor);
        mult = "";
    }

    //trata o valor
    if (val.find(".") != std::string::npos) {
        std::string sub = val.substr(val.find("."), std::string::npos);
        val.erase(val.find("."), std::string::npos);
        if (sub.find("0") != 1) {
            sub = sub.substr(0, sub.find("0"));
            val = val + sub; 
        }
    }
    return val + mult;
}
 // Sobrecarga fora da classe
std::ostream& operator << (std::ostream&saida,componente &cmp)
{
    saida << cmp.getValMult() << " " << cmp.getU() ;
    return saida;
}


