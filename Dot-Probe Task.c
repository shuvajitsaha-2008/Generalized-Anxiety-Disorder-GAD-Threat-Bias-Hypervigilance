#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
int main()
{
    char positive[8][20] = {"flower", "butterfly", "tourist", "puppy","garden", "visa", "table", "pluto"};
    char negative[8][20] = { "knife", "fire", "accident", "terror","injury", "virus", "attack", "earthquake"};
    int i;
    int leftType;
    int question;
    int correct;
    int key;
    int wordType;
    char *leftWord;
    char *rightWord;
    char *questionWord;
    double start, end, reaction;
    double positiveTime = 0;
    double negativeTime = 0;
    int positiveCorrect = 0;
    int negativeCorrect = 0;
    srand(time(0));
    printf("========================================\n");
    printf("             DOT-PROBE TASK\n");
    printf("========================================\n\n");
    printf("So two words will be appearing on the screen.\n");
    printf("You have to remember their positions well.\n\n");
    printf("After the words disappear:\n");
    printf("LEFT ARROW  = word was on the LEFT\n");
    printf("RIGHT ARROW = word was on the RIGHT\n\n");
    printf("Answer as quickly and accurately as possible.\n\n");
    printf("So champ! press any key to start buddy!...");
    getch();
    system("cls");
    for(i = 1; i <= 20; i++)
    {
        printf("\n\n");
        printf("          GET READY FOR ROUND %d\n\n", i);
        Sleep(1000);
        system("cls");
        printf("                    3\n");
        Sleep(1000);
        system("cls");
        printf("\n\n");
        printf("                    2\n");
        Sleep(1000);
        system("cls");
        printf("\n\n");
        printf("                    1\n");
        Sleep(1000);
        system("cls");
        printf("\n\n");
        printf("                  READY!\n");
        Sleep(500);
        system("cls");
        leftType = rand() % 2;
        if(leftType == 0)
        {
            leftWord = positive[rand() % 8];
            rightWord = negative[rand() % 8];
        }
        else
        {
            leftWord = negative[rand() % 8];
            rightWord = positive[rand() % 8];
        }
        question = rand() % 2;
        if(question == 0)
        {
            questionWord = leftWord;
            correct = 75;        
            if(leftType == 0)
            {
                wordType = 1;   
            }
            else
            {
                wordType = 2;  
            }
        }
        else
        {
            questionWord = rightWord;
            correct = 77;       
            if(leftType == 0)
            {
                wordType = 2;   
            }
            else
            {
                wordType = 1;   
            }
        }
        printf("\n\n");
        printf("              ROUND %d / 20\n\n", i);
        printf("           %-15s %s\n", leftWord, rightWord);
        Sleep(500);
        system("cls");
        printf("\n\n");
        printf("              ROUND %d / 20\n\n", i);
        printf("       Where was \"%s\"?\n\n", questionWord);
        printf("          <- LEFT       RIGHT ->\n");
        start = (double)clock() / CLOCKS_PER_SEC;
        key = getch();
        if(key == 0 || key == 224)
        {
            key = getch();
        }
        end = (double)clock() / CLOCKS_PER_SEC;
        reaction = (end - start) * 1000;
        if(key == correct)
        {
            printf("\nCorrect!\n");
            if(wordType == 1)
            {
                positiveTime = positiveTime + reaction;
                positiveCorrect++;
            }
            else if(wordType == 2)
            {
                negativeTime = negativeTime + reaction;
                negativeCorrect++;
            }
        }
        else
        {
            printf("\nWrong!\n");
        }
        printf("Reaction Time: %.0f ms\n", reaction);
        Sleep(700);
        system("cls");
    }
    printf("========================================\n");
    printf("             FINAL RESULTS\n");
    printf("========================================\n\n");
    if(positiveCorrect > 0)
    {
        printf("Positive Words\n");
        printf("Correct Answers: %d\n", positiveCorrect);
        printf("Average Reaction Time: %.2f ms\n\n",
               positiveTime / positiveCorrect);
    }
    else
    {
        printf("No correct responses for positive words.\n\n");
    }
    if(negativeCorrect > 0)
    {
        printf("Negative / Threat Words\n");
        printf("Correct Answers: %d\n", negativeCorrect);
        printf("Average Reaction Time: %.2f ms\n\n",
               negativeTime / negativeCorrect);
    }
    else
    {
        printf("No correct responses for negative words.\n\n");
    }
    if(positiveCorrect > 0 && negativeCorrect > 0)
    {
        printf("----------------------------------------\n");
        if((negativeTime / negativeCorrect) < (positiveTime / positiveCorrect))  
        {
            printf("You should consider visiting a Psychologist my friend! \n");
        }
        else if((positiveTime / positiveCorrect) <= (negativeTime / negativeCorrect))            
        {
            printf("You are just posatively fine my friend!\n");
        }
        printf("----------------------------------------\n");
    }
    printf("\nNote: This task is only a research\n");
    printf("observation and cannot diagnose GAD.\n");
    printf("\nPress any key to exit...");
    getch();
    return 0;
}
