/*Задания на указатели
4. Напишите программу, которая ищет введенной строке (с клавиатуры)
введенную подстроку (с клавиатуры) и возвращает указатель на начало
подстроки, если подстрока не найдена в указатель записывается NULL.
В качестве срок использовать статические массивы.ю
*/

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main(){
    char inputString[MAX_LENGTH];
    char subString[MAX_LENGTH];

    printf("Введите строку: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = "\0";

    printf("Введите подстроку для поиска: ");
    fgets(subString, sizeof(subString), stdin);
    subString[strcspn(subString, "\n")] = "\0";

    char* results = NULL;

    for(int i = 0; i <= strlen(inputString)-strlen(subString); ++i){
        int j;
        for(j = 0; j < strlen(subString); ++j){
            if(inputString[i+j] != subString[j]){
                break;
            }
        }
        if(j == strlen(subString)){
            results = (char*)&inputString[i];
            break;
        }
    }

    if (results != NULL){
        printf("Подстрока найдена. Указатель на начало подстроки: %p\n", (void*)results);
    }else{
        printf("Подстрока не найдена: \n");
    }

    return 0;
}