#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    // int count[10] = {0};
    // int count[m] = {0}; //We can not initialize value to variable-sized array. So this is a error.
    int count[m];
    for (int i = 0; i <= m; i++)
    {
        count[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d\n", &arr[i]);
        count[arr[i]]++;
    }
    // printf("%d", sizeof(m));
    for (int i = 1; i <= m; i++)
    {
        // printf("%d - %d\n", arr[i], count[i]);
        printf("%d\n", count[i]);
    }
    return 0;
}