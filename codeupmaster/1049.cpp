#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int temp;
    float tmp;
    temp=a+b+c;
    tmp=temp/3;
    printf("%d\n", temp);
    printf("%.1f", tmp);
}