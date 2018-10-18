#include "Assalariado.h"

Assalariado::Assalariado()
{
    //ctor
}

Assalariado::Assalariado(std::string nome, int matricula, double salario)
{
    this->nome=nome;
    this->matricula=matricula;
    this->salario=salario;
}

Assalariado::~Assalariado()
{
    //dtor
}
void Assalariado::setSalario(double salario)
{
    this->salario=salario;
}

double Assalariado::getSalario()
{
    return salario;
}

double Assalariado::calculaSalario()
{
   return salario;
}
