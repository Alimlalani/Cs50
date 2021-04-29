#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");


    int score1 = compute_score(word1);
    //used for checking
    // printf("Score1 %i \n",score1);

    int score2 = compute_score(word2);
    //used for checking
    // printf("Score2 %i \n",score2);


    if(score1>score2)
    {
        printf("Player 1 wins");
    }
    else if(score1<score2)
    {
        printf("Player 2 wins");
    }
    else if(score1==score2)
    {
        printf("Tie!!");
    }
    else
    {
        printf("Invalid input");
    }
}

int compute_score(string word)
{
        int sum=0;
        int index=0;
    for(int i=0,n =strlen(word);i<n;i++)
    {
    if (isalpha(word[i]))
    {
        word[i] = toupper(word[i]);
        if (word[i]>='A' && word[i]<='Z')
        {
            index= (int)word[i] - 65;

            //used for checking
            // printf("INDEX: %i \n ", index);
        }
    else
    {
        POINTS[index]=0;
        //used for checking
        // printf("INDEX NOW: %i \n", index);
    }
     sum= sum+POINTS[index];
    //used for checking
    // printf("Current : %i \n",sum);
    }
    }
    return sum;
}