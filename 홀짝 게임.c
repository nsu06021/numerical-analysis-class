#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int num, pnum;

void my_choice()
{
	printf("Ȧ��(1) ¦��(2) -> ����: ");
	scanf("%d", &num); 
	if(num!=1&&num!=2)
	{
		printf("\n�ٽ� �����Ͻʽÿ�\n");
		my_choice();
	}
}

void PC_choice()
{
	srand((unsigned)time(NULL));
	pnum=rand()%100+1;
}

void who_win()
{
	if((pnum-num)%2==0)
	    printf("User Win!!!\n");
    else   
	    printf("PC Win!!!\n");
}

main()
{
	printf("Game Start\n");
	printf("**************************\n");
	my_choice();
	printf("\n**************************\n");
	PC_choice();
	if(num==1)
	    printf("���: PC : %d vs User : Ȧ��\n", pnum);
	else
	    printf("���: PC : %d vs User : ¦��\n", pnum);
	who_win();
}












































































