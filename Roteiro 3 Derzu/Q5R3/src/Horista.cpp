#include "Horista.h"

Horista::Horista()
{
    //ctor
}
Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas)
{
    this->nome=nome;
    this->matricula=matricula;
    this->salarioPorHora=salarioPorHora;
    this->horasTrabalhadas=horasTrabalhadas;
}

Horista::~Horista()
{
    //dtor
}
void Horista::setSalarioPorHora(double salarioPorHora)
{
    this->salarioPorHora=salarioPorHora;
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas)
{
    this->horasTrabalhadas=horasTrabalhadas;
}

double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}

double Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}

double Horista::calculaSalario()
{
    double horasExtras;

    if(horasTrabalhadas<=40)
        return salarioPorHora*horasTrabalhadas;

    if(horasTrabalhadas>40){

        horasExtras=horasTrabalhadas-40;

        return (salarioPorHora*horasTrabalhadas)+(horasExtras*(1.5*salarioPorHora));
    }
}
