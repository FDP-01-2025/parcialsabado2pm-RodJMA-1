#include <iostream>
using namespace std;

int main()
{
    // Declarar una variable para almacenar los multiplos de 7
    int multiplo;

    // Mostra mensaje
    cout << "Los multiplos de 7 entre 1 y 100" << endl;

    // Iniciar bucle en 1 y parar hasta que sea igual a 100
    for (int i = 1; i <= 100; i++)
    {
        // Multiplicar el valor de i en ese momento por 7
        multiplo = 7 * i;

        // Mostrar los multiplos de 7
        cout << multiplo << endl;
    }

    return 0;
}
