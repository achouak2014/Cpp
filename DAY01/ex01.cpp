#include <iostream>

int main() {
	int y ;
	int i = 0 ;
	 
	int tab []={8,7,9,1,54,32,58,55};
	 std::cout << "entrez une autre entier:" ;
    std::cin >> y;
	while( i <= 7 && tab[i] != y ){
		i++ ; 
	}
	if (i <= 7 ){
		std::cout << "L'élément se trouve dans la position " << i ;
	}else {
		std::cout<< -1 ; 
	}

}