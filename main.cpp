#include<iostream>
#include<windows.h>

void imprimirAteN(int num){
    if(num == 0){
        std::cout<<"0! Finalizado! (Da próxima vez, tente um número maior para ficar mais legal)"<<std::endl;
    }else if(num > 0){
        for(int i = 0; i <= num; i++){
            
            if(i == num){
                std::cout<<i<<" chegamos no seu número! Obrigado por utilizar o nosso script!"<<std::endl;
            }else{
                std::cout<<i<<std::endl;
            }

        };
    }else if(num < 0){
        for(int i = 0; i >= num; i--){

            if(i == num){
                std::cout<<i<<" chegamos no seu número! Obrigado por utilizar o nosso script!"<<std::endl;
            }else{
                std::cout<<i<<std::endl;
            }
        };
    };
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;

    std::cout<<"----- Bem vindo ao nosso mais famoso script, Contamos Para Você!! -----"<<std::endl;
    std::cout<<"Digite um número que contaremos do zero até chegar nele!"<<std::endl;
    std::cin>>num;

    imprimirAteN(num);

    return 0;
}