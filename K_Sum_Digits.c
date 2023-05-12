#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // printf("%d\n", arr[i]);
        sum = sum + (arr[i] - '0');
    }
    printf("%d", sum);

    return 0;
}