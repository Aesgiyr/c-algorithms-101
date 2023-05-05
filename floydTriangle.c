//
//  main.c
//  floydTriangle
//
//  Created by Özgür Bilgen on 5.05.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int line,i,j,k;
    k=1;
    
    printf("Welcome to Floyd triangle creator.\n");
    printf("Enter number of lines: ");
    scanf("%d",&line);
    
    for (i = 1 ; i<=line ; i++) {
        
        for (j = line-1 ; j>=line-i ; j--) {
            
            printf("%d  ",k);
            k++;
            
        }
        
        printf("\n");
    }
    
    return 0;
}
