#include <iostream>
using namespace std;

string EncontrarDDD (int DDD){
	
	string mensaje;
	
	if(DDD == 61){
		mensaje = "Brasilia";
	}
	if(DDD == 71){
		mensaje = "Salvador";
	}
	if(DDD == 11){
		mensaje = "Sao Paulo";
	}
	if(DDD == 21){
		mensaje = "Rio de Janeiro";
	}
	if(DDD == 32){
		mensaje = "Juiz de Fora";
	}
	if(DDD == 19){
		mensaje = "Campina";
	}
	if(DDD == 27){
		mensaje = "Vitoria";
	}
	if(DDD == 31){
		mensaje = "Belo Horizonte";
	}
	
	return mensaje; 
}

int main(){
	
	int DDD = 0;
	
	cout<<"ingrese su DDD: ";
	cin>>DDD;
	
	cout<<"el destino de su DDD es: "<<EncontrarDDD(DDD)<<endl;
	
	return 0;
}