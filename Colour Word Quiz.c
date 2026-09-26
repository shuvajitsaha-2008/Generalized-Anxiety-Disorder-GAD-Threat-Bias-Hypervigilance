#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
int main()
{
    int i;
    int wordType;
    int wordNumber;
    int colour;
    int answer;
    int positiveCorrect = 0;
    int negativeCorrect = 0;
    double startTime;
    double endTime;
    double reactionTime;
    double positiveTime = 0;
    double negativeTime = 0;
    char positive[8][20] = {"flower","puppy", "garden","butterfly","holiday","friend","smile","sunshine"};
    char negative[8][20] = {"knife","fire","accident","attack","injury","terror","virus","earthquake"};
    srand(time(0));
    printf("============================================\n");
    printf("           COLOUR WORD QUIZ\n");
    printf("============================================\n\n");
    printf("In this game, a word will appear in a colour.\n");
    printf("Ignore the meaning of the word.\n");
    printf("Identify the COLOUR as quickly as possible.\n\n");
    printf("1 = RED, 2 = GREEN, 3 = BLUE, 4 = YELLOW\n");
    printf("So champ...\n\n");
    printf("Press any key to start...");
    getch();
    for(i = 1; i <= 20; i++)
    {	
        wordType = rand() % 2;
        wordNumber = rand() % 8;
        colour = rand() % 4 + 1;
        system("cls");
        printf("\n\n");
        printf("             ROUND %d / 20\n\n", i);
        Sleep(2000);
        system("cls");
        printf("1 = RED, 2 = GREEN, 3 = BLUE, 4 = YELLOW\n");
        Sleep(3000);
        system("cls");
        printf("             GET READY...\n");
        Sleep(1000);
        system("cls");
        printf("\n\n");
        printf("                  3");
        Sleep(700);
        system("cls");
        printf("\n\n");
        printf("                  2");
        Sleep(700);
        system("cls");
        printf("\n\n");
        printf("                  1");
        Sleep(700);
        system("cls");
        if(wordType == 0)
        {
            printf("\n\n");
            printf("                 %s\n", positive[wordNumber]);
        }
        else
        {
            printf("\n\n");
            printf("                 %s\n", negative[wordNumber]);
        }
        if(colour == 1)
        {
            system("color 0C");   
        }
        else if(colour == 2)
        {
            system("color 0A");       
        }
        else if(colour == 3)
        {
            system("color 09");    
        }
        else
        {
            system("color 0E");      
        }
        startTime = clock();
        answer = getch();
        endTime = clock();
        reactionTime =
        (endTime - startTime) / CLOCKS_PER_SEC;
        system("color 07");
        system("cls");
        if(answer == '1')
        {
            if(colour == 1)
            {
                printf("\nCorrect!");
            }
            else
            {
                printf("\nWrong!");
            }
        }
        else if(answer == '2')
        {
            if(colour == 2)
            {
                printf("\nCorrect!");
            }
            else
            {
                printf("\nWrong!");
            }
        }
        else if(answer == '3')
        {
            if(colour == 3)
            {
                printf("\nCorrect!");
            }
            else
            {
                printf("\nWrong!");
            }
        }
        else if(answer == '4')
        {
            if(colour == 4)
            {
                printf("\nCorrect!");
            }
            else
            {
                printf("\nWrong!");
            }
        }
        else
        {
            printf("\nInvalid key!");
        }
        printf("\nReaction Time: %.2f seconds", reactionTime);
        if(wordType == 0)
        {
            if(answer == '1' && colour == 1)
            {
                positiveCorrect++;
                positiveTime = positiveTime + reactionTime;
            }
            else if(answer == '2' && colour == 2)
            {
                positiveCorrect++;
                positiveTime = positiveTime + reactionTime;
            }
            else if(answer == '3' && colour == 3)
            {
                positiveCorrect++;
                positiveTime = positiveTime + reactionTime;
            }
            else if(answer == '4' && colour == 4)
            {
                positiveCorrect++;
                positiveTime = positiveTime + reactionTime;
            }
        }
        else
        {
            if(answer == '1' && colour == 1)
            {
                negativeCorrect++;
                negativeTime = negativeTime + reactionTime;
            }
            else if(answer == '2' && colour == 2)
            {
                negativeCorrect++;
                negativeTime = negativeTime + reactionTime;
            }
            else if(answer == '3' && colour == 3)
            {
                negativeCorrect++;
                negativeTime = negativeTime + reactionTime;
            }
            else if(answer == '4' && colour == 4)
            {
                negativeCorrect++;
                negativeTime = negativeTime + reactionTime;
            }
        }
        Sleep(1000);
    }
    system("cls");
    printf("============================================\n");
    printf("              FINAL RESULTS\n");
    printf("============================================\n\n");
    printf("Positive/Neutral Words\n");
    printf("----------------------\n");
    printf("Correct Answers: %d\n", positiveCorrect);
    if(positiveCorrect > 0)
    {
        printf("Average Reaction Time: %.2f seconds\n",
               positiveTime / positiveCorrect);
    }
    else
    {
        printf("Average Reaction Time: No data\n");
    }
    printf("\nThreat-related Words\n");
    printf("--------------------\n");
    printf("Correct Answers: %d\n", negativeCorrect);
    if(negativeCorrect > 0)
    {
        printf("Average Reaction Time: %.2f seconds\n",
               negativeTime / negativeCorrect);
    }
    else
    {
        printf("Average Reaction Time: No data\n");
    }
    printf("\n============================================\n");
    printf("              OBSERVATION\n");
    printf("============================================\n\n");
    if(positiveCorrect > 0 && negativeCorrect > 0)
    {
        if((negativeTime / negativeCorrect) <
           (positiveTime / positiveCorrect))
        {
            printf("Faster average responses were observed\n");
            printf("during threat-related word trials.\n");
        }
        else if((negativeTime / negativeCorrect) >
                (positiveTime / positiveCorrect))
        {
            printf("Slower average responses were observed\n");
            printf("during threat-related word trials.\n");
        }
        else
        {
            printf("The average reaction times were similar.\n");
        }
    }
    else
    {
        printf("Not enough correct responses to compare\n");
        printf("the two groups.\n");
    }
    printf("\nNOTE:\n");
    printf("This is an educational demonstration of\n");
    printf("attention and reaction time.\n");
    printf("It cannot diagnose Generalized Anxiety Disorder.\n");
    printf("\nPress any key to exit...");
    getch();
    return 0;
}
