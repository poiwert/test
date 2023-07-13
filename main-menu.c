#include <stdio.h>

int main(){
//Об’ява змінних
int menu_section, info, buy;
 printf("Choose menu section\n");
 printf("__________________________________\n");
 printf("\t Account(1)\t Buy(2)\n");
 scanf("%d", &menu_section);
 printf("__________________________________\n");
//Аналізування даних і виводення на екран
 switch (menu_section)
 {
 case 1: info=account_info();break;
 case 2: buy=buy_tickets(); break;
 default : printf("Input another key"); break;
 }
 return 0;
}