#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	cout << "Informe um número: ";
	cin >> n1;
	
	cout << "Informe outro número: ";
	cin >> n2;
	
	
	if (n1>n2){
		cout << "O primeiro mencionado é o maior";
	}
	
	if (n1<n2){
		cout << "O segundo mencionado é o maior";
	}
	
	if (n1==n2){
		cout << "Os dois são iguais";
	}

}
