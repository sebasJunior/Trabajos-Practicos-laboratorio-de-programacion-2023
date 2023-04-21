#include <iostream>

using namespace std;

int CalcularFarenheint(float Farenheint){
	
	float celcius = Farenheint * 1.8 + 32; 
	
	return celcius;
}

int main(){
	
	float Farenheint = 0;

	cout<<"ingese una cantidad de grados farenheint para pasarlos a grados celcius: ";
	cin>>Farenheint;
	
	cout<<"El equivalente en grados celcius es: "<<CalcularFarenheint(Farenheint);
	
	return 0;
}