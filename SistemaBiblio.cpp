#include <iostream>
using namespace std;

int main()
{
    string user, libro[4], temp;
    int carnet = 0, digitos, prestar, eliminar, validar = 0;
    char menu;
    cout << "Ingrese su usario" << endl;
    cin >> user;
    cout << "Ingrese su numero de carnet" << endl;
    do
    {
        cin >> carnet;
        digitos = carnet % 10;
        carnet / 10;
        cout << carnet / 10 << endl;
        validar++;                                                                                                                                                                                                                                                                                                                                                                    
    } while (carnet > 1 && carnet < 8);

    digitos = carnet % 10;
    carnet / 10;
    validar++;

    if (validar == 8)
    {
        do
        {
            cout << "Menu" << endl;
            cout << "a. Prestar libro" << endl;
            cout << "b. Devolver libro" << endl;
            cout << "c. Salir" << endl;
            cin >> menu;
            switch (menu)
            {
            case 'a':
                cout << "Prestar un libro" << endl;
                cout << "1. Harry Potter" << endl;
                cout << "2. Demon Slayer" << endl;
                cout << "3. Attack On Titan" << endl;
                cin >> prestar;

                switch (prestar)
                {
                case 1:
                    cout << "Has seleccionado Harry Potter" << endl;
                    cout << "Prestamo exitoso" << endl;
                    libro[0] = "Harry Potter";
                    break;
                case 2:
                    cout << "Has seleccionado Demon Slayer" << endl;
                    cout << "Prestamo exitoso" << endl;
                    libro[1] = "Demon Slayer";
                    break;
                case 3:
                    cout << "Has seleccionado Attack On Titan" << endl;
                    cout << "Prestamo exitoso" << endl;
                    libro[2] = "Attack On Titan";
                    break;

                default:
                    cout << "Opcion invalida " << endl;
                    break;
                }
            case 'b':
                cout << "Devolver libro" << endl;
                for (int i = 0; i < 4; i++)
                {
                    cout << "Opcion: " << i + 1 << libro[i] << endl;
                }
                cout << "Que opcion desea eliminar" << "";
                cin >> eliminar;
                switch (eliminar)
                {
                case 1:
                    temp = libro[0];
                    break;
                case 2:
                    /* code */
                    break;
                case 3:
                    /* code */
                    break;

                default:
                    break;
                }

                break;

            default:
                cout << "Entrada de datos invalida" << endl;
                break;
            }
        } while (menu != 'c');
        cout << "Has seleccionado la opcion salir. Vuelva pronto" << endl;
    }

    return 0;
}