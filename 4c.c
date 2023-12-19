#include<stdio.h>
#include<math.h>
int CompleteNumber(int n) {
    int sum = 0;
    for(int i = 1; i < n; i ++) {
        if(n % i == 0) 
            sum += i;
    }
    return sum;
}
int main() {
    int n;
    printf("Please, input an integer n: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i ++) {
        int max;
        if(CompleteNumber(a[i])) {
            max = i;
            for(int j = i + 1; j < n; j ++) {
                if(CompleteNumber(a[j]) > CompleteNumber(a[i])) {
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
        }
    }
    for(int i = 0; i < n; i ++) {
        printf("%d ", a[i]);
    }
    return 0;
}
