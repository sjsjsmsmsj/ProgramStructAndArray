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
    int pos1 = 0, pos2 = 0, pos3 = 0, pos4 = 0;
    for(int i = 1; i < n; i += 2) {
        if(a[i] % 2 == 0) {
            pos1 = 1;
        }
        else {
            pos1 = 0;
            break;
        }
    }
    for(int i = 0; i < n; i += 2) {
        if(a[i] % 2 != 0) {
            pos2 = 1;
        }
        else {
            pos2 = 0;
            break;
        }
    }
    for(int i = 1; i < n; i += 2) {
        if(a[i] % 2 != 0) {
            pos3 = 1;
        }
        else {
            pos3 = 0;
            break;
        }
    }
      for(int i = 0; i < n; i += 2) {
        if(a[i] % 2 == 0) {
            pos4 = 1;
        }
        else {
            pos4 = 0;
            break;
        }
    }
    if((pos1 == 1 && pos2 == 1) || (pos3 == 1 && pos4 == 1)) {
        printf("This is an array alternating arrangements even odd numbers\n");
    }
    else    
        printf("Not alternating arragements even odd numbers\n ");
    return 0;
}