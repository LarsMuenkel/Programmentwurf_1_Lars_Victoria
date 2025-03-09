#ifndef DEVELOPER_H_kdlsjfhgsdg445
#define DEVELOPER_H_kdlsjfhgsdg445

#define NAME_LENGTH (25U)
#define ALIAS_LENGTH (25U)

typedef struct {
    char name[NAME_LENGTH];
    char alias[ALIAS_LENGTH];
    int age;
} developer;

void developer_init(developer *dev, const char *name, const char *alias, int age);

#endif

