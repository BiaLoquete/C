#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a1,a2,a3;
	
	cout << "Informe o valor do primeiro �ngulo: ";
	cin >> a1;
	
	cout << "Informe o valor do segundo �ngulo: ";
	cin >> a2;
	
	cout << "Informe o valor do terceiro �nfulo: ";
	cin >> a3;
	
	if(a1==90 or a2==90 or a3==90){
		cout << "� um tri�ngulo ret�ngulo";
	}else if (a1>90 or a2>90 or a3>90){
		cout << "� um tri�ngulo obtus�ngulo";
	}else if (a1<90 && a2<90 && a3<90){
		cout << "� um tri�ngulo acut�ngulo";
	}
	
}
