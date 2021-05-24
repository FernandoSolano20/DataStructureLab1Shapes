//
// Created by fersolano on 5/17/2021.
//

#ifndef CUADRADO_H
#define CUADRADO_H


#include "Figura.h"

class Cuadrado : public Figura {
    public:
        Cuadrado(float lado=0.0);
        float area ();
        float perimetro ();
};


#endif //CUADRADO_H
