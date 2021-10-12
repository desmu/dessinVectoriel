#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1 * (x))
#endif

//il s'agit de générer des disques dont la forme est recalculée selon le rayon comme dans un logiciel de dessin vectoriel

int main()
{
    char *questions[2]= {"rayon du cercle ? stop[0] : \n","position du cercle ? : \n"};
    int var[2],on=1;
    do
    {
        for(int h=0; h<2; h++)
        {
            printf("%s", questions[h]);
            scanf(" %i", &var[h]);
            if(var[0]==0)
            {
                on=0;
                break;
            }
        }
        for (int i=0; i<=2*var[0]; i++)
        {
            for(int y=0; y<var[1]; y++)
            {
                printf(" ");
            }
            for (int j=0; j<=2*var[0]; j++)
            {
                float len = sqrt((var[0]-i)*(var[0]-i) + (var[0]-j)*(var[0]-j));
                if (len<var[0])
                {
                    //sleep(1);
                    printf("**");
                }
                else
                {
                    sleep(1);
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    while(on==1);
}
