//
//  pyramidStar2.c
//  Pyramid Star 2
//
//  Created by Özgür Bilgen on 25.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,j,k,line;
    
    printf("Enter number of lines: ");
    scanf("%d",&line);
    
    for (i = 1; i<line+1; i++) {
        
        for (j=i; j<line; j++) {
            
            printf(" ");
            
        }
        for (k=0; k<2*i-1; k++) {
            
            printf("*");
            
        }
        printf("\n");
        
    }
    return 0;
}
