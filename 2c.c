#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Please, input an integer n: ");
    scanf("%d", &n);
    int a[n];
    int count = 1;
    int b[count];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i ++) {
        int count2 = 0;
        for(int j = 1; j <= a[i]; j ++) {
            if(a[i] % j == 0) {
                count2 ++;
            }
        }
        if(count2 == 2) {
            b[count - 1] = a[i];
            count ++;
        }
    }
    for(int i = 0; i < count - 1; i ++) {
        printf("%d ", b[i]);
    }
    return 0;
}