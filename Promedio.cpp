#include <iostream>
using namespace std;

int main() {

    cout << "Buen dia! Calculemos el Promedio de 3 numeros!" << endl;

    //Definiendo variables
    float Numero1 = 0;
    float Numero2 = 0;
    float Numero3 = 0;

    cout << "Por favor, digita los 3 numeros que quisieras promediar" << endl;
    
    //Escribiendo Datos
    cout << "Numero 1: " << endl;
    cin >> Numero1; 
    cout << "Numero 2: " << endl;
    cin >> Numero2;
    cout << "Numero 3: " << endl;
    cin >> Numero3;

    //Definiendo Funcion matematica para calcular el promedio
    float Promedio = (Numero1 + Numero2 + Numero3) / 3;

    //Imprimiendo el resultado
    cout << "El promedio de los numeros es: " << Promedio << endl;

    return 0;

}