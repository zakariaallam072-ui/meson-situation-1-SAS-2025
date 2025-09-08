// Online C compiler to run C program online
#include <stdio.h>

struct produits {
    char nom[50];
    float prix;
    int quantite;
    int categorie;
};

struct produits produit[100] ;

void menu();
int main() {
    int choi;
    do{
     menu();
     scanf("%d",&choi);
     switch(choi){
         case 1 :
         break;
          case 2 :
         break;
          case 3 :
         break;
          case 4 :
         break;
          case 5 :
         break;
          case 6 :
         break;
          case 7 : printf("Merci!!!");
         break;
         default : 
         break;
     }
    }while(choi!=7);

    return 0;
}

void menu(){
    printf(" 1. pour ajouter \n");
    printf(" 2. Afficher la liste complète des produits \n");
    printf(" 3. Rechercher un produit \n");
    printf(" 4. Mettre à jour le stock \n");
    printf(" 5. Calculer la valeur totale \n");
    printf(" 6. Supprimer un produit \n");
    printf(" 7. Quitter le programme. \n");
    printf(" entrer votre choi : ");
}