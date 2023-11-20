/*Задания на указатели
1. Поменять в целом положительном числе (типа int) значение третьего
байта на введенное пользователем число (изначальное число также
вводится с клавиатуры) через указатель (не применяя битовые
операции)
*/

#include <stdio.h>

int main(){

    int value;
    int number;
    printf("Введите целое положительное число: ");
    scanf("%d", &value);
    printf("Введите целое положительное число для значения 3-го байта: ");
    scanf("%d", &number);

    printf("Целое число до замены: %2d\n", value);
    char *cptr = &value;
    cptr = cptr + 2; //Shift to third byte of value
    *cptr = number;
    cptr = NULL;
    printf("Целое число после замены: %2d\n", value);

    return 0;
}