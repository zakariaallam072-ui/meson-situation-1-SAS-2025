// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct produits {
    char nom[50];
    float prix;
    int quantite;
    int categorie;
};
int indix = 0 ,i;
struct produits produit[100] ;

void menu();
void menu_Categorie();
void ajouter();
void Afficher();
void rechercher();
void modifier();
void calcule_valur_total(float mult);
void suprimier();
int main() {
    int choi;
    do{
     menu();
     scanf("%d",&choi);
     switch(choi){
         case 1 : ajouter();
         break;
          case 2 : Afficher();
         break;
          case 3 : rechercher();
         break;
          case 4 : modifier();
         break;
          case 5 : 
          float mult;
          calcule_valur_total(mult);
         break;
          case 6 :  suprimier();
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
void menu_Categorie(){
    printf(" 1. pour smartphone \n");
    printf(" 2. pour ordinateur \n");
    printf(" 3. pour accessoire \n");
    printf(" entrer votre choi ; ");
}
void ajouter(){
    int choi_categorie;
    printf("entrer le nom : ");
    scanf("%s",&produit[indix].nom);
    printf("entrer le prix : ");
    scanf("%f",&produit[indix].prix);
    printf("entrer le quantite : ");
    scanf("%d",&produit[indix].quantite);
    printf("\n");
    printf("entre le Catégorie\n");
    do{
    menu_Categorie();
    scanf("%d",&choi_categorie);
    switch(choi_categorie){
         case 1 : produit[indix].categorie = 1;
         break;
         case 2 : produit[indix].categorie = 2;
         break;
         case 3 : produit[indix].categorie = 3;
         break;
         default: printf("entrer one choi \n");
         break;
    }
    }while(choi_categorie>0 && choi_categorie>4);
    indix++;
}

void Afficher(){
    for(i=0;i<indix;i++){
        printf("--------- produit nombre %d-------\n",i+1);
    printf(" nom : %s\n",produit[i].nom);
    printf("prix : %f\n",produit[i].prix);
    printf("quantite : %d\n",produit[i].quantite);
    printf(" categorie : %d\n\n",produit[i].categorie);
    }
}

void rechercher(){
    char name_recherch[50];
    int sort = false;
    printf("entrer le name de produit pour recherche : ");
    scanf("%s",name_recherch);
    for(i=0;i<indix;i++){
        if(strcmp(name_recherch,produit[i].nom) == 0){
            printf(" nom : %s\n",produit[i].nom);
            printf("prix : %f\n",produit[i].prix);
            printf("quantite : %d\n",produit[i].quantite);
            printf(" categorie : %d\n\n",produit[i].categorie);
            sort = true;
        }
    }
    if(!sort){
        printf(" the nom is not here\n");
    }
}
void modifier(){
      char name_modifier[50];
    int sort = false;
    printf("entrer le name de produit pour modifier : ");
    scanf("%s",name_modifier);
    for(i=0;i<indix;i++){
        if(strcmp(name_modifier,produit[i].nom) == 0){
            printf("entrer le nom : ");
            scanf("%s",&produit[i].nom);
            printf("entrer le prix : ");
            scanf("%f",&produit[i].prix);
            printf("entrer le quantite : ");
            scanf("%d",&produit[i].quantite);
            printf("entrer le categorie : ");
            scanf("%d",&produit[i].categorie);
            sort = true;
        }
        if(!sort){
        printf(" the nom is not here\n");
    }
}
}
void calcule_valur_total(float mult){
    
    for(i=0;i<indix;i++){
        printf(" totale de product numbre %d \n",i+1);
        mult = produit[i].quantite * produit[i].prix;
        printf(" total : %.2f\n\n",mult);
    }
    
}

void suprimier(){
        char name_suprimier[50];
    int sort = false;
    printf("entrer le name de produit pour suprimier[50] : ");
    scanf("%s",name_suprimier);
    for(i=0;i<indix;i++){
        if(strcmp(name_suprimier,produit[i].nom) == 0){
            for(int j=i;j<indix-1;j++){
                produit[j] = produit[j+1];
            }
        }
    }
    if(!sort){
        printf(" the nom is not here\n");
        indix--;
}
}