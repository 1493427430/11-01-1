#include<stdio.h>//���� 
#include<stdlib.h> 
int main() {
	int a;
	float b, c, d;
	printf("	��״������\n");
	printf("\n	1.������");
	printf("\n	2.Բ��");
	printf("\n	3.������");
	printf("\n	4.�˳�");
	printf("	������ѡ��(1/2/3/4):");
	scanf("%d", &a);
	switch (a) {
	case 1:printf("\n\n�����볤���ε���ϸ��Ϣ:\n");
		printf("�ߣ�");
		scanf("%f", &b);
		printf("\n����");
		scanf("%f", &c);
		d = c * b;
		printf("�����ε����Ϊ��%.2f", d);
		break;
	case 2:printf("\n\n������Բ�ε���ϸ��Ϣ:\n");
		printf("�뾶��");
		scanf("%f", &b);
		d = b * b * 3.14;
		printf("\nԲ�ε����Ϊ��%.2f", d);
		break;
	case 3:printf("\n\n�����������ε���ϸ��Ϣ:\n");
		printf("�ߣ�");
		scanf("%f", &b);
		printf("\n�ױߣ�");
		scanf("%f", &c);
		d = c * b / 2;
		printf("�����ε����Ϊ��%.2f", d);
		break;
	case 4:exit(0);
		break;

	}

	return 0;
}
