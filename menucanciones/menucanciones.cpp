#include<iostream>
#include<string>

#include "menucanciones.h"
#include "lista.cpp"

using namespace std;

// Constructor
MenuCanciones :: MenuCanciones() {
    string canciones[50] = {
        "Under The Influence", "Yours", "I Aint Worried", "Calm Down", "Im Good (Blue)", "As It Was", "Dont You Worry", "SNAP", "Mood", "Super Freaky Girl", "Ferrari", "Seize the Power", "B.O.T.A. (Baddest Of Them All)", "Quevedo: Bzrp Music Sessions, Vol. 52", "BILLIE EILISH.", "Hold Me Closer", "KU LO SA - A COLORS SHOW", "Calm Down", "Mary On A Cross", "Last Last", "Hold My Hand", "Glimpse of Us", "Bones", "Another Love", "Afraid To Feel", "Running Up That Hill (A Deal With God)", "DESPECH�", "Late Night Talking", "Bad Habit", "La Bachata", "Tit� Me Pregunt�", "Bandana", "Stay With Me", "Vegas (From the Original Motion Picture Soundtrack ELVIS)", "Bad Memories (feat. Elley Duh� & FAST BOY)", "Pepas", "Faded", "1, 2, 3 (feat. De La Ghetto & Jason Derulo)", "MIDDLE OF THE NIGHT", "About Damn Time", "I Like You (A Happier Song) [feat. Doja Cat]", "For My Hand (feat. Ed Sheeran)", "One Kiss", "Heat Waves", "Lonely", "Crazy Vibez", "SNAP (High and Fast)", "Doja", "Belly Dancer", "Numb"
    };
    string artistas[50] = {
        "Chris Brown", "JIN", "OneRepublic", "Rema", "David Guetta & Bebe Rexha", "Harry Styles", "Black Eyed Peas, Shakira & David Guetta", "Rosa Linn", "Makar", "Nicki Minaj", "James Hype & Miggy Dela Rosa", "Yonaka", "Eliza Rose & Interplanetary Criminal", "Bizarrap & Quevedo", "Armani White", "Elton John & Britney Spears", "Oxlade", "Rema & Selena Gomez", "Ghost", "Burna Boy", "Lady Gaga", "Joji", "Imagine Dragons", "Tom Odell", "LF SYSTEM", "Kate Bush", "ROSAL�A", "Harry Styles", "Steve Lacy", "Manuel Turizo", "Bad Bunny", "Fireboy DML & Asake", "Justin Timberlake, Pharrell Williams, Halsey & Calvin Harris", "Doja Cat", "Meduza & James Carter", "Farruko", "Alan Walker", "Sof�a Reyes", "Elley Duh�", "Lizzo", "Post Malone", "Burna Boy", "Calvin Harris & Dua Lipa", "Glass Animals", "Akon", "Luxury SA", "Rosa Linn", "Central Cee", "Imanbek & BYOR", "Marshmello & Khalid"
    };
    string autor[50] = {};
    string mp3[50] = {};
    // int ranking[50] = {};
    Lista<Cancion, 50> listaCanciones;
    for (int i = 0; i < 30; i++) {
        Cancion cancion(artistas[i], canciones[i], "autor[i]", "mp3[i]", i);
        listaCanciones.agregaElemento(i, cancion);
    }
}

// Metodo a usar en el main
void MenuCanciones :: menuLista() {
    cout << endl;
    listaCanciones.printList();
    cout << endl;
    while (1) {
        int opcion = 0;
        cout << "1. Agrega una cancion: " <<endl;
        cout << "2. Elimina una cancion: " <<endl;
        cout << "3. Buscar por interprete" <<endl;
        cout << "4. Buscar por cancion" <<endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                MenuCanciones::agregarCancion();
                break;
            case 2:
                MenuCanciones::eliminarCancion();
                break;
            case 3:
                // MenuCanciones::findLinear();
                // MenuCanciones::findBinary();
                break;
        }
        cout << endl;
        listaCanciones.printList();
        cout << endl;
    }
}

void MenuCanciones :: agregarCancion() {
    string autor, interprete, nombre, mp3;
    int ranking, posicion;
    cout << "Ingresa los datos de la cancion: " << endl;
    cout << "autor: " << endl;
    // con esta linea permite tomar una entrada con espacios
    getline(cin >> ws, autor);
    cout << "interprete: " << endl;
    getline(cin >> ws, interprete);
    cout << "nombre: " << endl;
    getline(cin >> ws, nombre);
    cout << "mp3: " << endl;
    getline(cin >> ws, mp3);
    cout << "ranking: " << endl;
    cin >> ranking;
    cout << "posicion: " << endl;
    cin >> posicion;
    // Creamos nuestra variable
    Cancion cancion(autor, interprete, nombre, mp3, ranking);
    listaCanciones.agregaElemento(posicion, cancion);
}

void MenuCanciones :: eliminarCancion(){
    int posicion;
    cout << "Que posicion(cancion) quieres eliminar de la lista: " << endl;
    cin >> posicion;
    listaCanciones.eliminaElemento(posicion);
}
MenuCanciones::~MenuCanciones()
{
    //dtor
}
