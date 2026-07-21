#include <stdio.h>

int main() {
    int n, a[100][100], key;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &key);

    int i = 0, j = n - 1;

    while (i < n && j >= 0) {
        if (a[i][j] == key) {
            printf("Present");
            return 0;
        }
        if (a[i][j] > key)
            j--;
        else
            i++;
    }

    printf("Not Present");
    return 0;
}