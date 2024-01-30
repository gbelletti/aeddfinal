#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    int codigo, cantidad;
    float precio = 0;
    float precios [5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    
    cin >> codigo >> cantidad;
    precio = precios[codigo-1] * cantidad;

    cout << fixed << setprecision(2) << endl;
    cout << "Total: R$ " << precio << endl;


    return 0;
}

