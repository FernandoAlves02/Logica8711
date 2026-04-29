#include<iostream>
#include<windows.h>

int doubleGame(int x){
    return x * 2;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    for(int i = 1; i <= 5; i++){
        std::cout<<"O dobro de "<<i<<" é "<<doubleGame(i)<<"."<<std::endl;
    }

    return 0;
}