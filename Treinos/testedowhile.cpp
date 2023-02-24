#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int semana;
	
	do {
		cout << "Informe o dígito da semana: ";
	    cin >> semana;
	    
	    switch(semana){
	    	case 0: cout << "Saindo do programa";
	    	break;
	    	case 1: cout << "Domingo\n";
	    	break;
	    	case 2: cout << "Segunda-feira\n";
	    	break;
	    	case 3: cout << "Terça-feira\n";
	    	break;
	    	case 4: cout << "Quarta-feira\n";
	    	break;
	    	case 5: cout << "Quinta-feira\n";
	    	break;
	    	case 6: cout << "Sexta-feira\n";
	    	break;
	    	case 7: cout << "Sábado\n";
	    	break;
	    
	    	default: cout << "Informe um dia da semana válido\n"; //isso é para que se a pessoa digitar um numero que nao esta mencionado no CASE, apareça uma mensagem avisando
	}
		
	}while(semana != 0); //se for diferente de 0, vai executando normalmente. Se for 0, vai parar
	
}
