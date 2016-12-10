#include<iostream>

#define tam 5

using namespace std;

struct pessoa{
    String nome;
    int idade;
};

int main(){

//TIPOS DE ENUMERAÇÃO
//------------------------------------------------------
    enum Color { red, green, blue };

    Color r = red;

    switch(r)
    {
        case red  : std::cout << "red\n";   break;
        case green: std::cout << "green\n"; break;
        case blue : std::cout << "blue\n";  break;
    }
//------------------------------------------------------

//MATRIZ ESTATICA
//------------------------------------------------------
    int mtzEst[tam][tam];
    int k=0;

    for(int i=0; i<tam; i+=1){
        for(int j=0; j<tam; j+=1){
            mtzEst[i][j] = k;
            k+=1;
        }
    }
//------------------------------------------------------

//MATRIZ DINAMICA
//------------------------------------------------------
    k=0;
    int** mtzDin = new int*[5];

    for(int i = 0; i < 5; i++)
       mtzDin[i] = new int[5];

    for(int i=0; i<tam; i+=1){
        for(int j=0; j<tam; j+=1){
            mtzDin[i][j] = k;
            k+=1;
        }
    }
//------------------------------------------------------

//UNIAO
//------------------------------------------------------
    int vetA[5], vetB[5], vetU[10];
    int c = 5;

    for(int i=0; i<5; i+=1){
        vetU[i] = vetA[i];
        vetU[c] = vetB[c];
        c+=1;
    }
//------------------------------------------------------

//REGISTRO
//------------------------------------------------------
    pessoa joao;

    joao.nome = "joao";
    joao.idade = 30;
//------------------------------------------------------

}
