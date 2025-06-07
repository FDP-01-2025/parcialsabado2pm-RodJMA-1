#include <iostream>
using namespace std;

int main()
{
    string nombre, apellido;
    char codigo[6], menu;
    bool numero = false, letras = false;
    double notas[9], n, suma = 0;
    cout << "Ingrese su primer nombre" << endl;
    cin >> nombre;
    cout << "Ingrese su primer apellido" << endl;
    cin >> apellido;

    cout << "Ingrese su codigo (Alfanumerico)" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> codigo[i];
    }

    for (int i = 0; i < 6; i++)
    {
        if (codigo[i] >= '0' && codigo[i] <= '9')
        {
            numero = true;
        }

        if (codigo[i] >= 'A' && codigo[i] <= 'z')
        {
            letras = true;
        }
    }

    if (numero && letras)
    {
        do
        {
            cout << "Menu" << endl;
            cout << "a. Agregar nota" << endl;
            cout << "b. Consultar todas las notas" << endl;
            cout << "c. Calcular Promedio " << endl;
            cout << "d. Salir" << endl;
            cin >> menu;
            switch (menu)
            {
            case 'a':

                cout << "Ingrese sus notas" << endl;

                for (int i = 0; i < 9; i++)
                {
                    cin >> notas[i];
                }

                for (int i = 0; i < 9; i++)
                {
                    if (notas[i] < 0 && notas[i] > 10)
                    {
                        return 1;
                    }
                }

                break;
            case 'b':
                cout << "Ingrese sus notas" << endl;
                for (int i = 0; i < 9; i++)
                {
                    cin >> notas[i];
                }

                for (int i = 0; i < 9; i++)
                {
                    if (notas[i] < 0 && notas[i] > 10)
                    {
                        return 1;
                    }
                }
                for (int i = 0; i < 9; i++)
                {
                    cout << notas[i] << endl;
                }

                break;
            case 'c':
                cout << "Ingrese sus notas" << endl;
                for (int i = 0; i < 9; i++)
                {
                    cin >> notas[i];
                }

                for (int i = 0; i < 9; i++)
                {
                    if (notas[i] < 0 && notas[i] > 10)
                    {
                        return 1;
                    }
                }
                for (int i = 0; i < 9; i++)
                {
                    suma += notas[i];
                }

                cout << "Tu promedio es: " << suma / 9 << endl;

                break;

            default:

                break;
            }
        } while (menu != 'd');
        cout << "Has salido" << endl;
    }
    else
    {
        cout << "Entrada de datos invalida" << endl;
    }

    return 0;
}