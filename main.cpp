#include <iostream>
#include "punto.h"
#include "rectangulo.h"
int main(){

    Rectangulo miRectangulo;
    miRectangulo.AsignarSupIzq(1,5);
    miRectangulo.AsignarSupDer(7,5);
    miRectangulo.AsignarInfIzq(1,1);
    miRectangulo.AsignarInfDer(7,1);

     miRectangulo.Cuadrilatero();

cout << "El perimetro de la figura es: " << miRectangulo.Perimetro() << endl;
cout << "El area de la figura es es: " << miRectangulo.Area() << endl;



return 0;
}


