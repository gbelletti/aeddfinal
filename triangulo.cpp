#include <iostream>
#include <iomanip>

// 6.0 4.0 2.1
bool hay_triangulo (double a, double b, double c){
    if (((a+b) > c) and ((a+c) > b) and ((b+c) > a)) {
        return true;
    }

    return false;
}

using namespace std;
int main() {

    double a, b, c, area, perimetro;

    cin >> a >> b >> c;
    if (hay_triangulo(a,b,c)){
        perimetro = a+b+c;
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimetro << endl;
    }

    else {
        area = ((a+b)*c)/2;
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }

    return 0;
}