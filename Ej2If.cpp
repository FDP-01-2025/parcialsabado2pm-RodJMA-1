#include <iostream>
using namespace std;

int main()
{
    // Declarar variable tipo entero
    int numero;
    // Mostrar mensaje al usuario
    cout << "Ingrese un numero para determinar si es positivo, negativo o cero" << endl;
    // Almacenar el numero ingresado por el usuario
    cin >> numero;

    // Si el numero ingresado por el usuario es mayor que 0
    if (numero > 0)
    {
        // Si se cumple mostrar el mensaje
        cout << "Tu numero " << numero << "  positivo" << endl;
    }
    // Si el numero ingresado por el usuario es menor que 0
    else if (numero < 0)
    {
        // Mostrar el mensaje
        cout << "Tu numero " << numero << "  negativo" << endl;
    }
    // Si no es ni mayor que 0 o menor que 0, entonces es el numero ingresado es 0
    else
    {
        // Mostrar mensaje
        cout << "Tu numero " << numero << " es 0" << endl;
    }

    return 0;
}