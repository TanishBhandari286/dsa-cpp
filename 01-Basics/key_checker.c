#include <stdio.h>
#include <string.h>

#define SECRET_KEY "4F7A-9B3C-2D1E-8H6G"

int is_valid_key(const char *key) { return strcmp(key, SECRET_KEY) == 0; }

int main()
{
    char key[25];

    printf("Enter your license key: ");
    scanf("%24s", key);

    if (is_valid_key(key))
    {
        printf("Valid Key! Access Granted.\n");
    }
    else
    {
        printf("Invalid Key! Access Denied.\n");
    }

    return 0;
}
