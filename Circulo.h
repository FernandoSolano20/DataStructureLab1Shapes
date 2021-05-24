//
// Created by fersolano on 5/17/2021.
//

#ifndef CIRCULO_H
#define CIRCULO_H


#include "Figura.h"

class Circulo : public Figura{
    public:
        Circulo(float lado=0.0);
        float area ();
        float perimetro ();
};


#endif //CIRCULO_H
