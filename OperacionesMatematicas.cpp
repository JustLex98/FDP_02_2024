#include <iostream>
using namespace std;

int main(){

    cout << "Buen dia! A continuacion te presento algunas operaciones matematicas con los numeros 21 y 9 \n"; 

    //Declarando ambos numeros
    float Numero1 = 21;
    float Numero2 = 9;

    //Definiendo operaciones a realizar
    float Suma = Numero1 + Numero2;
    float Resta = Numero1 - Numero2;
    float Multiplicacion = (Numero1 * Numero2);
    float Division = Numero1 / Numero2; 

    //Imprimiendo los resultados
    cout << "Suma: " << Numero1 << "+" << Numero2 << "=" << Suma << endl;
    cout << "Resta: " << Numero1 << "-" << Numero2 << "=" << Resta << endl;
    cout << "Multiplicacion: " << Numero1 << "*" << Numero2 << "=" << Multiplicacion << endl;
    cout << "Division: " << Numero1 << "/" << Numero2 << "=" << Division << endl;

    return 0;

}