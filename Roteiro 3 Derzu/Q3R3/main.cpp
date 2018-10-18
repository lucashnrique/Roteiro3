#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main()
{
    double sacar, depositar;

    Conta conta("Lucas Henrique",15000,0,50000);
    ContaEspecial contaEsp("Bruno Henrique",1060,1,90);

    conta.definirLimite();
    contaEsp.definirLimite();

    cout << "Digite o valor que deseja sacar" << endl;
    cin >>sacar;
    conta.sacar(sacar);
    cout << conta.getSaldo() << endl;

    cout << "Digite o valor que deseja depositar" << endl;
    cin >>depositar;
    conta.depositar(depositar);
    cout << conta.getSaldo() << endl;

    cout << "Digite o valor que deseja sacar da conta especial" << endl;
    cin >>sacar;
    contaEsp.sacar(sacar);
    cout << contaEsp.getSaldo() << endl;

    cout << "Digite o valor que deseja depositar da conta especial" << endl;
    cin >>depositar;
    contaEsp.depositar(depositar);
    cout << contaEsp.getSaldo() << endl;

    return 0;
}
