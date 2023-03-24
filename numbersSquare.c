//
//  numbersquare.c
//  Numbers Square
//
//  Created by Özgür Bilgen on 25.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int line,i,j,k;
    printf("Enter number of lines: ");
    scanf("%d",&line);
    for (i=0; i<line; i+=1) {
        for (j=1; j<line+1; j+=1) {
            printf("%d",i+1);
        }
        printf("\n");
    }
    return 0;
}
