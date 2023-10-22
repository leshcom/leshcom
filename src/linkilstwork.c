
/*
    File: linklistwork.c
    Author: Oleksii Maksymenko
    Created on Date: 22/10/2023
    Description: This program demonstrates the implementation of a doubly linked list for managing book information.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Node {
    int price; // price of the book - ціна книги
    int numOfPages; // number of pages in the book - кількість сторінок у книзі
    char language[100]; // language of the book - мова книги
    char title[256]; // title of the book - назва книги
    float weight; // weight of the book - вага книги
    char dateOfPub[20]; // date of publication of the book - дата публікації книги
    struct Node* next; // pointer to the next Node - вказівник на наступний вузол
    struct Node* prev; // pointer to the previous Node - вказівник на попередній вузол
};

// Function to append a new Node to the end of the list - Функція для додавання нового вузла в кінець списку
void append_to_end(struct Node** head_ref, int new_price, int new_numOfPages, char new_language[], float new_weight, char new_dateOfPub[], char new_title[]) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    strcpy(new_node->dateOfPub, new_dateOfPub); // Copying date of publication - Копіювання дати публікації
    strcpy(new_node->language, new_language); // Copying language of the book - Копіювання мови книги
    strcpy(new_node->title, new_title); // Copying title of the book - Копіювання назви книги

    new_node->numOfPages = new_numOfPages; // Assigning number of pages - Присвоєння кількості сторінок
    new_node->price = new_price; // Assigning price - Присвоєння ціни
    new_node->weight = new_weight; // Assigning weight - Присвоєння ваги
    new_node->next = NULL;
    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}

// Function to print all the Nodes in the list - Функція для виведення всіх вузлів списку
void print_list(struct Node* node) {
    while (node != NULL) {
        printf("\n-------------------------------\nPrice: %d, Number of Pages: %d, Language: %s\nTitle: %s, Weight: %.2f\nDate of Publication: %s\n",
               node->price, node->numOfPages, node->language, node->title, node->weight, node->dateOfPub);
        node = node->next;
    }
}

// Main function - Головна функція
int main() {
    struct Node* head = NULL;
    append_to_end(&head, 952, 223, "English", 700.0, "26.06.1997", "Harry Potter and the Philosopher's Stone");
    append_to_end(&head, 950, 251, "English", 700.0, "02.07.1998", "Harry Potter and the Chamber of Secrets");
    append_to_end(&head, 954, 317, "English", 700.0, "08.07.1999", "Harry Potter and the Prisoner of Azkaban ");
    append_to_end(&head, 945, 636, "English", 700.0, "08.07.2000", "Harry Potter and the Goblet of Fire");
    append_to_end(&head, 900, 766, "English", 700.0, "21.06.2003", "Harry Potter and the Order of the Phoenix");
    append_to_end(&head, 975, 607, "English", 700.0, "16.07.2005", "Harry Potter and the Half-Blood Prince");
    append_to_end(&head, 967, 607, "English", 700.0, "21.07.2007", "Harry Potter and the Deathly Hallows");

    print_list(head);

    return 0;
}
