#include <stdio.h>

void amountCalc(int notesCount[])
{
    int notes[] = {2000, 500, 200, 100, 50, 20, 10};
    int totalAmo = 0;

    for (int i = 0; i < 7; i++)
    {
        totalAmo += notesCount[i] * notes[i];
    }
    printf("Total Amount: %d\n", totalAmo);
}

int main()
{
    int notesCount[7];
    int notes[] = {2000, 500, 200, 100, 50, 20, 10};

    printf("Enter the no.of notess: \n");

    for (int i = 0; i < 7; i++)
    {
        printf("%d: ", notes[i]);
        scanf("%d", &notesCount[i]);
    }
    amountCalc(notesCount);

    return 0;
}