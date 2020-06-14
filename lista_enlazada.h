#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include "node.h"
#include <iostream>
using namespace std;

class Lista_Enlazada{
private:
    int size;
    Nodo *lista;
public:
    Lista_Enlazada();
    Lista_Enlazada(int);
    ~Lista_Enlazada();
    void insertar(int);
    void mostrar();
    void eliminar(int);
};

Lista_Enlazada::Lista_Enlazada(){
    size=0;
    lista=NULL;
}
Lista_Enlazada::Lista_Enlazada(int numero){
    lista= new Nodo(numero);
    this->size=1;
}

Lista_Enlazada::~Lista_Enlazada()
{
}
void Lista_Enlazada::insertar(int numero){
    Nodo *nuevo_nodo=new Nodo;
    nuevo_nodo->setdato(numero);

    Nodo *aux1=lista;
    Nodo *aux2=NULL;

    while((aux1!=NULL)&&(aux1->getdato()<numero)){
        aux2=aux1;
        aux1=aux1->getsiguiente();
    }
    if(aux1==lista){
        lista=nuevo_nodo;
    }
    else{
        aux2->setsiguiente(nuevo_nodo);
    }
    nuevo_nodo->setsiguiente(aux1);
    cout<<"\tElemento insertado a lista correctamente"<<endl;
    size++;
}
void Lista_Enlazada::mostrar(){
    Nodo *actual= new Nodo;
    actual=lista;
    while(actual!=NULL){
        cout<<"\t"<<actual->getdato()<<"->";
        actual=actual->getsiguiente();
    }
    cout<<endl;
}
void Lista_Enlazada::eliminar(int dato){
    if(lista!=NULL){
        Nodo *aux_borrar=lista;
        Nodo *anterior= NULL;
        while((aux_borrar!=NULL) &&(aux_borrar->getdato()!=dato)){
            anterior=aux_borrar;
            aux_borrar=aux_borrar->getsiguiente();
        }
        if(aux_borrar==NULL)
            cout<<"\tEl elemento no ha sido encontrado\n";
        else if(anterior==NULL){
            lista=lista->getsiguiente();
            delete aux_borrar;
            cout<<"\tElemento eliminado correctamente\n";
        }
        else{
            anterior->setsiguiente(aux_borrar->getsiguiente());
            delete aux_borrar;
            cout<<"\tElemento eliminado correctamente\n";
        }
    }
    else
        cout<<"\tLa lista esta vacia\n";
}
#endif