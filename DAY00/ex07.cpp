#include <iostream>



int main (){

    double montant;
    double sum=0;
    std::cout << "Ecrivez le montant de Bitcoins:";
    std::cin >> montant;
    sum = sum+ (montant *38289.47);
    std::cout << "Ecrivez le montant de Ethereums:";
    std::cin >> montant;
    sum = sum+ (montant* 2786.34);
    std::cout << "Ecrivez le montant de XRP:";
    std::cin >> montant;
    sum = sum+ (montant* 0.91);
    std::cout << "Ecrivez le montant de Dogecoin:";
    std::cin >> montant;
    sum = sum+ (montant *0.204);
    std::cout << "Ecrivez le montant de Cardano:";
    std::cin >> montant;
    sum = sum + (montant*2.07);

    std::cout <<"la somme en euro est:" << sum <<" €";


    return 0;
}