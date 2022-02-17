
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    for(int a0 = 0; a0 < q; a0++){
        long x; 
        scanf("%ld",&x);
        long result = 0;
        for (long mask = 1; x > 0; x >>= 1, mask <<= 1) {
           if (!(x & 1)) {
              result += mask; 
           }
        }
        printf("%ld\n", result);
    }
    return 0;
}
