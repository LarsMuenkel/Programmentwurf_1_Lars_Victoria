#include <stdio.h>

// Function declarations
void listDevelopers();
void printLogo();
void printGroup();
void displayMenu();

int main() {
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

// Function to print a cool group logo
void printLogo() {
    printf("Cooler Group Logo:\n");
    printf("  ____ _                 _       \n");
    printf(" / ___| | ___  _   _  __| | ___  \n");
    printf("| |   | |/ _ \\| | | |/ _` |/ _ \\ \n");
    printf("| |___| | (_) | |_| | (_| |  __/ \n");
    printf(" \\____|_|\\___/ \\__,_|\\__,_|\\___| \n");
    printf("  ____                           \n");
    printf(" / ___| ___ _ __   __ _  ___ ___ \n");
    printf("| |  _ / _ \\ '_ \\ / _` |/ __/ _ \\\n");
    printf("| |_| |  __/ | | | (_| | (_|  __/\n");
    printf(" \\____|\\___|_| |_|\\__,_|\\___\\___|\n");

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