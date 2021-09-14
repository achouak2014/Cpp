
#include<iostream>



int fizzbuzz(){
    int x;
    std::cout << "rentrez un valeur:" ;
    std::cin >> x;
if (x%3==0 && x%5==0 ){
	std::cout  << "le nombre est un fizzbuzz" ;
}else if (x%5==0 ){
	std::cout << "le nombre est non buzz";
}else if (x%3==0 ){
	std:: cout << "le nombre est fizz" ;
}
	return 0 ; 
}

int main( ){

fizzbuzz();

return 0 ;
}