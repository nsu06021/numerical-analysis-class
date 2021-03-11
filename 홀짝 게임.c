#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int num, pnum;

void my_choice()
{
	printf("홀수(1) 짝수(2) -> 선택: ");
	scanf("%d", &num); 
	if(num!=1&&num!=2)
	{
		printf("\n다시 선택하십시오\n");
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
	    printf("결과: PC : %d vs User : 홀수\n", pnum);
	else
	    printf("결과: PC : %d vs User : 짝수\n", pnum);
	who_win();
}












































































