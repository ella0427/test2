#include <stdio.h>

int main() {

   int s;
   printf("1.콜라 500원\n2. 사이다 400원\n3. 환타 600원\n");
   scanf("d%", &s);

   int co = 0;
   switch(s) {
   case 1:
    co=500;
    break;
   case 2:
    co=400;
    break;
   case 3:
    co=600;
    break;
    default:
    printf("선택한 음료 없음\n");
    break;
   }
   if (co > 0) {
      printf("내야 할 돈은 d%입니다\n", co);
   }


return 0;
}
