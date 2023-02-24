#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nascimento, result;
	const float hoje = 2023;
	
	cout << "Informe seu ano de nascimento: ";
	cin >> nascimento;
	
	result = (hoje - nascimento);
	
	cout << "Sua idade é: " << result;
	
}
