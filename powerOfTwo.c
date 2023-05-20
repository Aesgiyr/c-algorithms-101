//
//  main.c
//  powerOfTwo.c
//
//  Created by Özgür Bilgen on 20.05.2023.
//

#include <stdio.h>
#include "math.h"

int number;

int checkPow(x){
    for (int power = 1;power<1000000 ; ++power) {
        if (x==pow(2,power)){
            printf("%d is 2 to the %dth power. \n",x,power);
            return 1;
        }
        else if (x==1){
            printf("%d is 2 to the 0th power. \n",x,power);
            return 1;
        }
    }
    return 0;
}


int main(int argc, const char * argv[]) {
    while (1) {
        printf("Enter the number for check: ");
        scanf("%d",&number);
        if(checkPow(number)==0){
            printf("%d is not pow of 2. \n",number);
        }
    }
    return 0;
    
}
