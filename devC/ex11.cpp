#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	
	cout << "Informe um n�mero: ";
	cin >> n1;
	
	cout << "Informe outro n�mero: ";
	cin >> n2;
	
	cout << "Informe mais um n�mero: ";
	cin >> n3;
	
	if (n1>n2 && n1>n3){
		cout << "O " << n1 << " � o maior";
	}else if (n2>n1 && n2>n3){
		cout << "O " << n2 << " � o maior";
	}else if (n3>n1 && n3>n2){
		cout << "O " << n3 << " � o maior";
	}
	
}
