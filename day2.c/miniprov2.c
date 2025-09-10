#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTACTS 100


struct contact {
    char name[50];
    char numbre[30];
    char email[100];
};


int recherche(struct contact contacts[], char search[], int cmp) {
    for (int i = 0; i < cmp; i++) {
        if (strcmp(contacts[i].name, search) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    struct contact contacts[MAX_CONTACTS];
    int cmp = 0;
    int choix;

    do {
        printf("\n========= MENU =========\n");
        printf("1. Ajouter un contact\n");
        printf("2. Modifier un contact\n");
        printf("3. Supprimer un contact\n");
        printf("4. Afficher tous les contacts\n");
        printf("5. Rechercher un contact\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);
        

        switch (choix) {
            case 1:
                if (cmp < MAX_CONTACTS) {
                    printf("Nom: ");
                    scanf("%s", contacts[cmp].name);
                    printf("Numéro: ");
                    scanf("%s", contacts[cmp].numbre);
                    printf("Email: ");
                    scanf("%s", contacts[cmp].email);
                    cmp++;
                } else {
                    printf("Liste de contacts pleine !\n");
                }
                break;

            case 2: {
                char search[MAX_CONTACTS];
                printf("Entrez le nom à rechercher: ");
                scanf("%s", search);

                int indice = recherche(contacts, search, cmp);

                if (indice != -1) {
                    printf("\nContact trouvé :\n");
                    printf("Nom: %s\n", contacts[indice].name);
                    printf("Numéro: %s\n", contacts[indice].numbre);
                    printf("Email: %s\n", contacts[indice].email);
                } else {
                    printf("Contact non trouvé.\n");
                }
                break;
                }
            
        case 3:{
              char search[MAX_CONTACTS];

                printf("enter le nom de contact a modifier");
                scanf("%s", search);
                int indice = recherche(contacts, search, cmp);
                if (indice != -1)
                {
                    printf("contact trouver.\n");
                     printf("Nom:\n");
                    scanf("%s", contacts[indice].name);
                    printf("Numéro:\n");
                    scanf("%s", contacts[indice].numbre);
                    printf("Email:\n");
                    scanf("%s", contacts[indice].email);
                    
                }else 
                {
                    printf("contact non trouver");
                }
                
                

                break;
                }

                case 4:{
                    char supprimer[MAX_CONTACTS];
                    printf("name of contact: \n");
                  scanf("%s", supprimer);

    int indice = recherche(contacts, supprimer, cmp);

    if (indice != -1) {
        
        for (int i = indice; i < cmp - 1; i++) {
            contacts[i] = contacts[i + 1];
        }
        cmp--; 
        printf("Contact '%s' supprimé avec succès.\n", supprimer);
    } else {
        printf("Contact non trouvé.\n");
    }
                     
            
                break;
                }
                 case 5:{
                    if (cmp == 0) {
                    printf("Aucun contact à afficher.\n");
                } else {
                    printf("\n=== Liste des contacts ===\n");
                    for (int i = 0; i < cmp; i++) {
                        printf("%d. Nom: %s | Numéro: %s | Email: %s\n",
                               i + 1, contacts[i].name, contacts[i].numbre, contacts[i].email);
                        }
                    } 

            
                break;
                }

            case 0:{
                printf("Fermeture du programme.\n");
                break;
        
            } 
               

            default:
                printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}