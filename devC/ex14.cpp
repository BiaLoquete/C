#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float lado, area;
	
	cout << "Informe o valor do lado de um quadrado: ";
	cin >> lado;
	
	area = (lado*lado);
	
	cout << "O resultado da area é " << area ;
}
