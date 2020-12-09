#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Computadora
{
    string sistemaOp;
    string procesador;
    float almacenamiento;
    float memoriaRam;
public:
    Computadora();
    Computadora(const string &sistemaOp,const string &procesador,float almacenamiento,float memoriaRam);

    void setSistemaOp(const string &v);
    string getSistemaOp();

    void setProcesador(const string &v);
    string getProcesador();

    void setAlmacenamiento(float v);
    float getAlmacenamiento();

    void setMemoriaRam(float v);
    float getMemoriaRam();

    friend ostream& operator<<(ostream &out, const Computadora &c){

    out << left;
    out << setw(15)<<c.sistemaOp;
    out << setw(20)<<c.procesador;
    out << setw(17)<<c.almacenamiento;
    out << setw(15)<<c.memoriaRam;
    out << endl;

    return out;
    }

    friend istream& operator>>(istream &in, Computadora &c){

    //string temp;
    //string tempPro;
    //float almacena;
    //float ram;

    cout << "Sistema Operativo: ";
    getline(cin, c.sistemaOp);

    cout << "Procesador: ";
    getline(cin, c.procesador);

    cout << "Almacenamiento: ";
    cin >> c.almacenamiento;

    cout << "Memoria RAM: ";
    cin >> c.memoriaRam;

    return in;
    }

    bool operator==(const Computadora& c){
        return sistemaOp == c.sistemaOp;
    }

    bool operator==(const Computadora& c)const{
        return sistemaOp == c.sistemaOp;
    }

    bool operator<(const Computadora &c) {
        return sistemaOp < c.sistemaOp;
    }

    bool operator<(const Computadora &c) const{
        return sistemaOp < c.sistemaOp;
    }
};

#endif // COMPUTADORA_H_INCLUDED
