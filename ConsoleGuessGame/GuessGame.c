#include <stdio.h>
#include <stdlib.h>

void main()
// Start
{
    int RandomNumber,UserGuess,Awnser;
        RandomNumber = rand()%1001;
        printf("The Enter First Number");
        for(Awnser = 0; Awnser < 20; Awnser++)
            {
                printf("\n Guess %dth Number:", (Awnser + 1));
                scanf("%d", &UserGuess);
                if(RandomNumber == UserGuess)
                    {
                        printf("\n You Win");
                        break;
                    }
                    if(RandomNumber > UserGuess)
                        {
                            printf("\nThe Number is Greater Than You Entered!");
                        }
                    if(RandomNumber < UserGuess)
                        {
                            printf("\nThe Number is Less Than You Entered!");
                        }
            }
            if(Awnser==20)
                {
                    printf("\n\n You Loss");
                }
}
// END