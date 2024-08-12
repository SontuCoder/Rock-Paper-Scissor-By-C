#include<stdio.h>
#include<time.h>
#include<stdlib.h>

 //Take user input:
int input()
{
	int playerInput;
    printf("Select any one:\n");
    printf("1 for Rock:\n");
    printf("2 for Paper:\n");
    printf("3 for Scissors:\n");
    printf("Enter :");
    scanf("%d",&playerInput);
    return playerInput;
}

int game()
{
    int num;
    int pointsOfPlayer=0, pointsOfComputer=0;
    label_1:
	num=input();
	if(num==1 || num==2 || num==3)
	{
		int computerInput;
	    srand(time(NULL));
	    computerInput=(rand()%3)+1;
	    if(num==computerInput)
		{
		    printf("two are same!!!...Again try..\n");
	    	goto label_1;
		}
		else if(num==1 && computerInput==2)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==2 && computerInput==3)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==1 && computerInput==3)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
		}
		else if(num==2 && computerInput==1)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
		}
		else if(num==3 && computerInput==1)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==3 && computerInput==2)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
    	}
	
	}
    else
	{
	    printf("Enter correct option:\n");
		goto label_1 ;	
	} 
	
	label_2:
	num=input();
	if(num==1 || num==2 || num==3)
	{
	   int computerInput;
	    srand(time(NULL));
	    computerInput=(rand()%3)+1;
	    if(num==computerInput)
		{
		    printf("two are same!!!...Again try..\n");
	    	goto label_2;
		}
		else if(num==1 && computerInput==2)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==2 && computerInput==3)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==1 && computerInput==3)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
		}
		else if(num==2 && computerInput==1)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
		}
		else if(num==3 && computerInput==1)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==3 && computerInput==2)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
    	}
	}
    else
	{
	    printf("Enter correct option:\n");
		goto label_2 ;	
	} 
	
	label_3:
	num=input();
	if(num==1 || num==2 || num==3)
	{
	   int computerInput;
	    srand(time(NULL));
	    computerInput=(rand()%3)+1;
	    if(num==computerInput)
		{
		    printf("two are same!!!...Again try..\n");
	    	goto label_3;
		}
		else if(num==1 && computerInput==2)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==2 && computerInput==3)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==1 && computerInput==3)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
		}
		else if(num==2 && computerInput==1)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
		}
		else if(num==3 && computerInput==1)
		{
			printf("Computer has get 1 point.\n");
			pointsOfComputer++;
		}
		else if(num==3 && computerInput==2)
		{
			printf("You have get 1 point.\n");
			pointsOfPlayer++;
    	}
	}
    else
	{
	    printf("Enter correct option:\n");
		goto label_3 ;	
	} 
	
	//output points:
	if(pointsOfComputer>pointsOfPlayer)
	{
		printf("Computer is win.");
	}
	else
	{
		printf("You are win.");
	}

}

void main()
{
    game();
}
