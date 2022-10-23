#ifndef MENUCANCIONES_H
#define MENUCANCIONES_H

#include<iostream>
#include<string>

#include "cancion.h"
#include "lista.h"


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
