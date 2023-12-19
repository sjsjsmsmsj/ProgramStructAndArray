#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Please, input an integer for n: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    int flag = -1; // place flag, suppose first array is position min
    for(int i = 0; i < n; i ++) {
        int count = 0; 
        for(int j = 1; j <= a[i]; j ++) {
            if(a[i] % j == 0)
                count ++;
        }
        if(count == 2) {
            if(flag == -1) {
                flag = i;
            }
            else {
                if(a[i] < a[flag]) {
                    flag = i;
                }
            }
        }
    }
    if(flag > -1)
        printf("This is Prime postion has value min array : %d\n", flag);
    else
        printf("Not Prime in array!\n");
    return 0;
}