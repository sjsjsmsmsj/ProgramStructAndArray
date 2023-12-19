#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Please, input an integer n: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    int pos = -1;
    for (int i = 0; i < n; i ++) {
        int sum = 0;
        for(int j = 1; j < a[i]; j ++) {
            if(a[i] % j == 0) {
                sum += j;
            }
        }
        if(sum == a[i] && sum > 0) {
            if(pos == -1) {
                pos = i;
            }
            else {
                if(a[i] < a[pos]) {
                    pos = i;
                }
            }
        }
    }
    if(pos > -1) {
        printf("%d\n", pos);
    } 
    else    
        printf("Not found\n");
    return 0;
}