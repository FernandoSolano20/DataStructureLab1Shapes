//
// Created by fersolano on 5/17/2021.
//
#include "Figura.h"
Figura::Figura(float medida){
    lado=medida;
}

float Figura::getLado() {
    return lado;
}

void Figura::setLado(float medida) {
    lado = medida;
}
