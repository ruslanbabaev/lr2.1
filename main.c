#include <stdio.h>
#include <stdlib.h>


int main() {

    int n_mas;
    printf("Размер массивов: ");
    scanf("%d", &n_mas);

    
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
//отсортируем второй массив и первый. Сложим каждое i-тое число с первого массива с числом из второго
    
    for (int i = 0 ; i < n_mas - 1; i++) {
           // сравниваем два соседних элемента.
           for (int j = 0 ; j < n_mas - i - 1 ; j++) {
               if(mas1[j] > mas1[j+1]) {
                  // если они идут в неправильном порядке, то
                  //  меняем их местами.
                  int tmp = mas1[j];
                  mas1[j] = mas1[j+1];
                  mas1[j+1] = tmp;
               }
            }
        }
    
    for (int i = 0 ; i <= n_mas - 1; i++) {
           // сравниваем два соседних элемента.
           for (int j = 0 ; j < n_mas - i - 1 ; j++) {
               if(mas2[j] > mas2[j+1]) {
                  // если они идут в неправильном порядке, то
                  //  меняем их местами.
                  int tmp = mas2[j];
                  mas2[j] = mas2[j+1] ;
                  mas2[j+1] = tmp;
               }
            }
        }
    int mas3[n_mas];

    printf("Получим массив:\n");
    
    for (int i = 0 ; i <= n_mas - 1; i++) {
        mas3[i] = mas1[i] + mas2[i] ;
        printf("%d ", mas3[i]);
    }
}
