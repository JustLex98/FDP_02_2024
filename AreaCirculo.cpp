#include <iostream>
using namespace std;

int main() {

    cout << "Buen dia! Vamos a calcular el Area de un Circulo" << endl;

    //Declarando las Variables a utlizar
    float pi = 3.141592653589793;
    float r = 0;

    cout << "Ingresa el valor del radio, por favor." << endl;
    cin >> r;

    float Multiplicacion = pi * (r * r);

    cout << "El valor del area del circulo es: " << Multiplicacion << " Unidades Cuadradas." << endl;

    return 0;

}