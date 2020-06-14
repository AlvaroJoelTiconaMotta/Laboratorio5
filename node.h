#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
class Nodo{
private:
    int dato;
    Nodo * siguiente;
public:
    Nodo();
    Nodo(int);
    Nodo(Nodo &);
    ~Nodo();
    int getdato();
    void setdato(int);
    Nodo *getsiguiente();
    void setsiguiente(Nodo *);
};
Nodo::Nodo(){
    this->dato=0;
    siguiente=NULL;
}
Nodo::Nodo(int dato){
    this->dato=dato;
    siguiente=NULL;
}
Nodo::Nodo(Nodo &nodo){
    this->dato=nodo.dato;
    this->siguiente=nodo.siguiente;
}
Nodo::~Nodo(){
}
int Nodo::getdato(){
    return dato;
}
void Nodo::setdato(int dato){
    this->dato=dato;
}
Nodo *Nodo::getsiguiente(){
    return this->siguiente;
}
void Nodo::setsiguiente(Nodo *siguiente){
    this->siguiente=siguiente;
}
#endif