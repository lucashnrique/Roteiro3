#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}
void Funcionario::setNome(std::string nome)
{
    this->nome=nome;
}

void Funcionario::setMatricula(int matricula)
{
    this->matricula=matricula;
}

std::string Funcionario::getNome()
{
    return nome;
}

int Funcionario::getMatricula()
{
    return matricula;
}

