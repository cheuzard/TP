#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int tab[12];
    printf("insérez les éléments du tableau \n");
    for (int i = 0; i < 12; i++)
    {
        int v;
        do{
            scanf("%d", &v);
        }while (v<1 || v>12);
        tab[i]=v;
    }
    for (int i = 0; i < 12; i++)
    {
        printf("|%d|", tab[i]);
    }
    
    
    return 0;
}
/*todo
meme tableau en supprimant la redondance au lieux de filtrer les chiffre entre 12 et 1
*/
