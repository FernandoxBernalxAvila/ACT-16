#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED

#include "computadora.h"
#include <vector>

class Laboratorio{

    vector<Computadora> computadoras;
    //Computadora arreglo [5];
    //size_t contador;

public:
    Laboratorio();

    void agregarComputadora(const Computadora &c);
    void mostrar();

    void respaldar_tabla();
    void respaldar();

    void recuperar();

    friend Laboratorio& operator<<(Laboratorio &v, const Computadora &c){

    v.agregarComputadora(c);

    return v;

    }
};

#endif // LABORATORIO_H_INCLUDED
