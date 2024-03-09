#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    stack Pilha1;
    TipoItem item;
    int opcao;

    do{
        cout << "\n ------ Gerenciador de Pilha ----- ";
        cout << "\n0 - Sair.\n1 - Para Inserir um novo elemento.\n2 - Para Remover um elemento.\n3 - Imprimir a pilha.\n4 - Informar tamanho da pilha.\n\n";
        cout << "Digite: ";
        cin >> opcao;
        switch(opcao){
            case 0:
                break;
            case 1:
                cout << "Digite o elemento a ser inserido: ";
                cin >> item;
                Pilha1.push(item);
                cout << "\n---------------------------------\n";
                system("pause >> NULL");
                break;
            case 2:
                item = Pilha1.pop();
                cout << "Elemento removido: " << item;
                cout << "\n---------------------------------\n";
                system("pause >> NULL");
                break;
            case 3:
                Pilha1.print();
                cout << "\n---------------------------------\n";
                system("pause >> NULL");
                break;
            case 4:
                cout << "Tamanho: " << Pilha1.size() << endl;
                cout << "\n---------------------------------\n";
                system("pause >> NULL");
                break;
            default:
                cout << "Opcao invalida!";
                system("pause >> NULL");
                break;
        }
    }while(opcao != 0);

    return 0;
}