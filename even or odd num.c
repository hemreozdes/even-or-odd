#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a num:"); scanf("%d",&num);
    if(num%2==0){
        printf("%d is even number",num);
    }
    else{
        printf("%d is odd number",num);
    }
    return 0;
}
