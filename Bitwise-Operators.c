#include <stdio.h>

int max_of_bitwise(int n, int k)
{
    int max_of_and = 0, max_of_or = 0, max_of_xor = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((i&j) < k && (i&j) > max_of_and)
            {
                max_of_and = (i&j);
            }
            if ((i|j) < k && (i|j) > max_of_or)
            {
                max_of_or = (i|j);
            }
            if ((i^j) < k && (i^j) > max_of_xor)
            {
                max_of_xor = (i^j);
            }
        }
    }
    printf("%d\n%d\n%d\n",max_of_and,max_of_or,max_of_xor);
    return 0;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    max_of_bitwise(n, k);
    return 0;
}