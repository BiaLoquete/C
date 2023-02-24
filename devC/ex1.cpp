#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float hoje,nascimento,result;
	
	cout << "Informe o ano atual: ";
	cin >> hoje;
	
	cout << "Informe o ano do seu aniversário: ";
	cin >> nascimento;
	
	result = (hoje-nascimento) ;
	
	if (result >=16){
		cout << "Você já pode votar";
	}else {
		cout << "Você ainda não pode votar";
	}
	
}
