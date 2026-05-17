#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarArquivo(int questoes, int alunos) {
  srand((unsigned)time(NULL));
  FILE *arq = fopen("dados.txt", "w");
  char letra;

  for (int conta = 1; conta <= questoes; conta++) {
    letra = 'a' + (rand() % ('e' - 'a' + 1));
    fprintf(arq, "%c ", letra);
  }
  fprintf(arq, "\n");

  for (int aluno = 1; aluno <= alunos; aluno++) {
    for (int conta = 1; conta <= questoes; conta++) {
      letra = 'a' + (rand() % ('e' - 'a' + 1));
      fprintf(arq, "%c ", letra);
    }
    fprintf(arq, "\n\n");
  }

  fclose(arq);
}

int main() {
  srand((unsigned)time(NULL));
  int totalQuest = 3 + (rand() % (10 - 3 + 1)),
      totalAl = 5 + (rand() % (15 - 5 + 1)),
      valorQuestao = 1 + (rand() % (3 - 1 + 1)), nota;
  char *gab = (char *)malloc(totalQuest * sizeof(char));
  gerarArquivo(totalAl, totalAl);
  char *respostas = (char *)malloc(totalAl * totalQuest * sizeof(char));
  FILE *entrada = fopen("dados.txt", "r");

  printf("q = %d, a = %d e p = %d \n", totalQuest, totalAl, valorQuestao);
  printf("Gabarito: ");
  for (int q = 0; q < totalQuest; q++) {
    fscanf(entrada, " %c", (gab + q));
    printf("%c ", *(gab + q));
  }
  printf("\n");

  for (int ln = 0; ln < totalAl; ln++) {
    printf("Aluno %d: ", (ln + 1));
    for (int col = 0; col < totalQuest; col++) {
      fscanf(entrada, " %c", (respostas + ln * totalQuest + col));
      printf("%c ", *(respostas + ln * totalQuest + col));
    }
    printf("\n");
  }

  for (int al = 0; al < totalAl; al++) {
    nota = 0;
    for (int q = 0; q < totalQuest; q++) {
      if (*(respostas + al * totalQuest + q) == *(gab + q)) {
        nota += valorQuestao;
      }
    }
    printf("nota do aluno %d : %d pontos\n", al + 1, nota);
  }

  return 0;
}
