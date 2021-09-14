#include <iostream> 
int main(){
int tab [] = {1,2,3,4,5,6,7,8,9};

	int tab2[8];
	std::cout << "le premier tableau est : \n" ; 
	for(int i = 0 ; i<=8 ;i++ ){
		std::cout <<tab[i] << " - "; 
	}
	std::cout << " \n le carés du tableau est : \n " ; 
for (int i = 0 ; i<= 8 ; i ++ ){
	tab2[i]=tab[i]*tab[i];
	std::cout <<tab2[i]<< " - ";
}	
	return 0 ; 
}