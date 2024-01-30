#include <iostream>

using namespace std;
int main() {
	int num, n[10]={0};
	
	cin >> num;
	n[0]=num;
	
	if (num<50){
		for (int i=1; i<10; i++){
			n[i]=(n[i-1])*2;
		}
	
		for (int i=0; i<10; i++){
			cout << "N[" << i << "] = " << n[i] << endl;
		}	
	
	}
}
