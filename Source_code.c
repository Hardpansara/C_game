#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void instruction() // Home Page ... This will be the first function to be called .
{
    system("cls");
    printf("\033[0;33m");
    printf("|----------------------------------------------------------------------------------------|\n");
    printf("|----------------------------------------%sWELCOME%s%s-----------------------------------------|\n", "\033[0;32m", "\033[0m", "\033[0;33m");
    printf("|SORT THE Glass                                                                          |\n");
    printf("|                                                                                        |\n");
    printf("|%sRules :%s%s                                                                                 |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ Sort the 5 Glasss here.%s%s                                                               |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ You can remove a top element from any Glass and add it to any other Glass.%s%s            |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ For transferring of element , the top elements of both Glasss must be the same%s%s        |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ Right most elements represent tops respectively%s%s                                       |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ All you have to do is to arrange the same elements in the respective Glasss.%s%s          |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ For your ease , you will be given an extra Glasss.%s%s                                    |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ Glass 1 must contain all 1s,Glass 2 must contain all 2s,Glass 3 must contain all 3c%s%s   |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ For example: 'Glass 1 : 1 , 1 , 1 , 1'%s%s                                                |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ NOTE : You can't undo your choice.%s%s                                                    |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|                                                                                        |\n");
    printf("|                                       %sALL THE BEST%s%s                                     |\n", "\033[0;36m", "\033[0m", "\033[0;33m");
    printf("|                                                                                        |\n");
    printf("|%sPress 1: play game.%s%s                                                                     |\n", "\033[0;32m", "\033[0m", "\033[0;33m");
    printf("|%spress 2: Exit%s%s                                                                           |\n", "\033[0;32m", "\033[0m", "\033[0;33m");
    printf("|                                                              Developed By Hard Pansara |");
    printf("|----------------------------------------------------------------------------------------|");
    printf("\033[0m");
}
void loser() // Function for conforming Exit of Game .
{
    printf("\033[0;36m");
    printf("\tKeep pushing yourself. You might be closer to winning than you think. \n");
    printf("\tLets try again \n\n");
    printf("\tTake a deep breath and give it another try. You might succeed this time. \n");
    printf("\033[0m");

    exit;
}
void rules() // Function to Display Rule in between Game .
{
    printf("\n");
    printf("\033[0;33m");
    printf("|----------------------------------------------------------------------------------------|\n");
    printf("|%sRules :%s%s                                                                                 |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ Sort the 5 Glasss here.%s%s                                                               |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ You can remove a top element from any Glass and add it to any other Glass.%s%s            |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ For transferring of element , the top elements of both Glasss must be the same%s%s        |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ Right most elements represent tops respectively%s%s                                       |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ All you have to do is to arrange the same elements in the respective Glasss.%s%s          |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ For your ease , you will be given an extra Glasss.%s%s                                    |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ Glass 1 must contain all 1s,Glass 2 must contain all 2s,Glass 3 must contain all 3c%s%s   |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ For example: 'Glass 1 : 1 , 1 , 1 , 1'%s%s                                                |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|%s$ NOTE : You can't undo your choice.%s%s                                                    |\n", "\033[0;37m", "\033[0m", "\033[0;33m");
    printf("|----------------------------------------------------------------------------------------|\n\n\n");
    printf("\033[0m");
}

