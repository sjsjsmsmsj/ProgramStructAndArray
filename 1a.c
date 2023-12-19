#include<stdio.h>
int main() {
    int n;
    printf("Please, input an n: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }
    int pos1 = 0, pos2 = 0, pos3 = 0; // use mark location
    for(int i = 0; i < n; i ++) {
        if(a[i] > 0) {
            pos1 = 1; // mark location has an element in array > 0
        }
        if(a[i] < 0) {
            pos2 = 1; // mark location has an element in array < 0
        }
        if(a[i] == 0) {
            pos3 = 1; // mark location has an element in array = 0
        }
    }
    if(pos1 == 1 && pos2 == 1 && pos3 == 1) {
        printf("This is an array have values > 0 or < 0 or = 0\n");
    }
    else    
        printf("This is not an array have values > 0 or < 0 or = 0\n");
    return 0;
}