#include <iostream>
using namespace std;

float CalcularSalario(float salario){
	
	float Aumento = 0;
	
	if(salario == 400.00){
		return Aumento = salario + salario * 0.15;
	}
	else if(salario > 400.01 && salario < 800.00){
		return Aumento = salario + salario * 0.12;
	}
	else if(salario > 800.01 && salario < 1200.00){
		return Aumento = salario + salario * 0.1;
	}
	else if(salario > 1200.01 && salario < 2000.00){
		return Aumento = salario + salario * 0.07;
	}

	return Aumento = salario + salario * 0.04;

}

int main(){
	
	int salario = 0;
	
	cout<<"por favor insira o seu salario: ";
	cin>>salario;
	
	cout<<"seu novo salario e: "<<CalcularSalario(salario);
	
	return 0;
}