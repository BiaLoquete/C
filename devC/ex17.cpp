#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade1,idade2;
	string nome1, nome2;
	
	cout << "Informe seu nome: ";
	cin >> nome1;
	
	cout << "Informe sua idade: ";
	cin >> idade1;
	
	cout << "Informe seu nome: ";
	cin >> nome2;
	
	cout << "Informe sua idade: ";
	cin >> idade2;
	
	if (idade1>idade2){
		cout << "A " << nome1 << " é mais velha que a " << nome2 << "";
    	}else {
		cout << "A " << nome2 << " é mais velha que a " << nome1 << "";
		}
}
