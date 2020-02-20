#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include<stdlib.h>
#include <math.h>
#include "punto.h"
using namespace std;


    class Rectangulo{


             public:
                Punto superiorIzquierdo;
                Punto superiorDerecho;
                Punto inferiorIzquierdo;
                Punto inferiorDerecho;







void AsignarSupIzq(float x, float y){
    superiorIzquierdo.asignarX( x);
    superiorIzquierdo.asignarY( y);
}
void AsignarSupDer(float x, float y){
    superiorDerecho.asignarX( x);
    superiorDerecho.asignarY( y);
}
void AsignarInfIzq(float x, float y){
    inferiorIzquierdo.asignarX( x);
    inferiorIzquierdo.asignarY( y);
}
void AsignarInfDer(float x, float y){
    inferiorDerecho.asignarX( x);
    inferiorDerecho.asignarY( y);
}


float Perimetro(){
float base = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura = abs(inferiorDerecho.obtenerY() - superiorIzquierdo.obtenerY());
return (base*2) + (altura*2);
}

float Area(){
float base = abs(inferiorDerecho.obtenerX() - inferiorIzquierdo.obtenerX());
float altura = abs(inferiorDerecho.obtenerY() - superiorIzquierdo.obtenerY());
return (base*altura);
}

void Cuadrilatero(){
      if( ((superiorDerecho.obtenerX()-superiorIzquierdo.obtenerX()) == (inferiorDerecho.obtenerX()-inferiorIzquierdo.obtenerX())) && ((superiorDerecho.obtenerY()-inferiorDerecho.obtenerY())==(superiorIzquierdo.obtenerY()-inferiorIzquierdo.obtenerY())) ){

    cout << "Se ha creado un rectangulo " << endl;
    }
    else {
        cout << " Se ha creado un cuadrilatero" <<endl;

    }
}

};
#endif
