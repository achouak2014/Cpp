#include <iostream>

int main() {
	int y ;
	int i = 0 ;
	 
	int tab [8];
	for(int i = 0 ; i<=8 ; i++){
		tab[i]=rand()%20 ; 
		std::cout<< tab[i] << "  ";

	}

	 std::cout << "\n entrez une autre entier: " ;
    std::cin >> y;
	while( i <= 8 && tab[i] != y ){
		i++ ; 
	}
	if (i <= 7 ){
		std::cout << "L'élément se trouve dans la position " << i ;
	}else {
		std::cout<< -1 ; 
	}

}