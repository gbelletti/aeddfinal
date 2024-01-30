#include <iostream>


int buscamenor (const int arrai [], const int tamlogico, int & posicion){
    int auxiliar=arrai[0], contador=0;
    bool bandera=false;

    while (contador<tamlogico){
        if (arrai[contador] < auxiliar){
            auxiliar=arrai[contador];
        }

        contador++;
    }

    while (bandera==false){
		posicion++;
		
        if (arrai[posicion]==auxiliar){
            bandera=true;
        }
        
    }
    
    return auxiliar;

}

using namespace std;
int main() {
    int tamlogico, arrai[1000], menor, posicion=0;

    cin >> tamlogico;

    for (int i = 0; i < tamlogico; i++){
        cin >> arrai[i];
    }
    
    menor=buscamenor(arrai, tamlogico, posicion);

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicion << endl;

}
