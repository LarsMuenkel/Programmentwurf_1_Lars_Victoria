#include <stdio.h>
#include <string.h>
#include "/workspaces/Programmentwurf_1_Lars_Victoria/include/developer.h"
#include "/workspaces/Programmentwurf_1_Lars_Victoria/include/developer_group.h"


void developer_group_init(developer_group *group, const char *logo, developer *dev1, developer *dev2) {     
    group->contributors[0] = *dev1;
    group->contributors[1] = *dev2;
    
    if (MAX_DEVELOPERS > 2) {
    // Initialisiere die restlichen Entwickler mit leeren Werten falls MAX_DEVELOPERS > 2
    for (int i = 2; i < MAX_DEVELOPERS; ++i) {
        developer_init(&group->contributors[i], "", "", 0); 
    }
    }
}

void printLogo(developer_group *group){
    printf("%s\n", group->logo);
}

void listDevelopers(developer_group *group) {
    printf("Developers:\n");
    printf("Developer 1: %s alias %s\n", group->contributors[0].name, group->contributors[0].alias); 
    printf("Developer 2: %s alias %s\n", group->contributors[1].name, group->contributors[1].alias); 
}

void printGroup(developer_group *group) {
    listDevelopers(group);
    printLogo(group);
}
    