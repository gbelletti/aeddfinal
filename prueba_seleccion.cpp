#include <iostream>

using namespace std;
int main() {
    
    int a, b, c, d, cyd, ayb;
    
    //a=4, b=7, c=-5, d=25
    cin >> a >> b >> c >> d;
    
    cyd = c+d; //20
    ayb = a+b; //11
    
    //(7>-5) y (25>4) TRUE
    if ((b>c) and (d>a)) {
        if ((c>=0) and (d>=0)) { // -5>0 y 25>0 FALSE

            if (((a%2) == 0) and (cyd>ayb)){
                cout << "Valores aceitos" << endl;
            }

            else {
            cout << "Valores nao aceitos" << endl;
            }

        }
        else {
        cout << "Valores nao aceitos" << endl;
        }
    }
    
    else {
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}

