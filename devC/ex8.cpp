#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1;
	
	cout << "Informe um n�mero: ";
	cin >> n1;
	
	if (n1==0){
		cout << "� zero";
	}else if (n1<0){
		cout << "� um n�mero negativo";
	}else if (n1>=1){
		cout << "� um n�mero positivo";
	}
	
}
