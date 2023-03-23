//
//  perfectNumber.c
//  Perfect Number
//
//  Created by Özgür Bilgen on 5.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long num=0;
    long long sum=0;
    printf("Enter a number to check perfect: ");
    scanf("%lld",&num);
    for(long long a =0; a<num; a+=1){
        if(num%a==0){
            printf("Divisors: %lld\n",a);
            sum = sum;
            sum = sum+a;
            continue;
        }
    }
    printf("Sum is: %lld\n", sum);
    if(sum==num){
        printf("This is a perfect number\n");
    }
    else{
        printf("This is not a perfect number\n");
    }
    return 0;
}
