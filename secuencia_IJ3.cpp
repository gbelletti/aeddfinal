#include <iostream>

using namespace std;
int main() {
    
    int i=1, j=7;

    for (int q = 0; q < 5; q++){

        for (int k = 0; k < 3; k++) {
            cout << "I=" << i << " " << "J=" << j << " " << endl;
            j--;

        }
        
        i=i+2;
        j=j+5;

    }


system("pause");
return 0;
}