int status(int arr1[], int arr2[], int arr3[], int arr4[], int arr5[], int top1, int top2, int top3, int top4, int top5, int try, int max)
{
    // This function is used to determine whether or not the game is over.

    // Each "flag" designates a certain stack. Every set is set to "1," which denotes truth.

    int flag1 = 1;
    int flag2 = 1;
    int flag3 = 1;
    int flag4 = 1;
    int flag5 = 1;

    for (int i = 0; i <= top1; i++) // the loop will run from index 0 to index of top variable.

    {
        if (arr1[0] != arr1[i])
        {
            // Here, the element at index zero is utilized to compare other stack elements.
            flag1 = 0;
        }
    } // The identical condition is applied to all other stacks.

    for (int i = 0; i <= top2; i++)
    {
        if (arr2[0] != arr2[i])
        {
            flag1 = 0;
        }
    }
    for (int i = 0; i <= top3; i++)
    {
        if (arr3[0] != arr3[i])
        {
            flag1 = 0;
        }
    }

    if (flag1 == 1 && flag2 == 1 && flag3 == 1 && top1 == 3 && top2 == 3 && top3 == 3) // This condition is met if all checks have been made and all flags have been set to "true".
    {
        system("cls");
        printf("\033[0;32m");
        printf("\n\t\tYOU'VE PROVEN YOURSELF TO BE THE BEST!! CONGRATULATIONS ON WINNING!!\t\n\n\n");
        printf("You completed the Game in %d  steps.", try);
        printf("Record for this Dificulty Level is %d\n", max);
        printf("Thank you for playing this game.");
        printf("\033[0m");
        printf("\033[0;31m");
        printf("\n\n-Hard Pansara   ");
        printf("\033[0m");
        printf("\n");
        exit(0);
        return 0;
    }
}

void display(int arr1[], int arr2[], int arr3[], int arr4[], int arr5[], int top1, int top2, int top3, int top4, int top5, int try, int max) // Function is utilized to display both the game's UI and the elements inside of the stacks.

