#include <iostream>
using namespace std;

int main () {

    int x=6;
    cout << "!x= " << (!x) << endl;
    return 0;
}

//NOTAS
// División por cero es un warning pero no impide compilar, simplemente devuelve 0
// Cuando se hace 0/0 devuelve un valor basura y lo toma como warning
// !numero devuelve siempre 0 mientras que numero no sea 0, si no, devuelve 1