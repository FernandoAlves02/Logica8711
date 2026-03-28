#include<iostream>
#include<string>

int main(){

    std::string nome;
    int idade;
    float altura;


    std::cout<<"Qual seu nome?"<<std::endl; //Solicitação para o cliente informar o nome, detalhe na troca de >> para quando for um insert de informação
    std::cin>>nome;

    std::cout<<"Qual sua idade?"<<std::endl;
    std::cin>>idade;

    std::cout<<"Qual sua altura?"<<std::endl;
    std::cin>>altura;

    std::cout<<"Bem-vindo(a), "<<nome<<"."<<std::endl;
    std::cout<<"Atualizado o seu registro com a idade de "<<idade<<" anos."<<std::endl;
    std::cout<<"Registramos também, a sua altura atual de "<<altura<<"m."<<std::endl;

    return 0;
}