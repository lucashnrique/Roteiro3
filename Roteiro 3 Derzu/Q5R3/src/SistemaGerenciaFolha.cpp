#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{
    //dtor
}

void SistemaGerenciaFolha::setFuncionarios()
{
    static int i=0;
    int tipoFuncionario, matricula;
    std::string nome;

    std::cout << "Digite o tipo de funcionario que deseja adcionar?\n (1)Assalariado (2)Horista (3) Comissionado" << std::endl;
    std::cin >> tipoFuncionario;
    std::cin.ignore();
    std::cout << "Digite o nome do funcionario" << std::endl;
    getline(std::cin, nome);
    std::cout << "Digite a matricula do funcionario" << std::endl;
    std::cin >> matricula;

    if(tipoFuncionario==1){

        double salario;
        std::cout << "Digite o valor do salario" << std::endl;
        std::cin >> salario;

        funcionarios[i] = new Assalariado(nome,matricula,salario);
        i++;
    }
    if(tipoFuncionario==2){

        double salarioPorHora;
        double horasTrabalhadas;

        std::cout << "Digite o valor do salario por hora" << std::endl;
        std::cin >> salarioPorHora;
        std::cout << "Digite a quantidade de horas trabalhadas" << std::endl;
        std::cin >> horasTrabalhadas;

        funcionarios[i] = new Horista(nome,matricula,salarioPorHora,horasTrabalhadas);
        i++;
    }
    if(tipoFuncionario==3){

        double vendasSemanais;
        double percentualComissao;

        std::cout << "Digite o valor das vendas semanais" << std::endl;
        std::cin >> vendasSemanais;
        std::cout << "Digite o percentual de comissao por venda" << std::endl;
        std::cin >> percentualComissao;

        funcionarios[i] = new Comissionado(nome, matricula, vendasSemanais, percentualComissao);
        i++;
    }
}

double SistemaGerenciaFolha::calculaValorTotalFolha()
{
    double valorTotal=0;

    for(int j=0;j<3;j++){

        valorTotal=valorTotal + funcionarios[j]->calculaSalario();
    }

    return valorTotal;
}

double SistemaGerenciaFolha::calculaSalarioFuncionario()
{
    int mat, funcionario;

    std::cout << "Digite a matricula do funcionario que deseja pesquisar" << std::endl;
    std::cin >> mat;

    for(int j=0; j<3; j++){

        if(mat==funcionarios[j]->getMatricula())
            funcionario=j;
    }

    return funcionarios[funcionario]->calculaSalario();
}
