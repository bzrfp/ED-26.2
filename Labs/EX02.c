//lista duplamente encadeada

#include <stdio.h> 

struct no {

int chave;
int tempo;
struct no * prox; 
struct no * back;

}

//implementar de forma iterativa 
void insercao(int n, int j) {

struct no novoNo; 

novoNo.chave = n; 
novoNo.tempo = //i 

if j == 0
  novoNo.back = NULL;
}

void remocao (int n) {}

int main () {

char op; 
int n, j; 

scanf("%c", op);

while op != "f";

  if op == "i"; {
    scanf ("%d", n);
    scanf("%d", j);
    insercao(n, j); 
    }
    
  else if op == "r" {
    scanf ("%d", n);
    remocao(n); 
  }

}
