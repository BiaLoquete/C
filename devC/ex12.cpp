#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float temperaturaC, temperaturaF;
	
	cout << "Informe a temperatura em Celsius: ";
	cin >> temperaturaC;
	
	temperaturaF = (temperaturaC* (1.8 + 32));
	
	cout << temperaturaF;
}
