#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include<cstdlib>


 
int main()
{
	int i,j,min,imin,tmp;
	
int tab[15]  ;
	for (int i = 0 ; i<=15 ; i++){
		tab[i] = rand();
		
	}

 for(i=0;i<15-1;i++)
  {
  imin=i;min=tab[i];
  for(j=i+1;j<15;j++)
	  if(tab[j]<min)
	  {
		  min=tab[j];
		  imin=j;
		  }
 
  tmp=tab[imin];
	  tab[imin]=tab[i];
	  tab[i]=tmp;
  }
std::cout<<"VOICI LE TABLEAU TRIE : \n";
for(i=0;i<15;i++) 
	std::cout<< "\n" << tab[i];
 
   

    return 0;
}
