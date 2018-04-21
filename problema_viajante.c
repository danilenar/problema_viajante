#include <stdio.h>
#include <string.h>

int main() {
  int v = 0;
  int e = 0;
  int matriz[v][e];
  int pesos[e];
  char validar[1];

  while ( strcmp( validar, "y" ) != 0  ){
  /*ingreso numero de vertices*/
  printf("ingrese numero de vertices: ");
  scanf("%d", &v);

  /*ingreso numero de aristas*/
  printf("ingrese numero de aristas: ");
  scanf("%d", &e);

  //ingreso datos matriz
  for (int i = 0; i < e ; i++) {
    for (int j = 0; j < v; j++) {
      printf("v%de%d: ", j+1 , i+1 );
      scanf("%d", &matriz[j][i]);
    }
    printf("P(e%d): ", i+1);
    scanf("%d", &pesos[i]);
  }


  //RECUADRO MUESTREO DE DATOS DE matriz
  // // encabezado de la matriz
  // //esquina superior izquierda
  // printf("\n\u2554");
  // //bordes superiores
  // for (int i = 0; i < v; i++) {
  //   //primer borde, doble linea
  //   if (i=0) {
  //     printf("\u2550\u2550\u2550\u2566");
  //   }
  //   //el resto son de linea simple
  //   else{
  //     printf("\u2550\u2550\u2550\u2564");
  //   }
  // }
  // //esquina superior derecha
  // printf("\u2550\u2550\u2550\u2556\n");
  // //celda vacia
  // printf("\u2551   \u2551");
  // //encabezados con nombres de vertices
  // for (int i = 0; i < v ; i++) {
  //   if (i<v-1) {
  //     printf("v%d \u2502", i+1);
  //   }
  //   else {
  //     printf("v%d \u2551", i+1);
  //   }
  // }
  //

  // MUESTREO de datos de matriz
  printf("\n   ");
  for (int i = 0; i < e ; i++) {
      printf("e%d ", i+1);
  }

  for (int i = 0; i < v ; i++) {
    printf("\n");
    printf("v%d ", i+1);
    for (int j = 0; j < e; j++) {
      printf("%d  ", matriz[i][j]);
    }
  }
  printf("\nP()");
  for (int i = 0; i < e ; i++) {
    printf("%d  ", pesos[i]);
  }
  printf("\nConfirmar datos (y/n): ");
  scanf("%s\n", &validar);
  }
  printf("calculo\n");
  return 0;
}
