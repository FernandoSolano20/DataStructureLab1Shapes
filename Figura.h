//
// Created by fersolano on 5/17/2021.
//

#ifndef FIGURA_H
#define FIGURA_H

class Figura{
    public:
        Figura(float lado=0.0);
        virtual float area () = 0;
        virtual float perimetro () = 0;
    protected:
        float getLado();
        void setLado(float medida = 0.0);
    private:
        float lado;
};

#endif //FIGURA_H
