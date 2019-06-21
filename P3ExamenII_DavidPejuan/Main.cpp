#include <iostream>
#include "NodoArbol.h"
using std::cout;
using std::endl;
using std::cin;

void recorrer(NodoArbol*);
NodoArbol* paraagregar(NodoArbol*);

int main(){
    vector<NodoArbol *> Hijos;
    Militar General= Militar("Yagabarish Skrobernov","M_17","72", "General");
    NodoArbol* Ejercito=new NodoArbol(General,Hijos);
    int opcion=0;
    while (opcion!=3)
    {
        cout<<"1) Agregar Militar. "<<endl
            <<"2) Listar. "<<endl
            <<"3) salir. "<<endl
            <<"Ingrese su seleccion: ";
        cin>>opcion;
        cout<<endl;
        switch (opcion)
        {
        case 1:{
                NodoArbol* apuntador=paraagregar(Ejercito);
                string rango=apuntador->getMilitar().getRango();
                string rangonuevo="";
                if (rango=="General")
                {
                    rangonuevo="Coronel";
                }else if (rango=="Coronel")
                {
                    rangonuevo="Mayor";
                }else if (rango=="Mayor")
                {
                    rangonuevo="Capitan";
                }else if (rango=="Teniente")
                {
                    rangonuevo="Sargento";
                }else if (rango=="Sargento")
                {
                    rangonuevo="Cabo";
                }else if (rango=="Cabo")
                {
                    rangonuevo="Soldado";
                }
                cout<<"Ingrese el nombre del militar: "<<endl;
                string nuevonombre;
                cin>>nuevonombre;
                cout<<"Ingrese el codigo del militar: "<<endl;
                string nuevocodigo;
                cin>>nuevocodigo;
                cout<<"Ingrese la edad del militar: "<<endl;
                string nuevaedad;
                cin>>nuevaedad;
                Militar nuevomilitar=Militar(nuevonombre,nuevocodigo,nuevaedad,rangonuevo);
                vector<NodoArbol *> nuevosHijos;
                NodoArbol * nuevo=new NodoArbol(nuevomilitar,nuevosHijos);
                apuntador->getHijos().push_back(nuevo);
            }
            
            break;
        case 2:{
                recorrer(Ejercito);
            }
            break;
        
        default:
            break;
        }//fin main switch.

    }   
}
void recorrer(NodoArbol* Arbol){
    cout<<Arbol->getMilitar().getNombre();
    for (int i = 0; i < Arbol->getHijos().size(); i++)
    {
        recorrer(Arbol->getHijos()[i]);
    }
    
}
NodoArbol * paraagregar(NodoArbol* nodo){
    for (int i = 0; i < nodo->getHijos().size(); i++)
    {
        cout<<i<<") "<<nodo->getMilitar().getNombre()<<"rango: "<<nodo->getMilitar().getRango()<<endl;

        //recorrer(nodo->getHijos);
    }
    cout<<"Ingrese la posicion del militar a quien le pondra subordinado: ";
    int mili=0;
    cin>>mili;
    cout<<endl;
    cout<<"1) Ir a un nivel mas profundo dentro de ese militar."
        <<"2) Seleccionar y agregar para ese militar"
        <<"Ingrese su seleccion: ";
    int recur=0;
    cin>>recur;
    cout<<endl;
    if (recur==1)
    {
        paraagregar(nodo->getHijos()[mili]);
    }else if(recur==2){
        return nodo->getHijos()[mili];
    }   
}