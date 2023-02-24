#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a1,a2,a3;
	
	cout << "Informe o valor do primeiro ângulo: ";
	cin >> a1;
	
	cout << "Informe o valor do segundo ângulo: ";
	cin >> a2;
	
	cout << "Informe o valor do terceiro ânfulo: ";
	cin >> a3;
	
	if(a1==90 or a2==90 or a3==90){
		cout << "É um triângulo retângulo";
	}else if (a1>90 or a2>90 or a3>90){
		cout << "É um triângulo obtusângulo";
	}else if (a1<90 && a2<90 && a3<90){
		cout << "É um triângulo acutângulo";
	}
	
}
