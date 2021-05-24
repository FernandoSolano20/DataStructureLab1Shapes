//
// Created by fersolano on 5/17/2021.
//

#include "Cuadrado.h"
//
// Created by fersolano on 5/17/2021.
//
#include "Cuadrado.h"
Cuadrado::Cuadrado(float medida){
    setLado(medida);
}
float Cuadrado::area () {
    return getLado() * getLado();
}

float Cuadrado::perimetro() {
    return getLado() + getLado();
}
