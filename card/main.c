#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    char suit[10];
    char face[10];
}CARD;

void fill_card(CARD card[]);
void deal(CARD card[],int result[]);
void init(int result[]);
void shuttle(int result[]);


int main()
{
    CARD card[52];
    int result[52];
    fill_card(card);
    init(result);
    deal(card,result);
    shuttle(result);
    printf("After shuttle\n");
    deal(card,result);

    return 0;
}

void fill_card(CARD card[])
{
    char *pSuit[] = {"Spades","Hearts","Clubs","Diamonds"};
    char *pFace[] = {"A","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
    int i;
    for(i=0;i<52;i++)
    {
        strcpy(card[i].suit, pSuit[i/13]);
        strcpy(card[i].face, pFace[i%13]);
    }
}

void deal(CARD card[],int result[])
{
    int i;
    for(i=0;i<52;i++)
    {
        printf("%s %s\t",card[result[i]].suit,card[result[i]].face);
        if((i+1)%13 == 0)
        {
            printf("\n");
        }
    }
}

void init(int result[])
{
    int i;
    for(i=0;i<52;i++)
    {
        result[i] = i;
    }
}

void shuttle(int result[])
{
    int i, j, temp;
    for(i=0;i<52;i++)
    {
        j = rand() % 52;
        temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }
}
