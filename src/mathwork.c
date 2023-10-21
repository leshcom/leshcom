
/*
    File: mathwork.c
    Author: Oleksii Maksymenko
    Created on Date: 22/10/2023
    Description: This program calculates the values of Z1 and Z2 based on the input parameter x. 
    It provides an interface for the user to choose between the two calculations or update the value of x.
*/

#include <stdio.h>
#include <math.h>

// Функція для обчислення значення Z1 залежно від вхідного параметра x
// Function to calculate the value of Z1 based on the input parameter x
float calc_z1(float x) {
    float res = x;

    // Перевірка умови для обчислення Z1
    // Checking the condition for calculating Z1
    if (x > 3) {
        res = (x * x + (2 * x) - 3 + (x - 1) * sqrt(x * x - 9)) / (x * x - (2 * x) - 3 + (x - 1) * sqrt(x * x - 9));
    } else {
        printf("Invalid value. Update your x and change it!\n");
    }

    return res;
}

// Функція для обчислення значення Z2 залежно від вхідного параметра x
// Function to calculate the value of Z2 based on the input parameter x
float calc_z2(float x) {
    float res = x;

    // Перевірка умови для обчислення Z2
    // Checking the condition for calculating Z2
    if (x > 3 || x <= -3) {
        res = sqrt((x + 3) / (x - 3));
    } else {
        printf("Invalid value. Update your x and change it!\n");
    }

    return res;
}

int main() {
    float myX = 0;
    int myMenu = 0;

    // Введення значення x
    // Entering the value of x
    printf("Enter your x: ");
    scanf("%f", &myX);

    // Нескінченний цикл для вибору функції із меню
    // Infinite loop for selecting a function from the menu
    while (1) {
        printf("1 is for Z1\n2 is for Z2\n0 is for changing x\n-----------------------------------\nPick your function: ");
        scanf("%d", &myMenu);
        if (myMenu == 1) {
            // Виведення результату для Z1
            // Displaying the result for Z1
            printf("Result is %.3f\n", calc_z1(myX));
        } else if (myMenu == 2) {
            // Виведення результату для Z2
            // Displaying the result for Z2
            printf("Result is %.3f\n", calc_z2(myX));
        } else if (myMenu == 0) {
            // Зміна значення x
            // Changing the value of x
            printf("Enter your x: ");
            scanf("%f", &myX);
        } else {
            // Виведення повідомлення у разі невірного вибору
            // Displaying a message in case of an incorrect choice
            printf("\nTry again.");
        }
    }

    return -1;
}