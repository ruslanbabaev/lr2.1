#include <stdio.h>
#include <stdlib.h>


int main() {

    int n_mas;
    printf("Размер массивов: ");
    //scanf("%d", &n_mas);
    if ( (scanf("%d",&n_mas) ) != 1 ){
            printf("Неверное введенное значение\n");
            return 1;
        }

    
    int mas1[n_mas], mas2[n_mas];
    
    printf("Сгенерированный первый массив:\n");
    for (int i = 0; i < n_mas; i++) {
        mas1[i] = rand() % 1001; // диапазон случайных чисед от 0 до 1000
        printf("%d ", mas1[i]);
    }
    
    printf("\nСгенерированный второй массив:\n");
    for (int i = 0; i < n_mas; i++) {
        mas2[i] = rand() % 1001; // диапазон случайных чисед от 0 до 1000
        printf("%d ", mas2[i]);
    }
    printf("\n");

    int mas3[n_mas];

    printf("Получим массив:\n");
    
    for (int i = 0 ; i <= n_mas - 1; i++) {
        mas3[i] = mas1[i] + mas2[i] ;
        printf("%d ", mas3[i]);
    }
    printf("\n");
}

