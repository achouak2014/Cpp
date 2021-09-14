
#include <iostream>

int main (){
    double cagnote=31;
    int semaine=1;
    double recette=31;

    while (recette <= 150)
    {
        recette = recette + (cagnote*80/100);
        cagnote = cagnote*80/100;
        semaine++;
    }
    std::cout << " le nombre de semaine est: " << semaine ;

    return 0;
}
