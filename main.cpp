#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string user;
    std::string senha;

    std::cout<<"Digite seu usuário de acesso> "<<std::endl;
    std::cin>>user;

    std::cout<<"Digite sua senha: "<<std::endl;
    std::cin>>senha;

    if(senha == "123456789"){
        std::cout<<"O usuário "<<user<<" está logado com sucesso!!"<<std::endl;
    }else{
        std::cout<<"Usuário ou senha inválidos!"<<std::endl;
    }
    

    return 0;
}