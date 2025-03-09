#include "developer_group.h"

#include <stdio.h>
#include <string.h>

#include "developer.h"

void developer_group_init(developer_group *group, const char *logo, developer *dev1, developer *dev2)
{
    if (group == NULL || logo == NULL || dev1 == NULL || dev2 == NULL) {
        printf(stderr, "Error: Null pointer passed to developer_group_init\n");
        return;
    }
    group->contributors[0] = *dev1;
    group->contributors[1] = *dev2;

    if (MAX_DEVELOPERS > 2)
    {
        for (unsigned int i = 2; i < MAX_DEVELOPERS; ++i)
        {
            developer_init(&group->contributors[i], "", "", 0);
        }
    }
    strcpy(group->logo, logo);
}

void printLogo(developer_group *group)
{
    if (group == NULL) {
        fprintf(stderr, "Error: Null pointer passed to printLogo\n");
        return;
    }
    printf("Logo: \n%s\n", group->logo);
}

void listDevelopers(developer_group *group)
{
    if (group == NULL) {
        fprintf(stderr, "Error: Null pointer passed to listDevelopers\n");
        return;
    }
    printf("Developers:\n");
    printf("Developer 1: %s alias %s\n", group->contributors[0].name, group->contributors[0].alias);
    printf("Developer 2: %s alias %s\n\n", group->contributors[1].name, group->contributors[1].alias);
}

void printGroup(developer_group *group)
{
    if (group == NULL) {
        fprintf(stderr, "Error: Null pointer passed to printGroup\n");
        return;
    }
    listDevelopers(group);
    printLogo(group);
}