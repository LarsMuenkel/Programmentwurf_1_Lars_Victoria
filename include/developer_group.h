#ifndef DEVELOPER_GROUP_H_kdlsjfhgsdg445
#define DEVELOPER_GROUP_H_kdlsjfhgsdg445
#include "developer.h"

#define MAX_DEVELOPERS (2U)

typedef struct{
    developer contributors[MAX_DEVELOPERS];
    char logo[17][74];
} developer_group;

void developer_group_init(developer_group *group, const char *logo, developer *dev1, developer *dev2);
void printLogo(developer_group *group);
void listDevelopers(developer_group *group);
void printGroup(developer_group *group);

#endif
