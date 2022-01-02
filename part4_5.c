#include <stdio.h>

int main(){
     short short_neg=-32768;
     short short_pos=32768;

     printf("short_neg: %d\n", short_neg);
     printf("short_pos: %d\n", short_pos);

     unsigned short uns_short_neg=1;
     unsigned short uns_short_pos=64000;

     printf("short_neg: %u\n", uns_short_neg);
     printf("short_pos: %u\n", uns_short_pos);
return 0;
}
