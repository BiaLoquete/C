#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float salario, result, aumento;
	
	cout << "Informe seu salário: ";
	cin >> salario;
	
	if (salario <=1000){
		aumento = salario*1.15;
		cout << "salario era " << salario << " passou a ser " << aumento;
	}else if (salario >=1000.01 && salario<2000){
		aumento = salario*1.10;
		cout << "salario era " << salario << " passou a ser " << aumento;
	}else if (salario >=2000){
		aumento = salario*1.05;
		cout << "salario era " << salario << " passou a ser " << aumento;
	}
	
}
