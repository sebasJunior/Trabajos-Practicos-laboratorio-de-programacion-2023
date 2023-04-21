#include <bits/stdc++.h>
using namespace std;

int ValorLetras(string frase){
	
	int contador = 0;
	
	for(int i = 0; i < frase.size(); i++){
		
		if(frase[i] == 'a' || frase[i] == 'e'){
		contador += 1;
		}
		if(frase[i] == 'o' || frase[i] == 's'){
		contador += 2;
		}
		if(frase[i] == 'd' || frase[i] == 'i' || frase[i] == 'n' || frase[i] == 'r'){
		contador += 3;
		}
		if(frase[i] == 'c' || frase[i] == 'l'  || frase[i] == 't' || frase[i] == 'u'){
		contador += 4;
		}
		if(frase[i] == 'm' || frase[i] == 'p'){
		contador += 5;
		}
		if(frase[i] == 'b' || frase[i] == 'f' || frase[i] == 'g' || frase[i] == 'h' || frase[i] == 'j' || frase[i] == 'q' || frase[i] == 'v' || frase[i] == 'x' || frase[i] == 'y' || frase[i] == 'z'){
		contador += 6;
		}
		if(frase[i] == 'k' || frase[i] == 'w'){
		contador += 7;
		}
	}
	return contador;	
}

int main(){
	
	string frase;
	
	cout<<"por favor ingrese una frase: ";
	getline(cin, frase);
	
	cout<<ValorLetras(frase);
	
	return 0;
}