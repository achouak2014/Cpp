#include<iostream>
#include<string>
int main (){
int nbr1 , nbr2 ; 
	std::cout<< "Entrez un entier " ;
	std::cin >> nbr1 ;
	
	do{
	
	std::cout<< "Entrez un autre  entier plus grand " ;
	std::cin >> nbr2 ;
	} while(nbr2<nbr1) ;
	
	int i = 0 ; 
	for(i=0;i<=nbr2 ; i++ ){
		nbr1 = nbr1 + i ; 
	}
	std::cout << "la somme " << nbr1 ; 
	return 0 ; 
}