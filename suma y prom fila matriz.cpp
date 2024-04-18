#include <iostream>
#define M 12
#include <cctype>
#include <iomanip>
using namespace std;

void cargarMatriz (double matriz[][M]);
double sumarFila (double matriz[][M]);
double promFila (double matriz[][M]);

int main(int argc, char *argv[]) {
	
	double matriz [M][M];
	char t;
	
	cin >> t;
	
	cargarMatriz (matriz);
	
	if (t=='S'){
		cout << fixed << setprecision(1) << sumarFila (matriz)<< endl;
	}
	
	if (t=='M'){
		cout << fixed << setprecision(1) << promFila (matriz)<< endl;
	}
	
	return 0;
}

void cargarMatriz (double matriz[][M]){
	
	for (int i=0; i<M; i++){
		for (int k=0; k<M; k++){
			cin >> matriz [i][k];
		}
		
	}
	
}
	
double sumarFila (double matriz[][M]){
	double suma=0;
	
	for (int i=0; i<M; i++){
		for (int k=i; k<M; k++){
			suma=suma+matriz[i][k];
		}
		
	}
	
	return suma;
}

double promFila (double matriz[][M]){
	
	double prom=0;
	prom=sumarFila(matriz)/72;
	
	return prom;

}
