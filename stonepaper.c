#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
char userscore=0;
char compscore=0;
char gamearr[3][10]={"Stone","Paper","Scissor"};
int calculategame(int userdata);
int display();
int choice;
double i;
int scorecheck(int a);

int main()
{
    int result,choices;
    while(1)
    {
    choices=display();
    result=calculategame(choices);
    scorecheck(result);

    }

}
//function to display the user data interface
int display()
{
    printf("\n \n \t Welcome to StonePaperScissor \n");
    printf(" 1.Stone\n 2.Paper\n 3.Scissor \n");
    printf("Currently Scores Are: \n  CompScore=%d UserScore=%d\n \n",compscore,userscore);
    printf("Enter Your Choice in Corresponding Integer:\t");
    scanf("%d",&choice);
    return choice;
}

// Function to manipulate userdata and check winner with rand function
int calculategame(int userda)
{

    for(i=0;i<77777777;i++);//for delay purpose
    srand(time(0));
    int compda=rand()%3+1;
    if((userda==1 && compda==3)||(userda==1 && compda==0)||(userda==3 && compda==2))
    {   for(i=0;i<44444;i++);
        printf("%s beats %s\n",gamearr[userda-1],gamearr[compda-1]);
        return 1;
    }
    else if(userda==compda)
    {
        printf("Its is A Tie \n");
        return 3;
    }
    else
    {
         printf("%s beats %s\n",gamearr[compda-1],gamearr[userda-1]);
        return 0;
    }
}
// Function to calulatescore and exit
int scorecheck(int res)
{
    if (res==1)
        userscore+=1;
    else if(res==0)
        compscore+=1;
    if(compscore==5||userscore==5)
    {
        if (compscore>userscore)
            printf("Computer Wins The GAME");
        else
            printf("USER Wins the Game");
        exit(0);
    }
}
