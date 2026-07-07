#include<iostream>
#include<windows.h>
#include<vector>

bool verificarExiste(std::vector<int>&vec, int valor){
    for(int i = 0; i < vec.size(); i++){
        if(valor == vec[i]) return true;
    }
    return false;
}

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    system("cls");
    std::vector<int>numeros;

    std::cout<<"Bem vindo ao contador de ocorrências, para começar, crie o seu vetor."<<std::endl;
    std::cout<<"Escreva um número para adicionar ao vetor ou 0 para parar: "<<std::endl;
    int valor = 0;
    while(true){
        std::cout<<"Digite um número inteiro: ";
        std::cin>>valor;

        if(valor == 0) break;
        numeros.push_back(valor);
    }

    std::cout<<std::endl;
    std::cout<<"Contar ocorrências: "<<std::endl;
    std::cout<<"Vector: ";
    for(int i = 0; i < numeros.size(); i++){
        std::cout<<numeros[i]<<(i == (numeros.size() - 1) ? "." : ", ");
    }
    std::cout<<std::endl;

    std::vector<int>repetidos;

    for(int i = 0; i < numeros.size(); i++){
        for(int j = i + 1; j < numeros.size(); j++){
            if(numeros[i] == numeros[j]){
                if(!verificarExiste(repetidos, numeros[i]))
                    repetidos.push_back(numeros[i]);
                    break;
            }
        }
    }

    std::cout<<std::endl;
    std::cout<<"Números repetidos: ";
    for(int i = 0; i < repetidos.size(); i++){
        std::cout<<repetidos[i]<<(i == (repetidos.size() - 1) ? "." : ", ");
    }
    std::cout<<std::endl;

    std::vector<int>contador;
    for(int i = 0; i < repetidos.size(); i++){
        for(int j = 0; j < numeros.size(); j++){
            if(repetidos[i] == numeros[j]){
                if(i == (contador.size() - 1)){
                    int valor = contador[i];
                    valor += 1;
                    contador[i] = valor;
                }else{
                    contador.push_back(1);
                }
            }
        }
    }
    

    std::cout<<std::endl;
    for(int i = 0; i < repetidos.size(); i++){
        std::cout<<"O número "<<repetidos[i]<<" aparece "<<contador[i]<<" vezes."<<std::endl;
    }

    return 0;
}