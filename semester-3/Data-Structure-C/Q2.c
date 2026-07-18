// /Question 2: Minimum Distance Between Two Numbers
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[1000];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int a, b;
        scanf("%d %d", &a, &b);

        int min_dist = 1000000;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (((a == arr[i] && b == arr[j]) ||
                     (b == arr[i] && a == arr[j])) &&
                     min_dist > (j - i))
                {
                    min_dist = j - i;
                }
            }
        }

        if (min_dist == 1000000)
            printf("-1\n");
        else
            printf("%d\n", min_dist);
    }

    return 0;
}