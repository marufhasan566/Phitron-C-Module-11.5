#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000000];
    scanf("%s", c);
    int count[26] = {0};
    for (int i = 0; i < strlen(c); i++)
    {
        int j = c[i] - 97;
        count[j]++;
    }
    for (int i = 0; i < 26; i++)
    {
        char alphabet = i + 97;
        // printf("%c : %d\n", alphabet, count[i]);
        if (count[i] != 0)
        {
            printf("%c : %d\n", alphabet, count[i]);
        }
    }

    return 0;
}