#include <stdio.h>

int main() {

   int s;
   printf("1.�ݶ� 500��\n2. ���̴� 400��\n3. ȯŸ 600��\n");
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
    printf("������ ���� ����\n");
    break;
   }
   if (co > 0) {
      printf("���� �� ���� d%�Դϴ�\n", co);
   }


return 0;
}
