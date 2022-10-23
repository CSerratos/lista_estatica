#include <iostream>
#include <string>
#include "cancion.h"

using namespace std;

Cancion :: Cancion (){
    autor = "";
    interprete = "";
    cancionNombre = "";
    mp3 = "";
    ranking = 0;
}

Cancion :: Cancion(const string& _autor, const string& _interprete, const string& _cancionNombre, const string& _mp3, const int& _ranking) {
    autor = _autor;
    interprete = _interprete;
    cancionNombre = _cancionNombre;
    mp3 = _mp3;
    ranking = _ranking;
}

string Cancion :: getAutor() const {
    return autor;
}

string Cancion :: getInterprete() const{
    return interprete;
}

string Cancion :: getCancionNombre() const {
    return cancionNombre;
}

string Cancion :: getMp3() const {
    return mp3;
}

int Cancion :: getRanking()const {
    return ranking;
}

string Cancion :: toString()const{
    return Cancion::getAutor() + " " + Cancion::getInterprete() + " " + Cancion::getCancionNombre();
}

void Cancion :: setAutor (const string _autor){
    autor = _autor;
}

void Cancion :: setInterprete (const string _interprete){
    interprete = _interprete;
}

void Cancion :: setCancionNombre (const string _cancionNombre){
    cancionNombre = _cancionNombre;
}

void Cancion :: setMp3 (const string _mp3){
    mp3 = _mp3;
}

void Cancion :: setRanking(const int _ranking){
    ranking = _ranking;
}

void Cancion :: operator = (const Cancion &cancion){
    autor = cancion.autor;
    interprete = cancion.interprete;
    cancionNombre = cancion.cancionNombre;
    mp3 = cancion.mp3;
    ranking = cancion.ranking;
}

bool Cancion :: operator == (const Cancion& c)const{
    return mp3 == c.mp3;
}

bool Cancion :: operator != (const Cancion& c)const{
    return !(*this == c);
}

bool Cancion :: operator < (const Cancion& c)const{
    return mp3 < c.mp3;
}

bool Cancion :: operator <= (const Cancion& c)const{
    return true;
}

Cancion::~Cancion()
{
    //dtor
}
