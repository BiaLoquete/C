#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float l1,l2,l3;
	
	cout << "Informe o valor do primeiro lado: ";
	cin >> l1;
	
	cout << "Informe o valor do segundo lado: ";
	cin >> l2;
	
	cout << "Informe o valor do terceiro lado: ";
	cin >> l3;
	
	if (l1 == l2 && l2 ==l3){
		cout << "O tri�ngulo � equil�tero" << endl;
	}else if (l1 == l2 || l1 ==l3 || l2 == l3) {
		cout << "O tri�ngulo � is�sceles" << endl; 
	}else {
		cout << "o Tri�ngulo � escaleno" << endl;
	}
}
