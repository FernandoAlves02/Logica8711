#include<iostream>
#include<windows.h>
#include<vector>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::vector<int>numeros;

    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);

    std::cout<<"Bora somar um vetor aí!"<<std::endl;
    std::cout<<"Vetor: ";

    int soma = 0;
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<(i == (numeros.size() - 1) ? "." : ", ");
        soma += numeros[i];
    }
    std::cout<<std::endl;

    std::cout<<"O montante da soma dos números é de: "<<soma<<std::endl;

    return 0;
}

