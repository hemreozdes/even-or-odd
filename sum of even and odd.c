#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num,sume=0,sumo=0,i=0,choice;
    printf("Enter a num:"); scanf("%d",&num);
    for(i;i<=num;i++){
    	if(i%2==0){
    		sume=sume+i;
		}
		else{
			sumo=sumo+i;
		}
	}
	printf("Which one do you want to see?(1-even or 2-odd)");scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Sum of even numbers=%d",sume);
			break;
		case 2:
			printf("Sum of odd numbers=%d",sumo);
			break;
	}
    return 0;
}
