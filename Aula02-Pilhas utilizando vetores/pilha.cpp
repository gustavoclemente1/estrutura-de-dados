#include <iostream>
#include "pilha.h"

using namespace std;



    pilha::pilha() //função construtora
    {
        tamanho = 0;
        estrutura = new TipoItem[max_itens];
    }

    pilha::~pilha()
    {
        delete [] estrutura;
    }

    bool pilha::estacheia()
    {
        return (tamanho == max_itens);
    }

    bool pilha::estavazia()
    {
        return (tamanho == 0);
    }

    void pilha::push(TipoItem item) //inserir 
    {
        if (estacheia()){
            cout << "A pilha está cheia!";
            cout << "Não é possível inserir este elemento!\n";
        } else{
            estrutura[tamanho] = item;
            tamanho++;
        }
    }
    TipoItem pilha::pop()  //remover
    {
        if (estavazia()){
            cout << "A pilha está vazia!\n";
            cout << "Não tem elemento pra ser removido!\n";
            return 0;
        }else{
            tamanho--;
            return estrutura[tamanho];
        }
    }
    void pilha::imprimir()
    {
        cout << "Pilha: [ ";
        for (int i=0; i < tamanho; i++){
            cout << estrutura[i] << " ";
        }
        cout << "]\n";
    }

    int pilha::lenght()
    {
        return tamanho;
    }