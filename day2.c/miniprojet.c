#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 50

int recherche(char titre[MAX_BOOKS][MAX_BOOKS], char searcht[] ,int cmp){
    for(int i = 0; i < cmp; i++ ){
        if(strcmp(titre[i],searcht)==0){
            return i;
        }
    }
    return -1;
}


int main()
{
    char titre[MAX_BOOKS][MAX_BOOKS];
    char auteur[MAX_BOOKS][MAX_BOOKS];
    float prix[MAX_BOOKS];
    int quantite[MAX_BOOKS];
    int choix = 0;
    int cmp = 0;
    do
    {

        printf("-------menu---------\n");
        printf("1 Ajouter un livre au stock.\n");
        printf("2 Afficher tous les livres disponibles.\n");
        printf("3 Rechercher un livre par son titre.\n");
        printf("4 Mettre à jour la quantité d'un livre.\n");
        printf("5 Supprimer un livre du stock.\n");
        printf("6 Afficher le nombre total de livres en stock.\n");

        scanf("%d", &choix);

        switch (choix)

        {

        case 1:
            printf("Titre du livre: \n");
            getchar();
            fgets(titre[cmp], sizeof(titre), stdin);
            printf("Auteur du livre");
            getchar();
            fgets(auteur[cmp], sizeof(auteur), stdin);
            printf("Prix du livre");
            getchar();
            scanf("%f", &prix[cmp]);
            printf("Qauntite du livre");
            getchar();
            scanf("%d", &quantite[cmp]);
            getchar();
            cmp++;
            break;

        case 2:
            printf("-------Liste des livres---------\n");

            for (int i = 0; i < cmp; i++)
            {
                printf("titre de livre : %s , nom de l'auteur : %s , le prix : %f , le quantite : %d \n", titre[i], auteur[i], prix[i], quantite[i]);
            }

            printf("-------Liste des livres---------\n");

            break;

        case 3:
            char searcht[MAX_BOOKS];
            printf("Titre du livre: \n");
            getchar();
            fgets(searcht, sizeof(searcht), stdin);
            int indice = recherche(titre ,searcht, cmp);

            if(indice !=-1){
                printf("titre de livre : %s , nom de l'auteur : %s , le prix : %f , le quantite : %d \n", titre[indice], auteur[indice], prix[indice], quantite[indice]);
            }else{
                printf("livre n'est pas existe!!");
            }

            /*for (int i = 0; i < cmp; i++)
            {
                if (strcmp(searcht, titre[i]) == 0)
                {
                    printf("titre de livre : %s , nom de l'auteur : %s , le prix : %f , le quantite : %d \n", titre[i], auteur[i], prix[i], quantite[i]);
                }
            }*/
            break;

        case 4:

            printf("Titre du livre: \n");
            getchar();
            fgets(searcht, sizeof(searcht), stdin);
            for (int i = 0; i < cmp; i++)
            {
                if (strcmp(searcht, titre[i]) == 0)
                {
                    printf("saisirez la nouvelle Qauntite ");
                    getchar();
                    int new_quantite;
                    scanf("%d", &new_quantite);
                    quantite[i] = new_quantite;
                }
            }
            break;

        case 5:
            char suppreme[MAX_BOOKS];
            printf("Titre du livre: \n");
            getchar();
            fgets(suppreme, sizeof(suppreme), stdin);
            for (int i = 0; i < cmp; i++)
            {
                if (strcmp(suppreme, titre[i]) == 0)
                {
                    for(int j = i; j < cmp ; j++){
                        strcpy(titre[j],titre[j+1]);
                        strcpy(auteur[j],auteur[j+1]);
                        prix[j] = prix[j+1];
                        quantite[j]=quantite[j+1];
                        
                    }
                    cmp--;
                    break;
                }
            }
            break;

        case 6:
            break;

        default:
            printf("choix invalid");
        }
    } while (choix != 0);
}