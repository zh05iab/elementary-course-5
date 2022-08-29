#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{
	//switch也是一种选择结构语句，可以理解为if else中的多分枝结构，由于if else中的多分枝结构复杂，使用switch更加简便
	//在实际工作中，也是switch用的比较多，因此学习此结构是必要的
	/*switch (表达式) {
    case 整型数值1: 语句 1;
	case 整型数值2: 语句 2;
		......
	case 整型数值n: 语句 n;
	default: 语句 n + 1;
	}*/
	//它的执行逻辑是先计算表达式，然后按先后顺序对照case中的数值，若一致，则执行相应语句
	int a = 1;
	scanf_s("%d",&a);
	switch (a)
	{
	case 1:printf("周一\n"); break;//break的作用后面讲到
	case 2:printf("周二\n"); break;
	case 3:printf("周三\n"); break;
	case 4:printf("周四\n"); break;
	case 5:printf("周五\n"); break;
	case 6:printf("周六\n"); break;
	case 7:printf("周日\n"); break;
	default:printf("?\n"); break;
	}
	switch (a)//break的作用是跳出，一旦符合表达式，若不加break，就会执行该语句后面的所有语句，包括default
	{
	case 1:printf("周一\n"); 
	case 2:printf("周二\n"); 
	case 3:printf("周三\n"); 
	case 4:printf("周四\n"); 
	case 5:printf("周五\n"); 
	case 6:printf("周六\n"); 
	case 7:printf("周日\n");
	default:printf("?\n"); break;
	}
	switch (a)//default执行的是不包含上述case中的所有情况，加不加break都可以，都会跳出
	{
	case 1:printf("周一\n"); 
	case 2:printf("周二\n");
	case 3:printf("周三\n");
	case 4:printf("周四\n");
	case 5:printf("周五\n");
	case 6:printf("周六\n");
	case 7:printf("周日\n");
	default:printf("?\n");
	}
	return 0;
}