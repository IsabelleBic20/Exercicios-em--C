/*Dado um vetor de numeros inteiros, encontre o segundo menor valor presente no
 * vetor*/
#include <stdio.h>

int main(void) {
  int i, aux, n, j;

  scanf("%d", &n);
  int vetor[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      if (vetor[i] > vetor[j]) {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }
for (i=1;i<2;i++){
  printf("O segundo menor valor é: %d", vetor[i]);}
  return 0;
}

// TERMINAR