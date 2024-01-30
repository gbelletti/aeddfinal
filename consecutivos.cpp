#include <iostream>

//Cargar un vector vacío
void ingresavector (int a[]);

//Mostrar el vector actual
void mostrarvector (const int a[]);

using namespace std;
int main() {
	int a[10];
	ingresavector(a);
	mostrarvector(a);
}




void ingresavector (int a[]){
	int auxiliar;
	
    cout << "Ingrese el vector: " << endl;
    for (int i=0; i<10; i++){
        cin >> auxiliar;
        
        if (auxiliar>0){
			a[i]=auxiliar;
        }
        else if (auxiliar<=0){
			a[i]=1;
		}
    }

}

void mostrarvector (const int a[]){
    for (int i=0; i<10; i++){
        cout << "X[" << i << "] = " << a[i] << endl;
    }
}
