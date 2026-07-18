//Question 3: Find the Element Occurring Odd Number of Times (O(n))
#include <stdio.h>

int main()
{
    int arr[] = {2, 2, 4, 4, 6, 6, 8, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = 0;

    for (int i = 0; i < n; i++)
    {
        result ^= arr[i];
    }

    printf("The element occurring odd number of times is %d\n", result);

    return 0;
}