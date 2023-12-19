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
        int pos = 0;
        for(int j = 1; j <= a[i]; j ++) {
            if(a[i] % j == 0)
                count ++;
        } 
        if(count == 2) {
            n --;
            pos = i;
            for(int k = pos; k < n; k ++) {
                a[k] = a[k + 1];
            }
            i --;
        }
    }
    for(int i = 0; i < n; i ++) {
        printf("%d ", a[i]);
    }
    return 0;
}