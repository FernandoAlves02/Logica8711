#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //algoritmo que solicite o nome, altura, idade
    //a idade, iremos classificar <=10 Infantil, <=18 = Adolescente, <= 60 Adulto

    std::string nome;
    float altura;
    int idade;

    std::cout<<"Olá, para prosseguir com seu cadastro na Instituição Swim de Aulas de Natação, por gentileza, insira o seu primeiro nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<nome<<" por favor, vamos precisa da sua altura agora: "<<std::endl;
    std::cin>>altura;

    std::cout<<"Para finalizar o seu cadastro, vamos precisar da sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade < 0){
        std::cout<<"Idade incorreta!"<<std::endl;
    }else if(idade <= 10){
        std::cout<<"Seja muito bem-vindo "<<nome<<", já finalizamos o seu cadastro, com base na sua altura e idade registradas, você foi selecionado para a turma Infantil!"<<std::endl;
    }else if(idade <= 18){
        std::cout<<"Seja muito bem-vindo "<<nome<<", já finalizamos o seu cadastro, com base na sua altura e idade registradas, você foi selecionado para a turma Adolescente!"<<std::endl;
    }else{
        std::cout<<"Seja muito bem-vindo "<<nome<<", já finalizamos o seu cadastro, com base na sua altura e idade registradas, você foi selecionado para a turma Adulta!"<<std::endl;
    }

    return 0;
}