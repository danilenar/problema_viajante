#include <stdio.h>
int main() {

  /*ingreso numero de vertices*/
  int v = 0;
  printf("ingrese numero de vertices: ");
  scanf("%d", &v);

  /*ingreso numero de aristas*/
  int e = 0;
  printf("ingrese numero de aristas: ");
  scanf("%d", &e);


  int matriz[e];
  for (int i = 0; i < e ; i++) {
    int matriz[i][e];
    for (int j = 0; j < v; j++) {
      printf("v%de%d: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  // encabezado de la matriz
  printf("    ");
  for (int i = 1; i <= v ; i++) {
    printf("v%d ", i);
  }
  printf("\n");

  for (int i = 0; i < e; i++) {
    printf("e%d  ", i+1);
    for (int j = 0; j < v; j++) {
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
