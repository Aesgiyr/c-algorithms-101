#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long oldNumber=0, nowNumber = 1, nextNumber;
    printf("%lld\n%lld\n",oldNumber , nowNumber);
    for(int d = 0; d<=90; d++){
        nextNumber = oldNumber+nowNumber;
        printf("%lld\n",nextNumber);
        oldNumber = nowNumber;
        nowNumber = nextNumber;
    }
    return 0;
}
