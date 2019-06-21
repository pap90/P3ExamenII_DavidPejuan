#include "NodoArbol.h"
NodoArbol::NodoArbol(Militar kmilitar, vector<NodoArbol *> nodo){
    militar=kmilitar;
    NodosHijos=nodo;
}
vector<NodoArbol *>NodoArbol::getHijos(){
    return NodosHijos;
}
Militar NodoArbol::getMilitar(){
    return militar;
}
void NodoArbol::agregar(NodoArbol* nuevo){
    NodosHijos.push_back(nuevo);
}