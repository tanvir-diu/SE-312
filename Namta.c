#include<stdio.h>

int main()
{
    float number,sum;
    printf("Enter the value: ");
    scanf("%d", number);

    for(int i=1;i=10;i++){
        sum = number + i;
        printf("%d + %d = %d\n",number,i,sum);
    }
}
