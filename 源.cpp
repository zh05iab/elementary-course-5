#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()
{
	//switchҲ��һ��ѡ��ṹ��䣬�������Ϊif else�еĶ��֦�ṹ������if else�еĶ��֦�ṹ���ӣ�ʹ��switch���Ӽ��
	//��ʵ�ʹ����У�Ҳ��switch�õıȽ϶࣬���ѧϰ�˽ṹ�Ǳ�Ҫ��
	/*switch (���ʽ) {
    case ������ֵ1: ��� 1;
	case ������ֵ2: ��� 2;
		......
	case ������ֵn: ��� n;
	default: ��� n + 1;
	}*/
	//����ִ���߼����ȼ�����ʽ��Ȼ���Ⱥ�˳�����case�е���ֵ����һ�£���ִ����Ӧ���
	int a = 1;
	scanf_s("%d",&a);
	switch (a)
	{
	case 1:printf("��һ\n"); break;//break�����ú��潲��
	case 2:printf("�ܶ�\n"); break;
	case 3:printf("����\n"); break;
	case 4:printf("����\n"); break;
	case 5:printf("����\n"); break;
	case 6:printf("����\n"); break;
	case 7:printf("����\n"); break;
	default:printf("?\n"); break;
	}
	switch (a)//break��������������һ�����ϱ��ʽ��������break���ͻ�ִ�и��������������䣬����default
	{
	case 1:printf("��һ\n"); 
	case 2:printf("�ܶ�\n"); 
	case 3:printf("����\n"); 
	case 4:printf("����\n"); 
	case 5:printf("����\n"); 
	case 6:printf("����\n"); 
	case 7:printf("����\n");
	default:printf("?\n"); break;
	}
	switch (a)//defaultִ�е��ǲ���������case�е�����������Ӳ���break�����ԣ���������
	{
	case 1:printf("��һ\n"); 
	case 2:printf("�ܶ�\n");
	case 3:printf("����\n");
	case 4:printf("����\n");
	case 5:printf("����\n");
	case 6:printf("����\n");
	case 7:printf("����\n");
	default:printf("?\n");
	}
	return 0;
}