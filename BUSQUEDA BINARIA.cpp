#include <iostream>
using namespace std;
#define TL 10
void busquedaBin (int vector[], int x);

int main(int argc, char *argv[]) {
	
	int vector [TL], x;
	cin>>x;
	
	busquedaBin (vector, x);
	
	return 0;
}

void busquedaBin (int vector[], int x){
	
	int l=0, r=TL-1;
	
	while (l<=r){
		int m=(l+r)/2;
		if (vector[m]==x){
			cout << m;
		}
		
		if (vector[m]<x){
			l=m+1;
		}
		else {
			r=m-1;
		}
	}
	
	
}
