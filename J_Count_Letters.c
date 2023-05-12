#include <stdio.h>
int main()
{
    char c;
    int count[26] = {0};
    int i = 0;
    while (scanf("%c", &c) != EOF)
    {
        // printf("%c\n", c);
        int intValue = c - 'a';
        if (c != '\0')
        {
            // printf("%d\n", intValue);
            count[intValue]++;
        }
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