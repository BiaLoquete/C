#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura,peso,result;
	
	cout << "Informe sua altura: ";
	cin >> altura;
	
	cout << "Informe seu peso: ";
	cin >> peso;
	
	result = (peso/(altura*altura));
	
	if (result<=18.5){
		cout << "Abaixo do peso";
	}else if (result>=18.5 && result <=24.9){
		cout << "Peso normal";
	}else if (result>=25 && result <=29.9){
		cout << "Sobrepeso";
	}else if (result>=30 && result <=34.9){
		cout << "Obesidade grau I";
	}else if (result>=35 && result <=39.9){
		cout << "Obesidade grau II";
	}else if (result >=40){
		cout << "Obesidade grau III";
	}
}
