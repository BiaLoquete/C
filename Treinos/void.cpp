#include <iostream>

using namespace std;

//todas as fun��es tem retorno, menos o vloid. Ele apenas printa na tele e tals//

//s�o fun��es//
void impremeMensagem(){
	cout << "Ol�, mundo!";
}

float somar(float a, float b){
	return a + b;
}

//podemos chamar  essas fun��es no main//
main(){
	impremeMensagem();
	
	float numero, numero2;
	
	cout << "Informe o primeiro n�mero: ";
	cin >> numero;
	
	cout << "Informe o segundo n�mero: ";
	cin >> numero2;
	
	cout << somar(numero, numero2);
}
	
