#ifndef CANCION_H
#define CANCION_H
#include<iostream>
#include<string>

using namespace std;

class Cancion
{
    private:
        string autor;
        string interprete;
        string cancionNombre;
        string mp3;
        int ranking;
    public:
        Cancion ();
        Cancion(const Cancion&);
        Cancion(const string& autor, const string& interprete, const string& cancionNombre, const string& mp3, const int& ranking);

        string getAutor() const;
        string getInterprete() const;
        string getCancionNombre() const;
        string getMp3()const;
        int getRanking()const;

        string toString()const;

        void setAutor(const string);
        void setInterprete(const string);
        void setCancionNombre(const string);
        void setMp3(const string);
        void setRanking(const int);
        // operador de asignacion
        void operator = (const Cancion &cancion) ;

        bool operator == (const Cancion&)const;
        bool operator != (const Cancion&)const;
        bool operator < (const Cancion&)const;
        bool operator <= (const Cancion&)const;
        bool operator > (const Cancion&)const;
        bool operator >= (const Cancion&)const;


        friend ostream &operator<<( ostream &output, const Cancion &can ) {
            output << can.autor << "-" << can.interprete << "-" << can.cancionNombre << can.mp3;
            return output;
        }

        friend istream &operator >> (istream &input, Cancion &Cancion) {
            return input;
        }
        virtual ~Cancion();

    protected:
};


#endif // CANCION_H
