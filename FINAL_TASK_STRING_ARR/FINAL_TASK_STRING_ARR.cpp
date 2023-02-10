#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Задание №1\n\n");
    printf("Создать одномерный массив символов, вписать с клавиатуры данные, затем прописать код так, чтобы программа удаляла первую букву.\n\n");

    printf("Введите строку:\n");
    char str[100];
    gets_s(str);
    printf("\n");
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i + 1];
    }
    printf("-> ");
    puts(str);

    printf("Задание №2\n\n");
    printf("Создать зеркальное отображение строки с использованием второй (буферной) строки.\n\n");

    printf("Введите строку:\n");
    char str1[100];
    gets_s(str1);
    char newStr[100];
    newStr[strlen(str1)] = 0;
    for (int i = strlen(str1); i > 0; i--)
    {
        newStr[strlen(str1)-i] = str1[i-1];
    }
    printf("-> ");
    puts(newStr);
}
