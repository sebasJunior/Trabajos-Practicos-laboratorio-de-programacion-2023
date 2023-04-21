#include <iostream>
using namespace std;

int ContarLetraA(string f){
	
	int i = 0;
	int cont = 0;
	
	for(i = 0; i < f.size();i++){
		if(f[i]=='a' || f[i]=='A'){
			cont++;
		}
	}
	return cont;
}

int main(){
	
	string frase;
	
	cout<<"por favor ingrese una frase"<<endl;
	
	getline(cin,frase);
	
	cout<<"cantidad de letras A: "<<ContarLetraA(frase);
	
	return 0;
}