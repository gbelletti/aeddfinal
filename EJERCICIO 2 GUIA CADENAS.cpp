#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

bool uservalid (char user []);

int main(int argc, char *argv[]) {
	
	char user [9];
	
	cin.getline(user,9);
	cout << boolalpha << uservalid (user) << endl;
	
	return 0;
}

bool uservalid (char user []){
	
	bool paso2=false;
	
	
	if (isalpha(user[0]) and strlen(user)==8){
		paso2= true;
	}

	
	if (paso2==true){
		for (int i=1; i<8; i++){
			
			if (not isalnum(user[i])){
				paso2=false;
			}
		
		}
	}
	
	return paso2;
	
}
