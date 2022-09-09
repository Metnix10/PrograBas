#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int op;
int pr;
int i = 1;
string nombres[6];

void agregar();
void salir();
void precio();
void limpiar();

void main()
{
    cout << "===========MENU===========\n" << endl;
    cout << "1) Agregar" << endl;
    cout << "2) Modificar" << endl;
    cout << "3) Eliminar" << endl;
    cout << "4) Limpiar" << endl;
    cout << "5) Salir\n" << endl;
    cout << "Qu\202 acci\242n desesa realizar?\n";
    cin >> op;
    switch (op)
    {
    case 1: {

        system("cls");
        agregar();
        break;
    }
    case 4: {
        limpiar();
        break;
    }
    case 5: {
        salir();
        break;
    }
    }
}

void agregar() {
    cout << "Numero de videojuego: " << i << endl; i++;
    cout << "Introduzca el nombre del videojuego: ";
    cin >> nombres[5];
    cout << "Introduzca el ano de lanzamiento: ";
    cin >> nombres[4];
    cout << "Introduzca la clasificaci\242n: ";
    cin >> nombres[3];
    cout << "Introduzca las caracter\241sticas: ";
    cin >> nombres[2];
    cout << "Introduzca la descripci\242n: ";
    cin >> nombres[1];
    cout << "Introduzca el genero: ";
    cin >> nombres[0];
    cout << "Introduzca el precio: ";
    cin >> pr;
    cout << endl;
    precio();

}

void precio() {
    cout << "Nombre: " << nombres[5] << endl;
    cout << "Ano de lanzamiento: " << nombres[4] << endl;
    cout << "Clasificaci\242n: " << nombres[3] << endl;
    cout << "Caracter\241sticas: " << nombres[2] << endl;
    cout << "Descripci\242n: " << nombres[1] << endl;
    cout << "Genero: " << nombres[0] << endl;
    cout << "El precio es de: $" << pr << endl;
    cout << endl;
    cout << "Si desea agregar otro videojuego escriba 1" << endl;
    cout << "Si desea salir escriba 2" << endl;
    cin >> op;
    system("cls");
    if (op == 1 && i <= 3) {
        agregar();
    }
    else if (op == 2) {
        salir();
    }
}

void limpiar() {
    system("cls");
}

void salir() {
    system("exit");
}