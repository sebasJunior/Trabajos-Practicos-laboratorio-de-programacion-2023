#include <iostream>
using namespace std;

bool EsMultiploDeTres(int a){
	
	if(a %  3 == 0){
		
		return true;
		
	}
	
	return false;
}

int main(){
	
	int Numero = 0;
	
	cout<<"ingrese un numero cualquiera: ";
	cin>>Numero;
	
	if(EsMultiploDeTres(Numero) == true){
		cout<<"El numero ingresado es multiplo de 3"<<endl;
	}
	else{
	cout<<"el numero ingresado no es multiplo de 3"<<endl;	
	}
	
	return 0;
}