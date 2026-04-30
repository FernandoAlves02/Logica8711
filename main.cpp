#include<iostream>
#include<windows.h>

int doubleGame(int x){
    return x * 2;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int choice;
    float temp, converted;

    std::cout<<"----- Temperature converter -----"<<std::endl;
    std::cout<<"1: Celsius to Fahrenheit"<<std::endl;
    std::cout<<"2: Fahrenheit to Celsius"<<std::endl;
    std::cout<<"Choose an option (1 or 2):"<<std::endl;
    std::cin>>choice;

    if(choice == 1){
        std::cout<<"Enter temperature in Celsius: "<<std::endl;
        std::cin>>temp;
        converted = (temp * 1.8) + 32;
        std::cout<<temp<<" °C is "<<converted<<"F."<<std::endl;
    }else if(choice == 2){
        std::cout<<"Enter temperature in Fahrenheit: "<<std::endl;
        std::cin>>temp;
        converted = (temp - 32) / 1.8;
        std::cout<<temp<<"F is "<<converted<<" °C."<<std::endl;
    }else{
        std::cout<<"Invalid Option! Please restart."<<std::endl;
    }

    return 0;
}