{

    printf("\n");
    printf("Size of all Glasses are 5 \n");
    printf("|--------------------------|\n"); // This is Just for Design purpose .
    printf("| ");
    printf("\033[44m");
    printf("Glass 1 ");
    printf("\033[0m");
    printf(":");
    for (int i = 0; i <= top1; i++)
    {
        if (arr1[i] == 1) // condition to color-code stack components depending on which memeber is present.Each element has a unique color, such as "033[44m" for "1," "033[42m" for "2," and "033[46m" for "3."

        {
            printf("\033[44m");
            printf(" %d ", arr1[i]);
            printf("\033[0m");
        }
        else if (arr1[i] == 2)
        {
            printf("\033[42m");
            printf(" %d ", arr1[i]);
            printf("\033[0m");
        }
        else if (arr1[i] == 3)
        {
            printf("\033[46m");
            printf(" %d ", arr1[i]);
            printf("\033[0m");
        }
    }
    printf("\n");
    printf("|--------------------------|\n\n"); // Same condions are checked for all stacks.
    printf("|--------------------------|\n");
    printf("| ");
    printf("\033[42m");
    printf("Glass 2 ");
    printf("\033[0m");
    printf(":");
    for (int i = 0; i <= top2; i++)
    {
        if (arr2[i] == 1)
        {
            printf("\033[44m");
            printf(" %d ", arr2[i]);
            printf("\033[0m");
        }
        else if (arr2[i] == 2)
        {
            printf("\033[42m");
            printf(" %d ", arr2[i]);
            printf("\033[0m");
        }
        else if (arr2[i] == 3)
        {
            printf("\033[46m");
            printf(" %d ", arr2[i]);
            printf("\033[0m");
        }
    }
    printf("\n");
    printf("|--------------------------|\n\n");
    printf("|--------------------------|\n");
    printf("| ");
    printf("\033[46m");
    printf("Glass 3 ");
    printf("\033[0m");
    printf(":");
    for (int i = 0; i <= top3; i++)
    {
        if (arr3[i] == 1)
        {
            printf("\033[44m");
            printf(" %d ", arr3[i]);
            printf("\033[0m");
        }
        else if (arr3[i] == 2)
        {
            printf("\033[42m");
            printf(" %d ", arr3[i]);
            printf("\033[0m");
        }
        else if (arr3[i] == 3)
        {
            printf("\033[46m");
            printf(" %d ", arr3[i]);
            printf("\033[0m");
        }
    }
    printf("\n");
    printf("|--------------------------|\n\n");
    printf("|--------------------------|\n");
    printf("| ");
    printf("Glass 4 ");
    printf(":");
    for (int i = 0; i <= top4; i++)
    {
        if (arr4[i] == 1)
        {
            printf("\033[44m");
            printf(" %d ", arr4[i]);
            printf("\033[0m");
        }
        else if (arr4[i] == 2)
        {
            printf("\033[42m");
            printf(" %d ", arr4[i]);
            printf("\033[0m");
        }
        else if (arr4[i] == 3)
        {
            printf("\033[46m");
            printf(" %d ", arr4[i]);
            printf("\033[0m");
        }
    }
    printf("\n|--------------------------|\n");
    printf("\n|--------------------------|\n");
    printf("| ");
    printf("Glass 5 ");
    printf(":");
    for (int i = 0; i <= top5; i++)
    {
        if (arr5[i] == 1)
        {
            printf("\033[44m");
            printf(" %d ", arr5[i]);
            printf("\033[0m");
        }
        else if (arr5[i] == 2)
        {
            printf("\033[42m");
            printf(" %d ", arr5[i]);
            printf("\033[0m");
        }
        else if (arr5[i] == 3)
        {
            printf("\033[46m");
            printf(" %d ", arr5[i]);
            printf("\033[0m");
        }
    }
    printf("\n");
    printf("|--------------------------|\n\n");
    printf("\n");

    printf(" number of steps taken : %d \n", try); // To count the number of steps taken.

    // If any of the stacks are full, this message is presented to let players know that they cannot add any more elements to the stack.
    if (top1 == 5)
    {
        printf("\nGlass 1 is FULL , you can not add more element in it\n");
    }
    if (top2 == 5)
    {
        printf("\nGlass 2 is FULL , you can not add more element in it\n");
    }
    if (top3 == 5)
    {
        printf("\nGlass 3 is FULL , you can not add more element in it\n");
    }
    if (top4 == 5)
    {
        printf("\nGlass 4 is FULL , you can not add more element in it\n");
    }
    if (top5 == 5)
    {
        printf("\nGlass 5 is FULL , you can not add more element in it\n");
    }

    status(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
}

void game(int arr1[], int arr2[], int arr3[], int arr4[], int arr5[], int top1, int top2, int top3, int top4, int top5, int try, int max)
{
    int transfer_from; // This variable holds the information about the stack's top-level element that has to be deleted.
    int transfer_to;   // This variable is used to hold information about the stack whose element is to be inserted first.

    int temp;
// A player-inspiring remark is displayed after a certain number of steps.

    printf("\033[0;33m");
    if (try == 2)
    {
        printf("\nYOU'RE DOING GREAT !! KEEP IT UP.\n");
    }
    else if (try == 5)
    {
        printf("\nYOU'RE GETTING BETTER EVERY TIME YOU PLAY.\n");
    }
    else if (try == 7)
    {
        printf("\nYOU'RE DOING AN AMAZING JOB . KEEP PUSHING!!\n");
    }
    else if (try == 10)
    {
        printf("\nDON'T GIVE UP, YOU'RE SO CLOSE TO WINNING.\n");
    }
    else if (try == 14)
    {
        printf("\nYOU'RE DOING BETTER THAN YOU THINK !! KEEP GOING.\n");
    }
    else
    {
    }
    printf("\033[0m");
    printf("\n");

    printf("To select a Glass press the Glass number shown beside !!\n");
    printf("\033[0;31m");
    printf("Enter 0 to exit \nEnter 9 to see Rules\n");
    printf("\033[0m");
    printf("select Glass to transfer value from : ");
    scanf("%d", &transfer_from);
    printf("select Glass to transfer value to : ");
    scanf("%d", &transfer_to);


/*

MAIN LOGIC OF GAME !!
check the values of "transfer_from" and "transfer_to" AND (TOP elements of both the stakes should be same OR top value of "transper_to" shuold be "-1" i.e empty stack)
display and game functions are called after any changes.
*/
    if (transfer_from == 1 && transfer_to == 2 && (arr1[top1] == arr2[top2] || top2 == -1))
    {
        temp = arr1[top1]; //top element is copied temp variable 
        if (top2 <= 5) 
        {
            top2++; // top value is increamented
            arr2[top2] = temp; //copied data is copied in new top position  
            top1--; // top is decrimented
            try++; // number of moves incremented
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 1 && transfer_to == 3 && (arr1[top1] == arr3[top3] || top3 == -1))
    {
        temp = arr1[top1];
        if (top3 <= 5)
        {
            top3++;
            arr3[top3] = temp;
            top1--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 1 && transfer_to == 4 && (arr1[top1] == arr4[top4] || top4 == -1))
    {
        temp = arr1[top1];
        if (top4 <= 5)
        {
            top4++;
            arr4[top4] = temp;
            top1--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 1 && transfer_to == 5 && (arr1[top1] == arr5[top5] || top5 == -1))
    {
        temp = arr1[top1];
        if (top5 <= 5)
        {
            top5++;
            arr5[top5] = temp;
            top1--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 2 && transfer_to == 1 && (arr2[top2] == arr1[top1] || top1 == -1))
    {
        temp = arr2[top2];
        if (top1 <= 5)
        {
            top1++;
            arr1[top1] = temp;
            top2--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 2 && transfer_to == 3 && (arr2[top2] == arr3[top3] || top3 == -1))
    {
        temp = arr2[top2];
        if (top3 <= 5)
        {
            top3++;
            arr3[top3] = temp;
            top2--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 2 && transfer_to == 4 && (arr2[top2] == arr4[top4] || top4 == -1))
    {
        temp = arr2[top2];
        if (top4 <= 5)
        {
            top4++;
            arr4[top4] = temp;
            top2--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 2 && transfer_to == 5 && (arr2[top2] == arr5[top5] || top5 == -1))
    {
        temp = arr2[top2];
        if (top5 <= 5)
        {
            top5++;
            arr5[top5] = temp;
            top2--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 3 && transfer_to == 1 && (arr3[top3] == arr1[top1] || top1 == -1))
    {
        temp = arr3[top3];
        if (top1 <= 5)
        {
            top1++;
            arr1[top1] = temp;
            top3--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 3 && transfer_to == 2 && (arr3[top3] == arr2[top2] || top2 == -1))
    {
        temp = arr3[top3];
        if (top2 <= 5)
        {
            top2++;
            arr2[top2] = temp;
            top3--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 3 && transfer_to == 4 && (arr3[top3] == arr4[top4] || top4 == -1))
    {
        temp = arr3[top3];
        if (top4 <= 5)
        {
            top4++;
            arr4[top4] = temp;
            top3--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 3 && transfer_to == 5 && (arr3[top3] == arr5[top5] || top5 == -1))
    {
        temp = arr3[top3];
        if (top5 <= 5)
        {
            top5++;
            arr5[top5] = temp;
            top3--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 4 && transfer_to == 1 && (arr4[top4] == arr1[top1] || top1 == -1))
    {
        temp = arr4[top4];
        if (top1 <= 5)
        {
            top1++;
            arr1[top1] = temp;
            top4--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 4 && transfer_to == 2 && (arr4[top4] == arr2[top2] || top2 == -1))
    {
        temp = arr4[top4];
        if (top2 <= 5)
        {
            top2++;
            arr2[top2] = temp;
            top4--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }

    else if (transfer_from == 4 && transfer_to == 3 && (arr4[top4] == arr3[top3] || top3 == -1))
    {
        temp = arr4[top4];
        if (top3 <= 5)
        {
            top3++;
            arr3[top3] = temp;
            top4--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 4 && transfer_to == 5 && (arr4[top4] == arr5[top5] || top5 == -1))
    {
        temp = arr4[top4];
        if (top5 <= 5)
        {
            top5++;
            arr5[top5] = temp;
            top4--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 5 && transfer_to == 1 && (arr5[top5] == arr1[top1] || top1 == -1))
    {
        temp = arr5[top5];
        if (top1 <= 5)
        {
            top1++;
            arr1[top1] = temp;
            top5--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 5 && transfer_to == 2 && (arr5[top5] == arr2[top2] || top2 == -1))
    {
        temp = arr5[top5];
        if (top2 <= 5)
        {
            top2++;
            arr2[top2] = temp;
            top5--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 5 && transfer_to == 3 && (arr5[top5] == arr3[top3] || top3 == -1))
    {
        temp = arr5[top5];
        if (top3 <= 5)
        {
            top3++;
            arr3[top3] = temp;
            top5--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 5 && transfer_to == 4 && (arr5[top5] == arr4[top4] || top4 == -1))
    {
        temp = arr5[top5];
        if (top4 <= 5)
        {
            top4++;
            arr4[top4] = temp;
            top5--;
            try++;
            system("cls");
        }
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    } 
    // if "transfer_from" and "transfer_to" have same value then no changes are made and directly functions are called. 
    else if (transfer_from == 1 && transfer_to == 1)
    {
        system("cls");

        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 2 && transfer_to == 2)
    {
        system("cls");
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 3 && transfer_to == 3)
    {
        system("cls");
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 4 && transfer_to == 4)
    {
        system("cls");
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 5 && transfer_to == 5)
    {
        system("cls");
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 9 || transfer_to == 9)
    {
        system("cls");
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        rules(); 
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
    else if (transfer_from == 0 || transfer_to == 0)
    {
        system("cls");
        loser();
    }

    else
    {
        printf("\033[0;31m");
        printf("\n Invalid input(alphabet and special charater not allowed)  \n");
        printf("\033[0m");
        display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
        game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
    }
}

int main()
{

    int choice;
    int confirm;

    do

    {
        instruction();
        printf("\n Option : ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            char difficulty;
            do
            {
                printf("Enter Difficulty ('e' for easy , 'm' for medium , 'h' for HARD , 'x' for exit ): "); // use to set the dificullty level.
                scanf("%s", &difficulty);
                system("cls");
                switch (difficulty)
                {
                case 'e':
                {
                    //Easy level
                    int arr1[5] = {1, 1};
                    int arr2[5] = {2, 2, 2};
                    int arr3[5] = {3, 3, 3};
                    int arr4[5] = {2, 3, 1};
                    int arr5[5] = {1};
                    int top1 = 1;
                    int top2 = 2;
                    int top3 = 2;
                    int top4 = 2;
                    int top5 = 0;
                    int try = 0;
                    int max = 4;
                    display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max); // displays the elements of each stacks and UI of Game.
                    game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);  // Logic of game.
                    break;
                };
                case 'm':
                {
                    int arr1[5] = {1, 1, 3, 3};
                    int arr2[5] = {3, 1, 2, 3};
                    int arr3[5] = {2, 2, 1, 2};
                    int arr4[5];
                    int arr5[5] = {0, 0, 0, 0, 0};
                    int top1 = 3;
                    int top2 = 3;
                    int top3 = 3;
                    int top4 = -1;
                    int top5 = 4;
                    int try = 0;
                    int max = 15;
                    printf("\033[0;31m");
                    printf("You can't use Glass 5\n\n");  
                    printf("\033[0m");
                    display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
                    game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
                    break;
                };
                case 'h':
                {

                    int arr1[5] = {1, 2, 3, 3};
                    int arr2[5] = {3, 1, 2, 3};
                    int arr3[5] = {1, 2, 1, 2};
                    int arr4[5];
                    int arr5[5];
                    int top1 = 3;
                    int top2 = 3;
                    int top3 = 3;
                    int top4 = -1;
                    int top5 = -1;
                    int try = 0;
                    int max = 17;
                    display(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
                    game(arr1, arr2, arr3, arr4, arr5, top1, top2, top3, top4, top5, try, max);
                    break;
                };
                case 'x':
                {
                    break;
                }

                default:
                {
                    printf("\033[0;31m");

                    printf("\nWrong input!!\n");
                    printf("\033[0m");
                    break;
                };
                }
            } while (difficulty != 'x'); // will run untill player exits the game.
        }
        else if (choice == 2)
        {
            printf("\033[0;31m");
            printf("Exiting  game!!");
            printf("\033[0m");
            return 1;
        }
        else
        {
            printf("Invalid input \n");
        }
    } while (choice != 2);

    return 0;
}
