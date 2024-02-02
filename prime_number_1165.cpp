#include <iostream>

bool sindivisores (int numprueba);

const int TF=1000;
using namespace std;
int main() {
    int numprueba, tamlog, contenedor[TF];
	
	cin >> tamlog;
	
    for (int i = 0; i < tamlog; i++) {
        cin >> contenedor[i];
    }
    
    for (int i = 0; i< tamlog; i++){
	
	numprueba = contenedor[i];
	
    if (sindivisores(numprueba) and (numprueba%numprueba)==0){
            cout << numprueba << " eh primo" << endl;
        }
        else {
            cout << numprueba << " nao eh primo" << endl;
        }
	}

system("pause");
return 0;
}

// Es primo solo si puede dividirse por si mismo y por 1

bool sindivisores (int numprueba){
    bool bandera=false;
    int resto, incremento=2;

    while (bandera==false and incremento<numprueba){
        resto = numprueba%incremento;
        if (resto==0){
            bandera=true;
        }

        incremento++;
        }

    return (!bandera);
}
