#include <stdio.h>

char menu() {
  char op;

  printf("Escolha uma das opcoes\n");
  printf("a - alinhar a esquerda\n");
  printf("b - alinhar a direita\n");
  printf("c - alinhar e inverter a esquerda\n");
  printf("d - alinhar e inverter a direita\n");
  printf("e - Arvore\n");
  printf("f - losango\n");
  printf("g - inverter arvore\n");
  printf("h - sair\n");
  printf("Opcao: ");
  scanf(" %c", &op);
  return op;
}

void desenhaEsq(int altura) {
  if (altura == 1)
    printf("*\n");
  else if (altura > 1) {
    desenhaEsq(altura - 1);
    for (int quant = 1; quant <= altura; quant++)
      printf("*");
    printf("\n");
  }
}
void desenhaEsqInv(int altura) {
  if (altura == 1)
    printf("*\n");
  else if (altura > 1) {
    for (int quant = 1; quant <= altura; quant++)
      printf("*");
    printf("\n");
    desenhaEsqInv(altura - 1);
  }
}

void desenhaDir(int N, int altura) {
  if (altura == 1) {
    for (int quant = 1; quant <= N - altura; quant++) {
      printf(" ");
    }
    printf("*\n");
  } else if (altura > 1) {
    desenhaDir(N, altura - 1);
    for (int quant = 1; quant <= N - altura; quant++) {
      printf(" ");
    }
    for (int quant = 1; quant <= altura; quant++)
      printf("*");
    printf("\n");
  }
}
void desenhaDirInv(int N, int altura) {
  if (altura == 1) {
    for (int quant = 1; quant <= N - altura; quant++) {
      printf(" ");
    }
    printf("*\n");
  } else if (altura > 1) {
    for (int quant = 1; quant <= N - altura; quant++) {
      printf(" ");
    }
    for (int quant = 1; quant <= altura; quant++)
      printf("*");
    printf("\n");
    desenhaDirInv(N, altura - 1);
  }
}

void desenhaArvore(int N, int altura) {
  if (altura == 1) {
    for (int quant = 1; quant <= N - altura; quant++) {
      printf(" ");
    }
    printf("*\n");
  } else if (altura > 1) {
    desenhaArvore(N, altura - 1);
    for (int quant = 1; quant <= N - altura; quant++) {
      printf(" ");
    }
    for (int quant = 1; quant <= 2 * altura - 1; quant++)
      printf("*");
    printf("\n");
  }
}

int main() {
  char res = menu();
  int N;

  while (res != 'h') {
    printf("Digite o valor de n");
    scanf("%d", &N);

    switch (res) {
    case 'a':
      desenhaEsq(N);
      break;
    case 'b':
      desenhaDir(N, N);
      break;
    case 'c':
      desenhaEsqInv(N);
      break;
    case 'd':
      desenhaDirInv(N, N);
      break;
    case 'e':
      desenhaArvore(N, N);
      break;
    // case 'f':
    //   desenhaLosango(N);
    //   break;
    // case 'g':
    //   desenhaArvoreInv(N);
    //   break;
    default:
      printf("Opcao Invalida\n");
      break;
    }
    res = menu();
  }
  return 0;
}
