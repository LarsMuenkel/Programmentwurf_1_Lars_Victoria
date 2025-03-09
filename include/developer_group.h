#ifndef DEVELOPER_GROUP_H_kdlsjfhgsdg445
#define DEVELOPER_GROUP_H_kdlsjfhgsdg445
#include "developer.h"

#define MAX_DEVELOPERS (2U)
#define MAX_LOGO_SIZE (100U)

typedef struct{
    developer contributors[MAX_DEVELOPERS];
    char logo[MAX_LOGO_SIZE];
} developer_group;

#endif
