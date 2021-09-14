#include<iostream>



int calculatrice(){
    int x;
    std::cout << "entrez un valeur:" ;
    std::cin >> x;
	 int y;
    std::cout << "entrez une autre valeur:" ;
    std::cin >> y;
	char op ; 
	std::cout<< "entrez la opération ";
	std::cin >> op ; 

	switch(op){
		case '+':
			std::cout << x+y ; 
		break ; 
		case '-':
			std::cout << x-y ; 
		break ;
		case '*':
			std::cout << x*y ; 
		break ;
		case '/':
			std::cout << x/y ; 
		break ;
		
	}
	return 0 ; 
}

int main( ){

calculatrice();

return 0 ;
}