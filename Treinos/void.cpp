#include <iostream>

using namespace std;

//todas as funções tem retorno, menos o vloid. Ele apenas printa na tele e tals//

//são funções//
void impremeMensagem(){
	cout << "Olá, mundo!";
}

float somar(float a, float b){
	return a + b;
}

//podemos chamar  essas funções no main//
main(){
	impremeMensagem();
	
	float numero, numero2;
	
	cout << "Informe o primeiro número: ";
	cin >> numero;
	
	cout << "Informe o segundo número: ";
	cin >> numero2;
	
	cout << somar(numero, numero2);
}
	
