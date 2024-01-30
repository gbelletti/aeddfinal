#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {

    // evento en segundos, pasar a minutos, horas y segundos
    // test case: in: 140153, out: 38:55:53
    int original, horas, minutos, segundos;
    
    cin >> original;
    
    horas = (original/60)/60;
    minutos = (original/60)%60;
    segundos = (original%60)%60;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}

