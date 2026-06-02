#include<iostream>
#include<windows.h>
#include<string>
#include<cctype>

std::string limparString(std::string stringSuja){

    std::string stringLimpa = "";
    
    for(char c : stringSuja){
        if(!isspace(c)){
            stringLimpa += c;
        }
    }

    for(int i = 0; i < stringLimpa.length(); i++){
        stringLimpa[i] = std::tolower(stringLimpa[i]);
    }

    return stringLimpa;
}

bool ehPalindromo(std::string s, int inicio, int fim){
    if(inicio >= fim){
        return true;
    }
    if(s[inicio] != s[fim]){
        return false;
    }
    return ehPalindromo(s, inicio + 1, fim -1);
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string palavra;

    std::cout<<"Bora ver se a tua palavra é um Palíndromo ou não!"<<std::endl;
    std::cout<<"Digite a sua palavra: ";
    std::getline(std::cin>>std::ws, palavra);

    std::cout<<"Verificando..."<<std::endl;

    for(char &c : palavra){
        c = std::tolower(c);
    }
    std::cout<<palavra<<std::endl;

    if(ehPalindromo(palavra, 0, palavra.length() - 1)){
        std::cout<<"Sim! "<<palavra<<" é um palíndromo!"<<std::endl;
    }else{
        std::cout<<"Infelizmente, "<<palavra<<" não é um palíndromo."<<std::endl;
    }
    

    return 0;
}