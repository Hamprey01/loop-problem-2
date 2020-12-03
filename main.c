#include <stdio.h>
#include <stdlib.h>

int main() {

        int num,count,sum = 0;

        printf("The user need to input a number range (e.g 10,150,777) \nThe program must print from 1 to number range but skip all the numbers that are divisible by 3\nAdd all printed numbers and print it.");
        printf("\nenter a number:");
        scanf("%d", &num);
        for(count = 0; count <= num; count++){
                    if(count % 3 == 0){

                        continue;
                    }
            printf("%d ", count);
            sum += count;
        }
        printf("\nsum of all the numbers is %d", sum);

    return 0;
}
