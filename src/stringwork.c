/*
    File: stringwork.c
    Author: Oleksii Maksymenko
    Created on Date: 22/10/2023
    This program demonstrates a function that deletes every odd character from a string. 
*/

#include <stdio.h>

// Function that deletes every odd character from a string
// Функція, яка видаляє кожен другий символ з рядка
char* del_each_odd(char* str_ptr) {
    int myLength = 0;
    int secPtr = 1;
    int i = 0;

    while (*str_ptr != '\0') {
        str_ptr++;
        myLength++;
    }

    str_ptr = str_ptr - myLength;

    for (i = 0; i < myLength / 2 + 1; i++) {
        *(str_ptr + i) = *(str_ptr + secPtr);
        secPtr = secPtr + 2;
    }

    *(str_ptr + i) = '\0';

    return str_ptr;
}

int main() {
    char myWord[256];
    int myMenu = 0;

    // Entering the initial word
    // Введення початкового слова
    printf("\nEnter your word up to 256 letters: ");
    fflush(stdin);
    fgets(myWord, sizeof myWord, stdin);

    // Infinite loop for choosing a function from the menu
    // Безкінечний цикл для вибору функції з меню
    while (1) {
        printf("1 is for Operation\n0 is for changing word\n-----------------------------------\nPick your function: ");
        scanf("%d", &myMenu);

        if (myMenu == 1) {
            // Displaying the result of the function
            // Відображення результату функції
            printf("Result is %s\n", del_each_second(myWord));
        } else if (myMenu == 0) {
            // Changing the word
            // Зміна слова
            printf("\nEnter your word up to 256 letters: ");
            fflush(stdin);
            fgets(myWord, sizeof myWord, stdin);
        } else {
            printf("\nTry again.");
        }
    }

    return -1;
}
