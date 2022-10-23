#ifndef MENUCANCIONES_H
#define MENUCANCIONES_H

#include<iostream>
#include<string>
#include "lista.h"
#include "cancion.h"


class MenuCanciones
{
    protected:

    private:
        Lista<Cancion, 50> listaCanciones;
        void agregarCancion();
        void eliminarCancion();
        // void findLinear();
        // void findBinary();
    public:
        MenuCanciones();
        void menuLista();
        virtual ~MenuCanciones();
};

#endif // MENUCANCIONES_H
