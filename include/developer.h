//include guard for developer.h to prevent multiple inclusion of the header file
#ifndef DEVELOPER_H_kdlsjfhgsdg445
#define DEVELOPER_H_kdlsjfhgsdg445
// defining Maximum length of the name and alias of a developer at the start to make readability easier and make it easier to change the length later
#define MAX_NAME_LENGTH (25U)
#define MAX_ALIAS_LENGTH (25U)
//defining the structure developer with the attributes name, alias and age
typedef struct {
    char name[MAX_NAME_LENGTH];
    char alias[MAX_ALIAS_LENGTH];
    int age;
} developer;

//function to initialize a developer with the given name, alias and age
void developer_init(developer *dev, const char *name, const char *alias, int age);
//ending the include guard
#endif

