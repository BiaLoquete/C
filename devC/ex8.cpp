#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1;
	
	cout << "Informe um número: ";
	cin >> n1;
	
	if (n1==0){
		cout << "É zero";
	}else if (n1<0){
		cout << "É um número negativo";
	}else if (n1>=1){
		cout << "É um número positivo";
	}
	
}
