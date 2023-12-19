#include<stdio.h>
int main() {
    int n;
    printf("Please, input an n: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    int pos1 = 0;
    for(int i = 0; i < n - 1; i ++) {
        for(int j = i + 1; j < n; j ++) {
            if(a[j] > a[i]) {
                pos1 = 1;
            }
            else
            {
                pos1 = 0;
                break;
            }
        }
        if(pos1 == 0) 
            break;
    }
    int pos2 = 0;
    for(int i = 0; i < n - 1; i ++) {
        for(int j = i + 1; j < n; j ++) {
            if(a[j] < a[i]) {
                pos2 = 1;
            }
            else {
                pos2 = 0;
                break;
            }
        }
        pos2 = 0;
        break;
    }
    if(pos1 == 1 || pos2 == 1) {
        printf("This is an array has arranged in order\n");
    }
    else    
        printf("Not arrange in order\n");
    return 0;
}