#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3;
	
	cout << "Informe um número: ";
	cin >> n1;
	
	cout << "Informe outro número: ";
	cin >> n2;
	
	cout << "Informe mais um número: ";
	cin >> n3;
	
	if (n1>n2 && n1>n3){
		cout << "O " << n1 << " é o maior";
	}else if (n2>n1 && n2>n3){
		cout << "O " << n2 << " é o maior";
	}else if (n3>n1 && n3>n2){
		cout << "O " << n3 << " é o maior";
	}
	
}
