#include <stdio.h>

int main() {
  int opcao;
  int quantidade;
  int matricula;
  long long telefone;
  int i;

  FILE *entrada;
  FILE *saida;

  printf("1 - Teclado\n2 - Arquivo\n");
  scanf("%d", &opcao);

  saida = fopen("saida.txt", "w");

  if (opcao == 1) {
    printf("Quantidade de alunos: ");
    scanf("%d", &quantidade);

    for (i = 0; i < quantidade; i++) {
      printf("Matricula: ");
      scanf("%d", &matricula);

      printf("Telefone: ");
      scanf("%lld", &telefone);

      fprintf(saida, "%d %lld\n", matricula, telefone);
    }
  }

  else if (opcao == 2) {
    entrada = fopen("entrada.txt", "r");

    while (fscanf(entrada, "%d %lld", &matricula, &telefone) != EOF) {
      fprintf(saida, "%d %lld\n", matricula, telefone);
    }

    fclose(entrada);
  }

  else {
    printf("Opcao invalida\n");
  }

  fclose(saida);

  return 0;
}
