#include <stdlib.h>
#include <stdio.h>
#include<iostream>
 
char chr(char str)
{
    return str;
}

int ord(int str)
{
    return str;
}
 
int main()
{
  	for (int i= ord('z') ;i >= ord('a'); i--){
		std::cout <<"\n"<< chr(i);

	}	


    return 0;
}
