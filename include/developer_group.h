//include guard for developer_group.h to prevent multiple inclusion of the header file
#ifndef DEVELOPER_GROUP_H_kdlsjfhgsdg445
#define DEVELOPER_GROUP_H_kdlsjfhgsdg445
//including developer.h to use the developer structure
#include "developer.h"
//defining Maximum number of developers (in this case two) and Maximum logo length at the start to make readability easier 
//and make it easier to change it later. Unsigned Int is used for memory optimization
#define MAX_DEVELOPERS (2U)
#define MAX_LOGO_LENGTH (100U)

//defining the structure developer with the attributes developer and logo
typedef struct{
    developer contributors[MAX_DEVELOPERS];
    char logo[MAX_LOGO_LENGTH];
} developer_group;

//declareing function to initialize a developer group with the given logo and two developers 
void developer_group_init(developer_group *group, const char *logo, developer *dev1, developer *dev2);
//declareing function to print the logo of a developer group
void printLogo(developer_group *group);
//declareing function to list all developers of a developer group
void listDevelopers(developer_group *group);
//declareing function to list all developers of a developer group and print the logo
void printGroup(developer_group *group);
//ending the include guard
#endif
