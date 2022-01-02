#include <stdio.h>

int main() {

    int num;
    printf("구구단");
    scanf("d%", num);
    printf("구구단을 외자! %d단!\n", num);

    for(int i=1 ; i<=9 ; i++) {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    return 0;
}
