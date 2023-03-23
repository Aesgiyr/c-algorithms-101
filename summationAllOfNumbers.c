//
//  summationAllOfNumbers.c
//  Summation all of numbers
//
//  Created by Özgür Bilgen on 12.03.2023.
//

#include <stdio.h>

int summation(int num){
    int sum=0;
    if(num==0){
        return 0;
    }else{
        sum=num+summation(num-1);
        return sum;
    }
}

int main(int argc, const char * argv[]) {
    int a;
    printf("Insert a number: ");
    scanf("%d", &a);
    printf("%d\n",summation(a));
    return 0;
}
