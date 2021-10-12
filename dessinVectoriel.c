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
int main()
{
    char *questions[2]= {"rayon du cercle ? stop[0] : \n","position du cercle ? : \n"};//on stock les questions ici pour les resortir dans une boucle
    int var[2],on=1;//var pour stocker le rayon et la position du cercle et "on" active la boucle
    do
    {
        for(int h=0; h<2; h++)//on pose la question correspondante a la variable a entrer var[0] pour le rayon var[1] pour la distance
        {
            printf("%s", questions[h]);
            scanf(" %i", &var[h]);
            if(var[0]==0)//si on entre un 0
            {
                on=0;//fin de la grande boucle, soit fin du programme
                break;//fin de la petite boucle
            }
        }
        for (int i=0; i<=2*var[0]; i++)//dessiner jusqu'à hauteure soit 2 fois le rayon
        {
            for(int y=0; y<var[1]; y++)//faire autant d'espace que demandé précédemment
            {
                printf(" ");
            }
            for (int j=0; j<=2*var[0]; j++)//ligne longue comme deux fois le rayon
            {
                float len = sqrt((var[0]-i)*(var[0]-i) + (var[0]-j)*(var[0]-j));//calcule de la distance au centre du cercle i correspondant a la position du curseur verticalement et j horizontalement
                //la racine de la différence verticale au carré plus la différence horizontale au carré donne la distance au centre
                if (len<var[0])//si distance est plus petite que le rayon
                {
                    //sleep(1);//on peut attendre pour donner un effet
                    printf("**");//dessiner le cercle
                }
                else//si à l'extérieur du cercle
                {
                    //sleep(1);//on peut attendre pour donner un effet
                    printf("  ");//espace pour atteindre le cercle
                }
            }
            printf("\n");//retour à la ligne
        }
    }
    while(on==1);
}
