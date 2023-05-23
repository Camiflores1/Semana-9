//Construir un programa en C en donde el usuario defina las dimensiones de una matriz, el programa llene la matriz con numeros aleatorios entre 0 y 100 y luego calcule la matriz transpuesta. El programa debe imprimir la matriz original y la matriz transpuesta.

#include <stdio.h>

int main() {
    int fil, colum;
    
    printf("Ingresar el número de filas de la matriz: ");
    scanf("%d", &fil);
    printf("Ingresar el número de columnas de la matriz: ");
    scanf("%d", &colum);
    
    // Establecer la matriz
    int matriz[fil][colum];
    
    // Con está instruccion se genera los números aleatorios
    rand(time(NULL));
    
    // Se llenara la matriz con números aleatorios entre 0 y 100
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < colum; j++) {
            matriz[i][j] = rand() % 101;  
        }
    }
    
    // Se muestra la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < fil; i++) {
        for (int j = 0; j < colum; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Calcular la matriz transpuesta
    int transpuesta[colum][fil];
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < fil; j++) {
            transpuesta[i][j] = matriz[j][i];
        }
    }
    
    //Determina la matriz transpuesta
    printf("\nMatriz transpuesta:\n");
    for (int i = 0; i < colum; i++) {
        for (int j = 0; j < fil; j++) {
            printf("%d ", transpuesta[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
