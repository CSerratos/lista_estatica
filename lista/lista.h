#ifndef LISTA_H
#define LISTA_H

template <class T, int tamanio>
class Lista
{
    public:
        Lista();
        bool isEmpty();
        bool isFull();
        void agregaElemento(int, T& t);
        void eliminaElemento(const int posicion);
        T recuperaElemento(const int posicion);
        int getPrimeraPosicion();
        int getUltimaPosicion();
        int getPreviaPosicion(const int posicion);
        int getSiguientePosicion(const int posicion);
        void deleteAll();
        void printList();
        int findLinear(const T& t)const;
        int findBinary(const T& t)const;
        virtual ~Lista();

    protected:

    private:
        T ListaC[tamanio];
        int last;
};

#endif // LISTA_H
