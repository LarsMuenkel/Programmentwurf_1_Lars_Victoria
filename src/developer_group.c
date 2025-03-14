#include "developer_group.h"
#include "developer.h"

#include <stdio.h>
#include <string.h>


// initializing a developer group with the given logo and two developers
void developer_group_init(developer_group *group_ptr, const char * const logo_ptr, developer *dev1_ptr, developer *dev2_ptr)
{
    // checking if the pointers are not null (valid)
    if (group_ptr == NULL || logo_ptr == NULL || dev1_ptr == NULL || dev2_ptr == NULL) {
        printf(stderr, "Error: Null pointer passed to developer_group_init\n");
        return;
    }
    // setting the first to contributors to developer 1 and 2
    group_ptr->contributors[0] = *dev1_ptr;
    group_ptr->contributors[1] = *dev2_ptr;

    // in case there are more than two contributors, the rest will be initialized with empty strings
    if (MAX_DEVELOPERS > 2)
    {
        for (unsigned int i = 2; i < MAX_DEVELOPERS; ++i)
        {
            developer_init(&group_ptr->contributors[i], "", "");
        }
    }
    // copying the string, logo_ptr points to, to the developer group
    strcpy(group_ptr->logo, logo_ptr);
}


// printing the logo of a developer group
void printLogo(developer_group *group_ptr)
{
    // checking if the pointer is not null (valid)
    if (group_ptr == NULL) {
        fprintf(stderr, "Error: Null pointer passed to printLogo\n");
        return;
    }
    // printing the logo of the developer group
    printf("Logo: \n%s\n", group_ptr->logo);
}
// listing all developers of a developer group
void listDevelopers(developer_group *group_ptr)
{
    // checking if the pointer is not null (valid)
    if (group_ptr == NULL) {
        fprintf(stderr, "Error: Null pointer passed to listDevelopers\n");
        return;
    }
    // printing the developers of the group with name and alias
    printf("Developers:\n");
    printf("Developer 1: %s alias %s\n", group_ptr->contributors[0].name, group_ptr->contributors[0].alias);
    printf("Developer 2: %s alias %s\n\n", group_ptr->contributors[1].name, group_ptr->contributors[1].alias);
}
// printing the list of developers and the logo of a developer group
void printGroup(developer_group *group_ptr)
{
    // checking if the pointer is not null (valid)
    if (group_ptr == NULL) {
        fprintf(stderr, "Error: Null pointer passed to printGroup\n");
        return;
    }
    // calling the functions to list the developers and print the logo
    listDevelopers(group_ptr);
    printLogo(group_ptr);
}