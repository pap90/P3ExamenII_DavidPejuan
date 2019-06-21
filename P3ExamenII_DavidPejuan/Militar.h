#ifndef MILITAR_H
#define MILIAR_H
#include <string>
using std::string;

class Militar
{
private:
    string nombre,codigo,edad,rango;
public:
    Militar(/* args */);
    Militar(string,string,string,string);
    string getNombre();
    string getRango();
    
};



#endif // !MILITAR_H