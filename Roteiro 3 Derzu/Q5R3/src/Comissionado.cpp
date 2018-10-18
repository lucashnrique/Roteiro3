#include "Comissionado.h"

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::Comissionado(std::string nome, int matricula, double vendasSemanais, double percentualComissao)
{
    this->nome=nome;
    this->matricula=matricula;
    this->vendasSemanais=vendasSemanais;
    this->percentualComissao=percentualComissao;
}

Comissionado::~Comissionado()
{
    //dtor
}

void Comissionado::setVendasSemanais(double vendasSemanais)
{
   this->vendasSemanais=vendasSemanais;
}

void Comissionado::setPercentualComissao(double percentualComissao)
{
    this->percentualComissao=percentualComissao;
}

double Comissionado::getVendasSemanais()
{
    return vendasSemanais;
}

double Comissionado::getPercentualComissao()
{
    return percentualComissao;
}

double Comissionado::calculaSalario()
{
    return (vendasSemanais*percentualComissao)*4;
}
