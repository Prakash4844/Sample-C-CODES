#include<stdio.h>
#include<conio.h>
int main()
{
	char team1[35],team2[35];
	int run_p1t1,run_p2t1, run_p3t1, run_p4t1;
	int run_p1t2,run_p2t2,run_p3t2,run_p4t2;
	int totscore_team1,totscore_team2;

	printf("\nEnter the Team Name 1: ");
	scanf("%s",&team1);
	fflush(stdin);

	printf("\nEnter the Team Name 2: ");
	scanf("%s",&team2);
	fflush(stdin);

	printf("\nEnter the Run scored by Shane Watson from team %s ",team1);
	scanf("%d",&run_p1t1);
	fflush(stdin);

	printf("\nEnter the Run scored by Dwayne Bravo from team %s ",team1);
	scanf("%d",&run_p2t1);
	fflush(stdin);

	printf("\nEnter the Run scored by MS Dhoni from team %s ",team1);
	scanf("%d",&run_p3t1);
	fflush(stdin);

	printf("\nEnter the Run scored by Suresh Raina from team %s ",team1);
	scanf("%d",&run_p4t1);
	fflush(stdin);

	totscore_team1=run_p1t1+run_p2t1+run_p3t1+run_p4t1;

//team 2

	printf("\nEnter the Run scored by Hardik Pandaya from team %s ",team2);
	scanf("%d",&run_p2t1);
	fflush(stdin);

	printf("\nEnter the Run scored by Yuvraj Singh from team %s ",team2);
	scanf("%d",&run_p2t2);
	fflush(stdin);

	printf("\nEnter the Run scored by Kiren Pollard from team %s ",team2);
	scanf("%d",&run_p3t2);
	fflush(stdin);

	printf("\nEnter the Run scored by AB De villiers from team %s ",team2);
	scanf("%d",&run_p4t2);

	totscore_team2=run_p1t2+run_p2t2+run_p3t2+run_p4t2;

	printf("\n------Winning TEAM-----\n");
	if(totscore_team1>totscore_team2)
		{
			printf("Team %s is WINNING... CONFGRATULATIONS!!! with score of : %d",team1,totscore_team1);
		}

	else
		{
			printf("Team %s is WINNING... CONFGRATULATIONS!!!! with score of : %d",team2,totscore_team2);
		}
	return 0;
}

