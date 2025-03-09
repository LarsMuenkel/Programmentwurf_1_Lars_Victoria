#include <stdio.h>
#include "developer_group.h"
#include "developer.h"



int main() {
    developer dev1;
    developer dev2;
    developer_group group_D;

    developer_init(&dev1, "Lars Muenkel", "LLars", 25);
    developer_init(&dev2, "Victoria Vees", "Vicky", 24);
    developer_group_init(&group_D, "Cool Group Logo", &dev1, &dev2);

    int choice;

    while (1) {
        displayMenu();
        printf("Choose your action: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                listDevelopers();
                break;
            case 2:
                printLogo();
                break;
            case 3:
                printGroup();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to list developers
void listDevelopers() {
    printf("Developers:\n");
    printf("1. Lars Muenklel\n");
    printf("2. Victoria Vees\n");
}


// Function to print group information
void printGroup() {
    listDevelopers();
    printLogo();
}

// Function to display the menu
void displayMenu() {
    printf("\nMenu:\n");
    printf("1. List developers\n");
    printf("2. Print a cool group logo\n");
    printf("3. Print group (name of developers and logo)\n");
    printf("4. Exit\n");
}