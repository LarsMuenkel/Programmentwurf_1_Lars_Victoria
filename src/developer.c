#include "developer.h"

#include <stdio.h>
#include <string.h>

// creating a new developer with name_ptr, alias and age
void developer_init(developer* dev_ptr, const char* const name_ptr, const char* const alias_ptr)
{
    // checking if the pointers are not null (valid)
    if (dev_ptr == NULL || name_ptr == NULL || alias_ptr == NULL)
    {
        fprintf(stderr, "Error: Null pointer passed to developer_init\n");
        return;
    }

    // copying the string, name_ptr points to, to the developer
    strncpy(dev_ptr->name, name_ptr, MAX_NAME_LENGTH - 1);
    dev_ptr->name[MAX_NAME_LENGTH - 1] = '\0';

    // copying the string, alias_ptr points to, to the developer
    strncpy(dev_ptr->alias, alias_ptr, MAX_ALIAS_LENGTH - 1);
    dev_ptr->alias[MAX_ALIAS_LENGTH - 1] = '\0';
}