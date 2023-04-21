#include <iostream>
using namespace std;

int ConvertirPesos(int Cantidad){
	
	Cantidad = Cantidad * 331.37;
	
	return Cantidad;
}

int main(){
	
	int Cantidad = 0;
	
	cout<<"ingresse la cantidad de dolares que quiere pasar a pesos, recuerde el precio del dolar es 331,37"<<endl;
	cin>>Cantidad;
	
	cout<<"la cantidad de pesos equivalentes a esos dolares serian: "<<ConvertirPesos(Cantidad);
	
	return 0;
}