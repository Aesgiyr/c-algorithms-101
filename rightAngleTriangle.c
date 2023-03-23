//
//  rightAngleTriangle.c
//  Right Angle Triangle
//
//  Created by Özgür Bilgen on 11.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int line;
    printf("Enter number of lines: ");
    scanf("%d",&line);
    for (int i=1; i<=line; i++) { //satır sayısı yazıldı
        for (int j = 0; j<=line-i ; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=1; i<=line; i++) { //satır sayısı yazıldı
        for (int j = line-1; j>=line-i ; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
