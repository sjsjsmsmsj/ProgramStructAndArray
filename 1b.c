#include <stdio.h>
int main() {
    int n;
    printf("Please, input an n: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i ++) {
        int count = 0;
        for(int j = 1; j <= a[i]; j ++) {
            if(a[i] % j == 0)
                count ++;
        }
        if(count == 2)
            printf("%d ", i);
    }
    return 0;
}