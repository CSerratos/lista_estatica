#include <iostream>
#include <string>

#include "lista.h"

using namespace std;

template <class T, int tamanio>
Lista <T, tamanio> :: Lista() {
    last = -1;
}

template <class T, int tamanio>
Lista<T, tamanio>::~Lista()
{
    //dtor
}

template <class T, int tamanio>
bool Lista <T, tamanio> :: isEmpty(){
    return last == -1;
}

template <class T, int tamanio>
bool Lista <T, tamanio> :: isFull(){
    return(last == tamanio -1);
}

template <class T, int tamanio>
void Lista <T, tamanio> :: agregaElemento(int posicion, T& t){
    if(isFull()){
        cout << "Lista llena o posicion mayor al tama�o" << endl;
        return;
    }
    int i = last + 1;
    // chequeo para hacer lista consecutiva
    if (posicion > (last + 1)) {
        posicion = last + 1;
    }

    while (i > posicion){
        ListaC[i] = ListaC[i-1];
        i--;
    }
    ListaC[posicion] = t;
    last++;
}

template <class T, int tamanio>
void Lista <T, tamanio> :: eliminaElemento(const int posicion){
    if (isEmpty()){
        cout << "Lista vacia" << endl;
        return;
    }
    if (posicion > last) {
        cout << "Posicion vacia" << endl;
        return;
    }
    int i = posicion;
    while (i < last) {
        ListaC[i] = ListaC[i+1];
        i++;
    }
    last--;
}

template <class T, int tamanio>
T Lista <T, tamanio> :: recuperaElemento (const int posicion){
    if (isEmpty() || posicion < 0 || posicion > last) {
    }
    return ListaC[posicion];
}

template <class T, int tamanio>
int Lista <T, tamanio> :: getPrimeraPosicion(){
    if(isEmpty()){
        return last;
    }
    else{
        return 0;
    }
}

template <class T, int tamanio>
int Lista <T, tamanio> :: getUltimaPosicion(){
    return last;
}

template <class T, int tamanio>
int Lista <T, tamanio> :: getPreviaPosicion(const int posicion){
    if (isEmpty()|| posicion < 1 || posicion > last){
        return -1;
    }
    else {
        return posicion - 1;
    }
}

template <class T, int tamanio>
int Lista<T, tamanio> :: getSiguientePosicion(const int posicion){
    if (isEmpty() || posicion < 0 || posicion > last -1 ){
        return -1;
    }
    else {
        return posicion + 1;
    }
}

template <class T, int tamanio>
void Lista<T, tamanio> :: printList() {
    int i = 0;
    while (i < last + 1) {
        cout << i << " - " << ListaC[i] << endl;
        i++;
    }
}
template <class T, int tamanio>
int Lista<T, tamanio> :: findLinear(const T& e)const{
    // int i(0);
    // while (i <= last){
    //     if(ListaC[i] == e){
    //         return i;
    //     }
    //     i++;
    // }
    // return -1;
    // cout<< "Canci�n a buscar: ";
    // getline(cin, toFind);
    // cancion.getMp3(toFind);
    // int find;
    // find = ListaC.findLinear(cancion);
    // if (find == -1){
    //     cout << "Esa canci�n no se encuentra" << endl;
    // }
    // else{
    //     cout << "La cancion con nombre: " << toFind << "Se encuentra en la posicion: " << find << endl;
    //     cout << "El nombre de archivo mp3 es: " << endl;
    //     cout << ListaC.recuperaElemento(find).toString << endl;
    // }
    return 1;
}

template <class T, int tamanio>
int Lista<T, tamanio> :: findBinary(const T& e) const{
   int first = 0, last = tamanio, medio;
   while(first <= last){
    medio = (first + last)/2;
    if(ListaC[medio] == e){
        return medio;
    }
    if(e < ListaC[medio]){
        last = medio -1;
    }
    else{
        first = medio + 1;
    }
   }
   return -1;
}

// string toFind;


