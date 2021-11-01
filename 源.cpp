#include<stdio.h>//陈杨 
#include<stdlib.h> 
int main() {
	int a;
	float b, c, d;
	printf("	形状的类型\n");
	printf("\n	1.长方形");
	printf("\n	2.圆形");
	printf("\n	3.三角形");
	printf("\n	4.退出");
	printf("	请输入选项(1/2/3/4):");
	scanf("%d", &a);
	switch (a) {
	case 1:printf("\n\n请输入长方形的详细信息:\n");
		printf("高：");
		scanf("%f", &b);
		printf("\n长：");
		scanf("%f", &c);
		d = c * b;
		printf("长方形的面积为：%.2f", d);
		break;
	case 2:printf("\n\n请输入圆形的详细信息:\n");
		printf("半径：");
		scanf("%f", &b);
		d = b * b * 3.14;
		printf("\n圆形的面积为：%.2f", d);
		break;
	case 3:printf("\n\n请输入三角形的详细信息:\n");
		printf("高：");
		scanf("%f", &b);
		printf("\n底边：");
		scanf("%f", &c);
		d = c * b / 2;
		printf("三角形的面积为：%.2f", d);
		break;
	case 4:exit(0);
		break;

	}

	return 0;
}
