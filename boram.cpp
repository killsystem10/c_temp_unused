#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    int temp[a];
    for(int i=0;i<a;i++) {
        scanf("%d", temp[i]);
    }

    for(int i=a-1;i>=0;i--) {
        printf("%d ",temp[i]);
    }
}