#include <iostream>
#include "Figura.h"
#include "Circulo.h"
#include "Cuadrado.h"

using namespace std;

int main() {
    int opc;
    float lado;
    Figura *figura;
    cout << "Digite lo que desea hacer!\n";
    cout << "1- Circulo\n";
    cout << "2- Cuadro\n";
    cin >> opc;

    if (opc == 1) {
        cout << "Digite el radio!\n";
        cin >> lado;
        figura = new Circulo(lado);
    } else {
        cout << "Digite el lado!\n";
        cin >> lado;
        figura = new Cuadrado(lado);
    }

    cout << "Perimetro es " << figura->perimetro();
    cout << "\nArea es " << figura->area();
    return 0;
}
