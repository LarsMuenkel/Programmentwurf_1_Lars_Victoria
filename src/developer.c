#include "developer.h"
#include <string.h>

void developer_init(developer *dev, const char *name, const char *alias, int age) {
    strncpy(dev->name, name, NAME_LENGTH - 1);
    dev->name[NAME_LENGTH - 1] = '\0'; // Sicherstellen, dass der String nullterminiert ist

    strncpy(dev->alias, alias, ALIAS_LENGTH - 1);
    dev->alias[ALIAS_LENGTH - 1] = '\0'; // Sicherstellen, dass der String nullterminiert ist

    dev->age = age;
}