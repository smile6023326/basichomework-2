#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

int year,month,day;

printf("請輸入出生年份:");

scanf("%d",&year);

printf("請輸入出生月份:");

scanf("%d",&month);

printf("請輸入出生日期:");

scanf("%d",&day);

printf("你的出生年月日為:%d,%d,%d\n",year,month,day);

system("pause");

	return 0;
}
