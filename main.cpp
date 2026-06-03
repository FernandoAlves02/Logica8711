#include<iostream>
#include<windows.h>
#include<string>
#include<chrono>

struct Aluno{
    std::string nome;
    float nota1;
    float nota2;
};

float calcularMedia(Aluno a){
    return (a.nota1 + a.nota2) / 2;
}


int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Aluno a1;

    std::cout<<"Bem vindo a nossa calculadora de média das suas notas!"<<std::endl;
    std::cout<<"Por gentileza, quem gostaria de saber a sua media? (Insira o nome do Aluno): ";
    std::cin>>a1.nome;
    std::cout<<"Agora, por gentileza, a sua primeira nota: ";
    std::cin>>a1.nota1;
    std::cout<<"Por ultimo, vou precisa da sua segunda nota: ";
    std::cin>>a1.nota2;

    std::cout<<"Calculado..."<<std::endl;
    Sleep(3000);
    float media = calcularMedia(a1);

    std::cout<<a1.nome<<" - Média: "<<media<<std::endl;

    return 0;
}