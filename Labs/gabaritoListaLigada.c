#include <stdio.h>
#include <stdlib.h>

/* No da lista backward */
struct no {
    int chave;
    int tempo;
    struct no *prox;
    struct no *back;
};

/* Insere um no com a chave informada no fim da lista. O apontador back
   referencia o no que esta 'distancia' posicoes antes do novo no
   (distancia = 0 significa back nulo). */
void insere(struct no **cabeca, int chave, int distancia, int tempo)
{
    struct no *novo, *atual, *alvo;
    int quantidade, posicao;

    novo = (struct no *) malloc(sizeof(struct no));
    if (novo == NULL) {
        exit(1);
    }
    novo->chave = chave;
    novo->tempo = tempo;
    novo->prox = NULL;
    novo->back = NULL;

    if (*cabeca == NULL) {
        *cabeca = novo;
        return;
    }

    /* percorre ate o ultimo no, contando quantos nos ja existem */
    quantidade = 1;
    atual = *cabeca;
    while (atual->prox != NULL) {
        atual = atual->prox;
        quantidade++;
    }
    atual->prox = novo;

    /* o novo no ocupa a posicao 'quantidade'; o alvo esta em
       quantidade - distancia */
    if (distancia > 0) {
        alvo = *cabeca;
        for (posicao = 0; posicao < quantidade - distancia; posicao++) {
            alvo = alvo->prox;
        }
        novo->back = alvo;
    }
}

/* Remove o primeiro no com a chave informada (se existir) e anula
   todos os apontadores back que o referenciavam. */
void remove_chave(struct no **cabeca, int chave)
{
    struct no *anterior, *atual, *percorre;

    anterior = NULL;
    atual = *cabeca;
    while (atual != NULL && atual->chave != chave) {
        anterior = atual;
        atual = atual->prox;
    }
    if (atual == NULL) {
        return; /* chave nao encontrada: lista inalterada */
    }

    if (anterior == NULL) {
        *cabeca = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    /* apenas nos posteriores podem apontar para o removido */
    for (percorre = atual->prox; percorre != NULL; percorre = percorre->prox) {
        if (percorre->back == atual) {
            percorre->back = NULL;
        }
    }
    free(atual);
}

/* Devolve a posicao (a partir de 0) do no alvo na lista. */
int posicao_de(struct no *cabeca, struct no *alvo)
{
    int posicao;

    posicao = 0;
    while (cabeca != alvo) {
        cabeca = cabeca->prox;
        posicao++;
    }
    return posicao;
}

void imprime(struct no *cabeca)
{
    struct no *atual;

    if (cabeca == NULL) {
        printf("-1\n");
        return;
    }
    for (atual = cabeca; atual != NULL; atual = atual->prox) {
        if (atual != cabeca) {
            printf(" ");
        }
        if (atual->back == NULL) {
            printf("[%d,%d]", atual->chave, atual->tempo);
        } else {
            printf("[%d,%d,%d]", atual->chave, atual->tempo,
                   posicao_de(cabeca, atual->back));
        }
    }
    printf("\n");
}

void libera(struct no *cabeca)
{
    struct no *proximo;

    while (cabeca != NULL) {
        proximo = cabeca->prox;
        free(cabeca);
        cabeca = proximo;
    }
}

int main(void)
{
    struct no *cabeca;
    char operacao;
    int chave, distancia, tempo;

    cabeca = NULL;
    tempo = 0;
    while (scanf(" %c", &operacao) == 1 && operacao != 'f') {
        if (operacao == 'i') {
            if (scanf("%d %d", &chave, &distancia) != 2) {
                break;
            }
            insere(&cabeca, chave, distancia, tempo);
            tempo++;
        } else if (operacao == 'r') {
            if (scanf("%d", &chave) != 1) {
                break;
            }
            remove_chave(&cabeca, chave);
            tempo++;
        }
    }

    imprime(cabeca);
    libera(cabeca);
    return 0;
}
