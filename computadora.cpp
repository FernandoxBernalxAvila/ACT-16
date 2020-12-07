#include "computadora.h"

#include <iostream>
#include <string>

Computadora::Computadora(){};

Computadora::Computadora(const string &sistemaOp,const string &procesador,float almacenamiento,float memoriaRam){
    this->sistemaOp = sistemaOp;
    this->procesador = procesador;
    this->almacenamiento = almacenamiento;
    this->memoriaRam =memoriaRam;
};

void Computadora::setSistemaOp(const string &v){

    sistemaOp = v;
};

string Computadora::getSistemaOp(){

    return sistemaOp;
};

void Computadora::setProcesador(const string &v){

    procesador = v;
};

string Computadora::getProcesador(){

    return procesador;
};

void Computadora::setAlmacenamiento(float v){

    almacenamiento = v;
};

float Computadora::getAlmacenamiento(){

    return almacenamiento;
};

void Computadora::setMemoriaRam(float v){

    memoriaRam = v;
};

float Computadora::getMemoriaRam(){

    return memoriaRam;
};
