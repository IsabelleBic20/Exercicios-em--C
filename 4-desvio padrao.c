

#include <math.h>
#include <stdio.h>
int main(void) {
  int vetor[100], vetor2[100], soma = 0, soma2 = 0, media, i, n;
  float raiz, variancia;

  scanf("%d", &n);

  if (n > 100) {
    printf("Quantidade excedida.");
  }

  for (i = 0; i < n; i++) {

    scanf("%d", &vetor[i]);
    soma += vetor[i];
    media = soma / n;
  }

  for (i = 0; i < n; i++) {
    vetor2[i] = vetor[i] - media;
    soma2 += pow(vetor2[i], 2);
  }

  variancia = soma2 / n;
  raiz = sqrt(variancia);
  printf("%.2f ", raiz);

  return 0;
}
