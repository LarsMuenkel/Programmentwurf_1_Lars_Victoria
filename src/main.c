#include <stdio.h>
#include <string.h>
#include "/workspaces/Programmentwurf_1_Lars_Victoria/include/developer.h"
#include "/workspaces/Programmentwurf_1_Lars_Victoria/include/developer_group.h"


int main() {
    developer dev1;
    developer dev2;
    char logo_group_D[] = "Cool Group Logo";
    developer_group group_D;

    developer_init(&dev1, "Lars Muenkel", "LLars", 25);
    developer_init(&dev2, "Victoria Vees", "Vicky", 24);
    developer_group_init(&group_D, "Cool Group Logo", &dev1, &dev2);

    int choice;
    void displayMenu();

    while (1) {
        displayMenu();
        printf("Choose your action: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                listDevelopers(&group_D);
                break;
            case 2:
                printLogo(&group_D);
                break;
            case 3:
                printGroup(&group_D);
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


// Function to display the menu
void displayMenu() {
    printf("\nMenu:\n");
    printf("1. List developers\n");
    printf("2. Print a cool group logo\n");
    printf("3. Print group (name of developers and logo)\n");
    printf("4. Exit\n");
}