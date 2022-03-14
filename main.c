#include <stdio.h>


int main() {
   

    int num;
    int sum = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) {
        if(i % 3 == 0) 
            sum = sum + i;
        else if(i % 5 == 0)
            sum = sum + i;
    }

    printf("The sum of all multiples of 3 or 5 below %d = %d\n", num, sum);

    return 0;
}