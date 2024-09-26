#include <iostream>
#include <cmath> //Se incluye para usar el comando round()
#include <iomanip> //Se incluye para poder controlar cuantos decimales se le ponen a un entero
using namespace std;

int main(){

//Declaramos una variable para el entero y otra para el decimal
double Decimal = 0.00;
int Entero = 0;

    cout << "Buen dia! Ahora vamos a convertir un numero decimal a entero y viceversa" << endl;
    
    cout << "Digita el numero que quisieras convertir" << endl;
    cin >> Decimal || Entero;

    //Igualamos para poder hacer la conversion de ambos numeros
    Entero = round(Decimal);

    cout << fixed << setprecision(2);
    cout << "Tu numero decimal es: " << Decimal << endl;
    cout << "Tu numero entero es: " << Entero << endl;

    return 0;
}