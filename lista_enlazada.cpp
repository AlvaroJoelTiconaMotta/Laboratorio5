#include<iostream>
#include "lista_enlazada.h"
using namespace std;

int main(){
    //Inicializamos la lista con un elemmento aunque no es necesario porque tambien hay un constructor que no recibe parametros
    Lista_Enlazada lista(1);
    //Insertamos numeros en desorden pero se colocaran de manera ordenada
    //Mostramos como va quedando la lista enlazada despues de cada insercion
    lista.insertar(3);
    lista.mostrar();
    lista.insertar(2);
    lista.mostrar();
    lista.insertar(5);
    lista.mostrar();
    //Tratamos de eliminar un elemento no ingresado
    lista.eliminar(4);
    lista.mostrar();
    //Eliminamos el numero 2 de la lista
    lista.eliminar(2);
    lista.mostrar();
    //Eliminamos el primer elemento de la lista
    lista.eliminar(1);
    lista.mostrar();
    return 0;
}