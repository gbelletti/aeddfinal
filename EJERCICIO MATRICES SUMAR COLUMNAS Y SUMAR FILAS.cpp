#include <iostream>
using namespace std;

void sumarFila (int venta [][3]);
void elecMes (int venta [][3]);

int main(int argc, char *argv[]) {
	
	//nro total de electrodomesticos x semana - sumar toda la fila
	//nro total de cada tipo vendido en el mes - sumar la columna
	
	int venta [4][3]={{5,4,8},{8,10,7},{7,3,10},{5,7,15}};
	sumarFila(venta);
	elecMes(venta);
	
	return 0;
}

void sumarFila (int venta [][3]){
	
	int sem1=0;
	
	for (int i=0; i<4; i++){
		
		for (int j=0; j<3; j++){
			sem1=sem1+venta[i][j];
		}
		
		cout << "SEMANA " << i+1 << ": " << sem1 << endl;
		sem1=0;
	}

}
	
void elecMes (int venta [][3]){
	
	int lava=0, seca=0, coci=0;
	for (int i=0; i<4; i++){
		for (int j=0; j<1; j++){
			
			lava=lava+venta[i][j];
			seca=seca+venta[i][j+1];
			coci=coci+venta[i][j+2];
		}
	}
	
	cout << "LAVARROPAS POR MES: " << lava << endl;
	cout << "SECADORAS POR MES: " << seca << endl;
	cout << "COCINAS POR MES: " << coci << endl;
	
	
}
