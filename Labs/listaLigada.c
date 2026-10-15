#include <stdio.h>
#include <stdlib.h>

typedef struct no {

    int chave;
    int tempo;
    struct no * prox; 
    struct no * back;

} No;


int contador = 0; //contabiliza os instantes
No *inicio = NULL; //a cabeca da lista comeca vazia 


void insercao(int n, int j) {

    No *novoNo = malloc(sizeof(No));

    novoNo->chave = n; 
    novoNo->tempo = contador;
    novoNo->prox = NULL;
    novoNo->back = NULL; 


    // liga o ultimo noh anterior ao novo
    if (inicio == NULL)
        inicio = novoNo;
    else    {
        No* atual = inicio;
        while (atual->prox != NULL) {
            atual = atual->prox;
            
        }   
        atual->prox = novoNo;
    }
    
    // liga o novo noh ao noh de distancia j
    if (j>0) {
        
        //descobre o total de nohs na lista 
        int total = 0; 
        No* temp = inicio;
        while(temp != NULL){
            total++; 
            temp = temp->prox;
        }
        
        int posicaoDesejada = total - j;
        
        //acha o noh na posicao desejada e poe seu endereco no back do novo
        temp = inicio; 
        int posicao = 1;
        while (posicao != posicaoDesejada){
            temp = temp->prox; 
            posicao++; 
        }
        novoNo->back = temp;
    }

    contador++;
}

void remocao (int n) {
    
    No* atual = inicio;
    No*anterior = NULL;
    
    //acha o noh a ser removido 
    while (atual != NULL && atual->chave != n){
        anterior = atual;
        atual = atual->prox;
    }
    
    //arruma o back dos nohs que referenciavam o noh que vai ser removido
    No* temp = inicio; 
    if (atual != NULL) {
        while(temp != NULL){
            if (temp->back == atual)
                temp->back = NULL;
            temp = temp->prox;
    }
    }
    
    //arruma a ligacao da lista
    if (atual != NULL && anterior != NULL)
        anterior->prox = atual->prox;
    else if (atual != NULL && anterior == NULL) // o noh removido eh a cabeca da lista
        inicio = atual->prox;
    
    free(atual);
    contador++;
}

void imprimir (void) {

    if (inicio == NULL) //lista vazia
        printf("-1\n");
    else {
        No * atual = inicio;
        while (atual != NULL){
            
            if (atual->back == NULL) //sem back
                printf("[%d,%d]", atual->chave, atual->tempo);
            else { 
                
                //contabiliza a posicao
                No * temp = inicio;
                int posicao = 0;
                while(temp != atual->back) {
                    temp = temp->prox;
                    posicao++;
                }
                
                printf("[%d,%d,%d]", atual->chave, atual->tempo, posicao);
                
            } //com back
            atual = atual->prox;
            
            if(atual != NULL) //separa os nohs por espaco
                printf (" ");
	    }

    }   
    
    printf("\n");
}

int main () {

    char op; 
    int n, j; 

    while ((scanf(" %c", &op)) == 1 && op != 'f') {
        if (op == 'i') {
            scanf ("%d", &n);
            scanf("%d", &j);
            insercao(n, j); 
        }
        else if (op == 'r') {
            scanf ("%d", &n);
            remocao(n); 
        }
    }

    imprimir(); 

    // Libera a memória
    while (inicio != NULL) {
        No *temp = inicio;
        inicio = inicio->prox;
        free(temp);
    }

    return 0;

}
