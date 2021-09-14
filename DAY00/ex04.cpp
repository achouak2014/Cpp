#include <iostream>

int main (){
    int year;
    std::cout << "rentrez un année:" ;
    std::cin >> year;
    if (year%4==0 && year%100!=0){
        std::cout <<"l'année saisie est bissextile";
    }else{
        if (year%400==0){
            std::cout <<"l'année saisie est bissextile";
        }else{
            std::cout <<"l'année saisie n'est bissextile";
        }


    }

    return 0;


}