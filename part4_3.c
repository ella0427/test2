#include <stdio.h>

int main() {

    int num;
    printf("������");
    scanf("d%", num);
    printf("�������� ����! %d��!\n", num);

    for(int i=1 ; i<=9 ; i++) {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    return 0;
}