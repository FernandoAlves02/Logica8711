#include<iostream>
#include<windows.h>
#include<string>

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

    Aluno aluno = {"Paulo", 8.0, 9.5};

    float media = calcularMedia(aluno);

    std::cout<<aluno.nome<<" - Média: "<<media<<std::endl;

    return 0;
}