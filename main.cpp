#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //brlAmount: valor em reais / exchangeRate: Taxa de Câmbio / usdAmount: Valor em dólar
    double brlAmount, exchangeRate, usdAmount;
    int choice; //choice: escolha

    std::cout<<"----- Currency Converter: BRL to USD -----"<<std::endl;

    //Entrada da taxa de câmbio (quanto vale 1 dolar hoje)
    std::cout<<"Enter the curresnt exchange rate (How much is 1 dollar in Reais?): "<<std::endl;
    std::cin>>exchangeRate;

    //Entrada da quantia em Reais que a pessoa deseja converter
    std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
    std::cin>>brlAmount;

    //Verificação Lógica: garante que o valor informado seja positivo
    if(brlAmount > 0){
        //cálculo: divide o montante em reais pela taxa de câmbio
        usdAmount = brlAmount / exchangeRate;
        std::cout<<"You will have $"<<usdAmount<<" US Dollars."<<std::endl;
    }else{
        //Mensagem de erro caso o valor seja zero ou negativo
        std::cout<<"Error: Please enter a valid amount greater than zero."<<std::endl;
    }

    return 0;
}