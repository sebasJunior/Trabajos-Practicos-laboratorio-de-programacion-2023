#include <iostream>
using namespace std;

int DevolverMayor(int Numero1,int Numero2, int Numero3){
	
	if(Numero1 > Numero2 && Numero1 > Numero3){
	
		return Numero1;
	
	}
	if(Numero2 > Numero1 && Numero2 > Numero3){
	
		return Numero2;
	
	}
	
		return Numero3;
	
}

int main(){
	
	int Numero1 = 0, Numero2 = 0, Numero3 = 0;
	
	cout<<"Ingrese tres numeros aleatorios: ";
	cin>>Numero1, Numero2, Numero3;
	
	cout<<"El numero mayor de los tres es el: "<<DevolverMayor(Numero1, Numero2, Numero3);
	
	return 0;
}