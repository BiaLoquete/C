#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string senha, login;
	string const admin = "12345";
	
	cout << "Informe o login: ";
	cin >> login;
	
	cout << "Informe a senha: ";
	cin >> senha;
	
	if (senha==admin && login==admin){
		cout << "Pode entrar";
	}else {
		cout << "Login e senha incorretos";
	}
	
}
