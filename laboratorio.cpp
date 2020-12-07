#include "laboratorio.h"
#include <fstream>

Laboratorio::Laboratorio(){
    //contador = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c){

    computadoras.push_back(c);
}

void Laboratorio::mostrar(){

    cout << left;
    cout << setw(15) << "Sistema OP";
    cout << setw(20) << "Procesador";
    cout << setw(17) << "Almacenamiento";
    cout << setw(15) << "Memoria RAM";
    cout << endl;

    for (size_t i = 0; i < computadoras.size(); i++){
            Computadora &c = computadoras[i];

            cout << c;

            //cout<<"Sistema Operativo:   "<<c.getSistemaOp()<<endl;
            //cout<<"Procesador:          "<<c.getProcesador()<<endl;
            //cout<<"Almacenamiento:      "<<c.getAlmacenamiento()<<endl;
            //cout<<"Memoria RAM:         "<<c.getMemoriaRam()<<endl;
            //cout<<endl;
    }

}

void Laboratorio::respaldar_tabla(){

    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(15) << "Sistema OP";
        archivo << setw(20) << "Procesador";
        archivo << setw(17) << "Almacenamiento";
        archivo << setw(15) << "Memoria RAM";
        archivo << endl;
        for (size_t i = 0; i < computadoras.size(); i++){
            Computadora &c = computadoras[i];
            archivo << c;

        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){

    ofstream archivo("computadoras.txt");
    if (archivo.is_open()){
        for (size_t i = 0; i < computadoras.size(); i++){
            Computadora &c = computadoras[i];
            archivo << c.getSistemaOp() <<endl;
            archivo << c.getProcesador() <<endl;
            archivo << c.getAlmacenamiento() <<endl;
            archivo << c.getMemoriaRam() <<endl;

        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){

    ifstream archivo("computadoras.txt");

    if (archivo.is_open()){
        string temp;
        float almacenamiento;
        float memoriaRam;
        Computadora c;

        while (true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            c.setSistemaOp(temp);

            getline(archivo, temp);
            c.setProcesador(temp);

            getline(archivo, temp);
            almacenamiento=stof(temp);
            c.setAlmacenamiento(almacenamiento);

            getline(archivo, temp);
            memoriaRam=stof(temp);
            c.setMemoriaRam(memoriaRam);

            agregarComputadora(c);

        }
    }
    archivo.close();
}
