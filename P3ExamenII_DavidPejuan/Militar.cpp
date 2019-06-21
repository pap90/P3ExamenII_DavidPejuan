#include "Militar.h"
Militar::Militar(){
    nombre="";
    codigo="";
    edad="";
    rango="";
}
Militar::Militar(string knombre, string kcodigo, string kedad,string krango){
    nombre=knombre;
    codigo=kcodigo;
    edad=kedad;
    rango=krango;
}
string Militar::getNombre(){
    return nombre;
}
string Militar::getRango(){
    return rango;
}