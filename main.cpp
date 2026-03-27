#include<iostream>
#include<iomanip>

int main(){

    int a = 8; //int número inteiro
    float b = 9.6; //float número de ponto flutuante "pega até 7 casas decimais" ocupa 4bytes
    double c = 4.6654165413; //double ocupa 8bytes "pega até mais números pós ponto"


    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;

    std::cout<<std::fixed<<std::setprecision(10)<<c<<std::endl;

    return 0;
}