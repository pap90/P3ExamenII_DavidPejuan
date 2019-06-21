#ifndef NODOARBOL_H
#define NODOARBOL_H
#include "Militar.h"
#include <vector>
using std::vector;

class NodoArbol
{
private:
    Militar militar;
    vector<NodoArbol *> NodosHijos;
public:
    NodoArbol(Militar,vector<NodoArbol *>);
    vector<NodoArbol *> getHijos();
    Militar getMilitar();
    void agregar(NodoArbol *);
    
};



#endif // !NODOARBOL_H