// include developer_group.h including developer.h stdio.h and string.h
#include "developer_group.h"

// main function
int main() {
    // creating two group members of type developer named dev1 and dev2
    developer dev1;
    developer dev2;
    // creating a group of developers of type developer_group named group_D
    developer_group group_D;

    // initializing the developers dev1 and dev2 as well as the developer group group_D
    developer_init(&dev1, "Lars Muenkel", "LLars", 25);
    developer_init(&dev2, "Victoria Vees", "Vicky", 24);
    developer_group_init(&group_D, "ʕ•́ᴥ•̀ʔっ♡", &dev1, &dev2);

    // declaring the function displayMenu and the variable choice as unsigned char for memory optimization
    void displayMenu();
    unsigned char choice;

    // while loop which will run indefinitely until the user chooses to exit
    while (1) {
        // displaying the menu and reading the user's choice
        displayMenu();
        scanf("%hhu", &choice);
        printf("\n");

        // switch case to handle the user's choice
        switch (choice) {
            //if user chose 1, listDevelopers function will be called with the group_D as argument to list the developers
            case 1:
                listDevelopers(&group_D);
                break;
            //if user chose 2, printLogo function will be called with the group_D as argument to print the group logo
            case 2:
                printLogo(&group_D);
                break;
            //if user chose 3, printGroup function will be called with the group_D as argument to print the list the developers and print the group logo
            case 3:
                printGroup(&group_D);
                break;
            //if user chose 4, the program will terminate
            case 4:
                printf("Exiting...\n");
                return 0;
            //if user user intput is invalid (not 1, 2, 3 or 4), the program will print an error message and the user will be prompted to try again
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


//Function to display the menu
void displayMenu() {
    printf("\nMenu:\n");
    printf("1. List developers\n");
    printf("2. Print group logo\n");
    printf("3. Print group\n");
    printf("4. Exit\n");
    printf("Choose your action: ");
}
