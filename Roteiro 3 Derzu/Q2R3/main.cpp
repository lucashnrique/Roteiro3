#include <iostream>
#include "Triangulo.h"
#include "Retangulo.h"
#include "Circulo.h"

using namespace std;

int main()
{
   FiguraGeometrica *figuras[3];

   figuras[0] = new Triangulo(3,2);
   figuras[1] = new Retangulo(5,2);
   figuras[2] = new Circulo(3.5);

   cout << figuras[0]->calcularArea() << endl;
   cout << figuras[1]->calcularArea() << endl;
   cout << figuras[2]->calcularArea() << endl;

   delete figuras[0];
   delete figuras[1];
   delete figuras[2];

    return 0;
}
