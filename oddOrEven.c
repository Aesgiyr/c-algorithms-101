//
//  oddOrEven.c
//  Odd or Even
//
//  Created by Özgür Bilgen on 11.03.2023.
//

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check odd or even: ");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("This is a even number\n");
    }
    else
    {
        printf("This is a odd number\n");
    }
    return 0;
}
