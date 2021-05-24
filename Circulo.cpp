//
// Created by fersolano on 5/17/2021.
//

#include "Circulo.h"
Circulo::Circulo(float medida){
    setLado(medida);
}
float Circulo::area () {
    return getLado() * getLado() * 3.14;
}

float Circulo::perimetro() {
    return getLado() * 2 * 3.14;
}