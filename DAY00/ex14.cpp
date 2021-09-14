#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include <random>
#include<cstdlib>
 
int main()
{
	int i,j,max,imin,tmp;
	
int tab[15]  ;
	for (int i = 0 ; i<=15 ; i++){
		tab[i] = rand();
		
	}

 for(i=0;i<15-1;i++)
  {
  imin=i;max=tab[i];
  for(j=i+1;j<15;j++)
	  if(tab[j]>max)
	  {
		  max=tab[j];
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
