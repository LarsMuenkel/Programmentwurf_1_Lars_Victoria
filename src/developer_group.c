#include <stdio.h>
#include <string.h>
#include "developer.h"
#include "developer_group.h"

void developer_group_init(developer_group *group, const char *logo, developer *dev1, developer *dev2) {
    group->contributors[0] = *dev1;
    group->contributors[1] = *dev2;
    
    if (MAX_DEVELOPERS > 2) {
    // Initialisiere die restlichen Entwickler mit leeren Werten falls MAX_DEVELOPERS > 2
    for (int i = 2; i < MAX_DEVELOPERS; ++i) {
        developer_init(&group->contributors[i], "", "", 0); 
    }
    }


void printLogo(developer_group *group) {
    printf("%s\n", group->logo);
}
    