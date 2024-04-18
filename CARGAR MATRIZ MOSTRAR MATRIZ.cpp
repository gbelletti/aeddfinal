#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int FILA=5;
const int COLU=3;

void cargarMatriz (int matriz [][COLU], int FILA, int COLU);
void impMatriz (int matriz [][COLU], int FILA, int COLU);

int main(int argc, char *argv[]) {
	
	int matriz [FILA][COLU]={0};
	
	cargarMatriz (matriz, FILA, COLU);
	impMatriz (matriz, FILA, COLU);
	
	return 0;
}

void cargarMatriz (int matriz [][COLU], int FILA, int COLU){
	
	srand(time(NULL));
	
	for (int i=0; i<FILA; i++){
		
		for (int j=0; j<COLU; j++){
			matriz [i][j]=rand();
		}
		
	}
	
}

void impMatriz (int matriz [][COLU], int FILA, int COLU){
	
	for (int i=0; i<FILA; i++){
		
		for (int j=0; j<COLU; j++){
			cout << matriz [i][j] << " "; ;
		}
				
		cout << endl;
	}
	

	
}
