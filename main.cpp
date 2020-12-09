#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Laboratorio lab;

    string op;

    while(true)
    {
        cout<<endl;
        cout<<"********** *********** ********"<<endl;
        cout<<"1) Agregar computadora "<<endl;
        cout<<"2) Mostrar "<<endl;
        cout<<"3) Respaldar "<<endl;
        cout<<"4) Recuperar "<<endl;
        cout<<"5) Insertar "<<endl;
        cout<<"6) Inicializar "<<endl;
        cout<<"7) Eliminar "<<endl;
        cout<<"8) Ordenar "<<endl;
        cout<<"9) Buscar "<<endl;
        cout<<"0) Salir "<<endl;
        getline(cin, op);

        if(op == "1")
        {
            Computadora c;

            cin>>c;

            lab.agregarComputadora(c);
            cin.get();
        }
        else if (op == "2")
        {
            lab.mostrar();
        }
        else if (op == "3")
        {
            lab.respaldar();
        }
        else if (op == "4")
        {
            lab.recuperar();
        }
        else if (op == "5")
        {
            Computadora c;

            cin>>c;

            size_t pos;
            cout<<"Posicion: ";
            cin>>pos;
            cin.get();

            if(pos >= lab.size())
            {
                cout<<"Posicion no valida"<<endl;
            }
            else
            {
                lab.insertar(c,pos);
            }
        }
        else if (op == "6")
        {
            Computadora c;

            cin>>c;

            size_t n;
            cout<<"n: ";
            cin>>n;
            cin.get();

            lab.inicializar(c,n);
        }
        else if (op == "7")
        {
            size_t pos;
            cout<<"Posicion: ";
            cin>>pos;
            cin.get();

            if(pos >= lab.size())
            {
                cout<<"Posicion no valida"<<endl;
            }
            else
            {
                lab.eliminar(pos);
            }

        }
        else if (op == "8")
        {
            lab.ordenar();

        }
        else if (op == "9")
        {
            Computadora c;

            cin>>c;
            cin.get();

            Computadora *ptr = lab.buscar(c);

            if(ptr == nullptr)
            {
                cout<< "No se ha encontrado"<<endl;
            }
            else
            {
                cout<<"Se ha encotrado:     ";
                cout<<*ptr<<endl;
            }
        }

        else if (op == "0")
        {
            break;
        }
    }


    return 0;
}
