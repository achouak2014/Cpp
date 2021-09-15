#include <stdlib.h>
#include <stdio.h>
#include<iostream>
#include<cstdlib>


 
int main()
{
	int i,j,min,imin,tmp;
	
int tab[15]  ;
	for (int i = 0 ; i<=15 ; i++){
		tab[i] = rand()%20;
		
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
std::cout<<"Les trois plus grand nombre : \n";
for(i=0;i<15;i++) {
	std::cout<< "\n" << tab[i];
}
	
 std::cout<<"\n Les trois plus grand nombre : \n";
for(int j=14;j>=12;j--) {
	std::cout<< "\n" << tab[j];
 
}
	
   

    return 0;
}
