#include <iostream>
#include "pilha.h"

using namespace std;

int main (){
    pilha pilha1;
    TipoItem item;
    int opcao;
    cout << "Programa gerador de pilha:\n";

    do {
        cout << "Digitem 0 para parar o programa\n";
        cout << "Digite 1 para inserir um elemento\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 para imprimir a pilha\n";
        cout << "Digite 4 para verificar se a pilha está vazia\n";
        cout << "Digite 5 para verificar se a pilha está cheia\n";
        cin >> opcao;
        if(opcao == 1){
            cout << "Digite o elemento a ser inserido\n";
            cin >> item;
            pilha1.push(item);
        }else if (opcao == 2){
            item = pilha1.pop();
            cout << "Elemento Removido: " << item << endl;
        }else if (opcao == 3){
            pilha1.imprimir();
        }else if (opcao == 4){
            pilha1.estavazia();
        }else if (opcao == 5){
            pilha1.estacheia();
        }
    }while(opcao !=0);
    return 0;
}