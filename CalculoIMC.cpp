#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    cout << "Buen dia! Calculemos el Indice de Masa Corporal (ICM), de una persona \n";

    //Declaracion de variables
    float Peso = 0;
    float Altura = 0;

    //Entrada de los datos a considerar
    cout << "Digite el valor de su peso en Kg \n";
    cin >> Peso;

    cout << "Digite su altura en Metros \n"; 
    cin >> Altura;

    cout << "Ahora que tenemos los datos anteriores, vamos a calcular el IMC \n";

    float IMC = Peso / (Altura * Altura);
    
    cout << fixed << setprecision(2);
    cout << "Tu Indice de Masa Corporal (o IMC) es: " << IMC;

    if (IMC <= 18.50)
    {
        cout << " y usted tiene un peso bajo" << endl;
    }

    else if (IMC > 18.5 && IMC <= 24.9)
    {
        cout << " y usted tiene un peso normal" << endl;
    }

    else if (IMC >= 25.0 && IMC <= 29.9)
    {
        cout << " y usted tiene sobrepeso" << endl;
    }
    else if (IMC >= 30.0 && IMC <= 34.9)
    {
        cout << " y usted tiene obesidad (clase 1)" << endl;
    }
    else if (IMC >= 35.0 && IMC < 40.0)
    {
        cout << " y usted tiene obesidad (clase 2)" << endl;
    }
    else if (IMC >= 40.0)
    {
        cout << " y usted tiene obesidad (clase 3)" << endl;
    }
    else {
        cout << " Como es que sigues con vida?" << endl;
    }
    
    return 0;
}