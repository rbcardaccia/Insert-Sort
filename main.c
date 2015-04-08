#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char** argv) {
    int i, j, num;
    int v[N];
    printf("Inserisci il numero in  posizione 0 : ");
    scanf("%d", &(v[0]));
    for(i = 1; i < N; i++) {
        printf("Inserisci il numero in posizione %d : ", i);
        scanf("%d", &num);
        for(j = i; j > 0 && v[j-1] > num; j--) {
            v[j] = v[j-1];
        }
        v[j] = num;
    }
    printf("Algoritmo ordinato: \n");
    for(i = 0; i < N; i++) {
    printf("%d ", v[i]);
    }
    return (EXIT_SUCCESS);
}