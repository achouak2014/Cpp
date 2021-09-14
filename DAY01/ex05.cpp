#include <iostream>
#include <stdio.h>
#include <string.h>

int main(){
   char string1[20];
    int i, length;
    int pal = 0;
    
    std::cout << "Entez une chaine  "; 
	std::cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            pal = 1;
            break;
   }
}
    
    if (pal) {
        std::cout << string1 << " n'est pas une palindrome" ; 
    }    
    else {
        std::cout << string1 << " c'est une  palindrome" ;
    }
   
    return 0;
}
