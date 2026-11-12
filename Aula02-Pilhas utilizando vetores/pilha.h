//pilha=stack

typedef int TipoItem;
const int max_itens = 100;

class pilha{
    private:
    int tamanho;
    TipoItem* estrutura;

    public:
    pilha(); //construtora //stack
    ~pilha(); //destrutora //~stack
    bool estacheia(); //verifica se a pilha está cheia 
    bool estavazia(); //verifica se a pilha está vazia
    void push(TipoItem item); //inserir um elemento
    TipoItem pop(); //remover item da pilha
    void imprimir(); //print
    int lenght(); //tamanho da pilha
};