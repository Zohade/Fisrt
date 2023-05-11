#include "initial.h"
using namespace std;


int main()
{
    int nombrealeatoire,MIN,MAX ;
    int nombre,nombredessai,menu=0;
    int rep;
    bool suivant=false;
    nombredessai=1;

    do
    {



        if(menu==0){

            nombrealeatoire=aleatoire(1,10);
            int monfact= fact(nombrealeatoire);

            do
            {
                printf("NIVEAU 1 \n");
                if(nombredessai<5)
                {
                    printf(" Le factoriel du nombre donne %d \n.Deviner le nombre entre 1 et 10. Essai numero %d  \n",monfact,nombredessai);
                    scanf("%d",&nombre);

                    if(nombrealeatoire < nombre){
                        printf("C'est moins\n\n");
                    }
                    else if(nombrealeatoire > nombre){
                        printf("C'est plus\n\n");
                    }
                    else
                    {
                        printf("Bravo vous avez trouve la reponse avec %d essais. Vous avez gagne  \n\n", nombredessai);
                        suivant=true;
                        menu=1;
                    }

                    nombredessai++;
                }

            }while(nombrealeatoire!=nombre &&nombredessai<=4);



        } if(suivant==true && menu==1)
        {
            suivant=false;

            MAX=100;
            MIN=1;
            srand(time(NULL));
            nombrealeatoire=(rand()%(MAX-MIN+1))+MIN;
            int monfact= fact(nombrealeatoire);

            do
            {
                printf("NIVEAU 2 \n");
                if(nombredessai<5)
                {
                    printf(" Le factoriel du nombre donne %d \n.Deviner le nombre entre 1 et 100. Essai numero %d  \n",monfact,nombredessai);
                    scanf("%d",&nombre);

                    if(nombrealeatoire < nombre){
                        printf("C'est moins\n\n");
                    }
                    else if(nombrealeatoire > nombre){
                        printf("C'est plus\n\n");
                    }
                    else
                    {
                        printf("Bravo vous avez trouve la reponse avec %d essais. Vous avez gagne  \n\n", nombredessai);
                        suivant=true;
                        menu=2;
                    }

                    nombredessai++;
                }

            }while(nombrealeatoire!=nombre &&nombredessai<=4);



        } if ( suivant==true && menu==2)
        {

            MAX=10000;
            MIN=1;
            srand(time(NULL));
            nombrealeatoire=(rand()%(MAX-MIN+1))+MIN;


            for(  nombredessai=1; nombredessai<=5 ;nombredessai++)
            {
                if(nombredessai<=4)
                {
                    printf("NIVEAU 3\n");
                    printf("Deviner le nombre entre 1 et 10000. Essai numero %d  \n",nombredessai);
                    scanf("%d",&nombre);

                    if(nombrealeatoire < nombre){
                        printf("C'est moins\n\n");
                    }
                    else if(nombrealeatoire > nombre){
                        printf("C'est plus\n\n");
                    }
                    else {
                        printf("Bravo vous avez trouve la reponse avec %d essais. Vous avez gagne  \n\n", nombredessai);
                        printf("Bravo dernier niveau atteint \n");
                        exit(0);
                    }

                }else if( nombredessai>4){
                    printf("BAMMMMM!!! Vous avez perdu \n");
                    printf(" La reponse etait : %d \n", nombrealeatoire);
                }
            }



        }

        printf("Un autre jeu ?  Appuiyez sur 1 pour continuer et 0 pour arreter \n");
        scanf("%d",&rep);
    } while (rep==1);
    return 0;
}
