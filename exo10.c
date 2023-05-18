#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


void afficher_titre();
void afficher_menu_principal();
void choix_menuu();
void Nous();
void afficher_catalogue();
void afficher_magasins();
void cataf();
void catah();
void catafille();
void cataboy();


typedef struct {
    char ville[50];
    char adresse[100];
    char Hours [100];
    char Contact [100];
    char Rating [100];
} Magasin;

typedef struct {
    char parfum[50];
    char nom[100];
    float prix;
    char alcohol [100];
    char taille [100];
    char duree [100];
    char notesolfactives[100];

} CataF;

typedef struct {
    char parfum[50];
    char nom[100];
    float prix ;
    char alcohol [100];
    char taille [100];
    char duree [100];
    char notesolfactives[100];

} CataH;

typedef struct {
    char parfum[50];
    char nom[100];
    float prix ;
    char alcohol [100];
    char taille [100];
    char duree [100];
    char notesolfactives[100];

} CataFILLE;

typedef struct {
    char parfum[50];
    char nom[100];
    float prix ;
    char alcohol [100];
    char taille [100];
    char duree [100];
    char notesolfactives[100];

} CataBOY;

void afficherTicket(FILE* fichier, const char* nom, const char* email, const char* telephone, float montant)
{
    fprintf(fichier, "========================TICKET=======================\n");
    fprintf(fichier, "                 Nom: %s\n", nom);
    fprintf(fichier, "                 Email: %s\n", email);
    fprintf(fichier, "                 Téléphone: %s\n", telephone);
    fprintf(fichier, "                 Montant: %.2f\n", montant);
    fprintf(fichier, "=====================================================\n");
}
    int choix_menu, choix_parfum, choix_mag, choix,i;
    float montantTotal = 0.0;
    char nom[50];
    char email[50];
    char telephone[10];
    FILE* ticket = NULL;
int main() {

    printf("\n\n\n\t \t \t \t \t \t\t \t \t \t  Bienvenue dans notre parfumerie!\n");
    afficher_titre();
    afficher_menu_principal();
    choix_menuu();

return 0;
}
void afficher_titre() {

    system("color FD");
    printf("\n\n\n\t \t\t \t \t\t\3====================================================================================================\3\n");
    printf("\t \t \t \t \t \t     _______  ______    _______  __   __  _______    _______  _______  _______ _______    _______ \n");
    printf("\t \t \t \t \t \t    |   _   ||    _ |  |       ||  |_|  ||   _   |  |       ||       ||   _   ||    _ |  |    ___| \n");
    printf("\t \t \t \t \t \t    |  | |  ||   | ||  |   _   ||       ||  | |  |  |  _____||__   __||  | |  ||   | ||  |   |\n");
    printf("\t \t \t \t \t \t    |  |_|  ||   |_||_ |  | |  ||       ||  |_|  |  | |_____    | |   |  | |  ||   |_||_ |   |___ \n");
    printf("\t \t \t \t \t \t    |       ||    __  ||  | |  ||  | |  ||       |  |_____  |   | |   |  | |  ||    __  ||    ___|\n");
    printf("\t \t \t \t \t \t    |   _   ||   |  | ||  | |  || ||_|| ||   _   |   _____| |   | |   |  | |  ||   |  | ||   |\n");
    printf("\t \t \t \t \t \t    |  | |  ||   |  | ||  |_|  || |   | ||  | |  |  |       |   | |   |  |_|  ||   |  | ||   |___ \n");
    printf("\t \t \t \t \t \t    |__| |__||___|  |_||_______||_|   |_||__| |__|  |_______|   |_|   |_______||___|  |_||_______|\n");
    printf("\n\t \t \t \t\t\t\3====================================================================================================\3\n");
}
void afficher_menu_principal() {
   printf("\n \t \t \t \t \t\t \t  \t \t \t\t       Menu:\n");
   printf("\n\t \t \t \t \t\t \t  \t \t \t\t1. Qui sommes-nous?\n");
   printf("\t \t \t \t \t \t\t  \t \t\t \t2. Nos magasins\n");
   printf("\t \t \t \t \t \t\t  \t \t\t \t3. Catalogue\n");

   printf("\t \t \t \t \t \t\t  \t \t\t \t4. Panier\n");
   printf("\t \t \t \t \t \t\t  \t \t\t \t5. Contact\n");
   printf("\t \t \t \t \t \t\t  \t \t\t \t6. Quitter\n\n\n");
}
void choix_menuu(int choix){
    afficher_titre();
    afficher_menu_principal();
    printf("\t\t\t\t\t\t\t\t\t   Veuillez entrer votre choix, s'il vous plait     ");
    scanf("%d", &choix);
    do {
    switch (choix) {
            case 1:
                 Nous ();
                 break ;

            case 2:
                 afficher_magasins();
                 break;

            case 3:

                afficher_catalogue();
                scanf("\n\t\t\t\t\t\t\t\t%d", &choix_parfum);
                switch (choix_parfum) {
                    case 1:
                            cataf();
                            break;
                    case 2:
                            catah();
                            break;

                    case 3:
                            catafille();
                            break;

                    case 4:
                            cataboy();
                            break;

                    case 5:
                        system("cls");
                        afficher_titre();
                        afficher_menu_principal();
                        break;

                    default:
                        printf("Choix invalide. Veuillez réessayer.\n");
                        break;
                }
                break;

            case 4:

                    system("cls");
                    afficher_titre();
                    afficher_menu_principal();
                    FILE* panier = fopen("panier.txt", "w");
                    if (panier == NULL) {
                       printf("Erreur : Impossible d'ouvrir le fichier panier.txt\n");
                       return 1;
                    }
                     printf("Entrez votre nom : ");
                     scanf("%s", nom);

                     printf("Entrez votre email : ");
                     scanf("%s", email);
                     if (strchr(email, '@') == NULL) {
                          printf("Erreur : Email invalide\n");

                     }

                     printf("Entrez votre numéro de téléphone : ");
                     scanf("%s", telephone);
                     if (strlen(telephone) != 10) {
                          printf("Erreur : Numéro de téléphone invalide\n");

                     }

                     ticket = fopen("ticket.txt", "w");

                     if (ticket == NULL) {
                        printf("Erreur : Impossible d'ouvrir le fichier ticket.txt\n");

                     }

                     afficherTicket(ticket, nom, email, telephone, montantTotal);
                     printf("Le ticket a été enregistré dans le fichier ticket.txt.\n");
                     fclose(ticket);

                     system("start ticket.txt");


                     break;

            case 5:

                    system("cls");
                    afficher_titre();
                    afficher_menu_principal();
                    printf("\nVous pouvez nous contacter par téléphone au 06 55 12 10 83 ou par e-mail à l'adresse Aroma.store@parfumerie.com.\n");
                    break;

            case 6:
                    system("cls");
                    printf("\nMerci d'avoir visité notre parfumerie. Au revoir!\n");
                    break;

            default:
                    printf("Choix invalide. Veuillez réessayer.\n");
                    break;
            }





} while (choix != 6);
}
void Nous () {
        printf("\n\n\n\t\t\t\t\t\tNous sommes une parfumerie sp%ccialis%ce dans la vente de nos propres produits de parfumerie haut de gamme.\n", 130, 130);
        printf("\t\t\t\t\t\t\t\tNous sommes fiers de cr%cer des fragrances uniques et de haute qualit%c.\n", 130, 130, 130);
        printf("\t\t\t   Notre %cquipe de parfumeurs et de professionnels de la beaut%c travaille avec passion pour cr%cer des produits qui r%cpondent aux plus hauts standards de qualit%c.\n", 130, 130, 130, 130, 130,130);
        printf("\t\t\t\tNous s%clectionnons soigneusement les ingr%c%cdients que nous utilisons dans nos produits et nous nous assurons qu'ils sont de la plus haute qualit%c.\n", 130, 130, 130);
        printf("    Nous croyons que chaque personne m%cerite de se sentir belle et confiante, c'est pourquoi nous avons cr%ce%ce une gamme de produits qui convient %c tous les types de peau et %c toutes les pr%cfr%cnces de parfum.\n", 130, 130, 130, 130, 133, 130,130);
        printf("\t\t\t\t\t\t\tQue vous cherchiez un parfum doux et floral ou une fragrance intense et %ccic%ce, nous avons quelque chose pour vous.\n", 130, 130);
        printf("\t\t\t\t\tNous sommes convaincus que nos produits sont les meilleurs sur le march%c, et nous offrons une garantie de satisfaction  100 %c a nos clients.\n", 130,37);
        printf("\t\t\t\t\t\t\t\t   Nous sommes fiers de nos produits et nous sommes s%cur%c que vous le serez aussi.\n", 130, 130);
        printf("\t\t\t\t\t\t\t   Venez nous rendre visite dans notre parfumerie et d%c%couvrez notre gamme de produits exceptionnels.\n\n\n\n\n\n\n", 130, 130);

}
void afficher_catalogue() {
    printf("\t\t\t\t\t\t\t\t     |==========================================================|\n");
    printf("\t\t\t\t\t\t\t\t     |                         Catalogue                        |\n");
    printf("\t\t\t\t\t\t\t\t     |==========================================================|\n");
    printf("\t\t\t\t\t\t\t\t     |                  1. Parfums pour femmes                  |\n");
    printf("\t\t\t\t\t\t\t\t     |                  2. Parfums pour hommes                  |\n");
    printf("\t\t\t\t\t\t\t\t     |                  3. Parfums pour filles                  |\n");
    printf("\t\t\t\t\t\t\t\t     |                  4. Parfums pour garcons                 |\n");
    printf("\t\t\t\t\t\t\t\t     |                5. Retour au menu principal               |\n");
    printf("\t\t\t\t\t\t\t\t     |==========================================================|\n");


}

void afficher_magasins() {
    Magasin magasins[8];

    strcpy(magasins[0].ville, "Agadir");
    strcpy(magasins[0].adresse, "Centre Ville, 15 Ave du Prince Moulay Abdallah, Agadir 80000");
    strcpy(magasins[0].Hours, " Lundi - Vendredi : 9h00 - 18h00");
    strcpy(magasins[0].Contact, " +212 5288-41110");
    strcpy(magasins[0].Rating, " \2 \2 \2 \2 \2 \2 \2 \1 \1 \1  (7/10)");

    strcpy(magasins[1].ville, "Marrakech");
    strcpy(magasins[1].adresse, "Route d'Essaouira Centre Commercial Marjane Massira, Route d'Agadir 11, Marrakech 40000 ");
    strcpy(magasins[1].Hours, " Lundi - Vendredi : 9h00 - 18h00");
    strcpy(magasins[1].Contact, " +212 5244-94915");
    strcpy(magasins[1].Rating, " \2 \2 \2 \2 \2 \2 \1 \1 \1 \1  (6/10)");

    strcpy(magasins[2].ville, "Casablanca");
    strcpy(magasins[2].adresse, "13 Rue du Prince Moulay Abdellah, Casablanca 20000");
    strcpy(magasins[2].Hours, " Lundi - Vendredi : 9h00 - 18h00 ");
    strcpy(magasins[2].Contact, " +212 5222-74066");
    strcpy(magasins[2].Rating, " \2 \2 \2 \2 \2 \2 \2 \2 \1 \1  (8/10)");

    strcpy(magasins[3].ville, "Safi");
    strcpy(magasins[3].adresse, "Centre Commercial Marjane, B1 Av. Hassan II, Safi 46000");
    strcpy(magasins[3].Hours, " chaque jour : 9h00 - 12h30 / 14h00 - 19h00");
    strcpy(magasins[3].Contact, " +212 5246-12050");
    strcpy(magasins[3].Rating, " \2 \2 \2 \2 \2 \2 \1 \1 \1 \1  (6/10)");

    strcpy(magasins[4].ville,"Rabat");
    strcpy(magasins[4].adresse, "Centre Commercial Ait Baha, 44 Avenue Hassan II, Entrée principale, Rabat 10000");
    strcpy(magasins[4].Hours, " Lundi - Samedi : 9h00 - 18h00");
    strcpy(magasins[4].Contact, " +212 5377-24228");
    strcpy(magasins[4].Rating, " \2 \2 \2 \2 \2 \2 \2 \1 \1 \1  (7/10)");

    strcpy(magasins[5].ville,"Tanger");
    strcpy(magasins[5].adresse, "Centre Commercial City Center, 29 Avenue de France, Magasin, Tanger 90000");
    strcpy(magasins[5].Hours, " Lundi - Samedi : 9h00 - 20h00");
    strcpy(magasins[5].Contact, " +212 5399-44256");
    strcpy(magasins[5].Rating, " \2 \2 \2 \2 \2 \2 \2 \2 \2 \1  (9/10)");

    strcpy(magasins[6].ville,"Fes");
    strcpy(magasins[6].adresse, "30 Boulevard Allal El Fassi, Fes 30000");
    strcpy(magasins[6].Hours, " Lundi - Vendredi : 9h00 - 18h00");
    strcpy(magasins[6].Contact, " +212 5359-44392");
    strcpy(magasins[6].Rating, " \2 \2 \2 \2 \2 \1 \1 \1 \1 \1  (5/10)");

    strcpy(magasins[7].ville,"oujda");
    strcpy(magasins[7].adresse, "N2 Centre Commercial Marjane, 8 Route Nationale, Oujda 60000");
    strcpy(magasins[7].Hours, " Lundi - Samedi : 8h30 - 18h00");
    strcpy(magasins[7].Contact, " +212 5365-21515");
    strcpy(magasins[7].Rating, " \2 \2 \2 \2 \2 \2 \2 \1 \1 \1  (7/10)");

    printf("\n\n\n\t\t\t\t\t\t\t\t\t            Voici la liste de nos magasins:\n\n");

    for (int i = 0; i < 8; i++) {
        printf("\t\t\t\t\t\t\t\t\t\t\t     %d. %s \n", i+1, magasins[i].ville);
    }

    printf("\t\t\t\t\t\t\t\t\t\t\t     9. retour au menu principal \n");

    int choix_mag;
    printf("\n\n\n\t\t\t\t\t\t\t\t  Veuillez entrer le numéro du magasin pour voir plus d'informations: ");
    scanf("%d", &choix_mag);

    if (choix_mag >= 1 && choix_mag <= 8) {
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t    Informations sur le magasin %d:\n\n\n", choix_mag);
        printf("\t\t\t\t\t\t\t\tVille                  : %s\n\n", magasins[choix_mag-1].ville);
        printf("\t\t\t\t\t\t\t\tAdresse                : %s\n\n", magasins[choix_mag-1].adresse);
        printf("\t\t\t\t\t\t\t\tHoraires d'ouverture   : %s\n\n", magasins[choix_mag-1].Hours);
        printf("\t\t\t\t\t\t\t\tFix                    : %s\n\n", magasins[choix_mag-1].Contact);
        printf("\t\t\t\t\t\t\t\tRating                 : %s\n\n\n", magasins[choix_mag-1].Rating);
    } else if (choix_mag == 9) {
        system("cls");
        afficher_titre();
        afficher_menu_principal();
    } else {
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\tChoix invalide.\n\n\n");
    }
}
void cataf( int choix_parfum , int i, int montantTotal) {

    CataF cataf[9];

                            strcpy(cataf[0].nom, "charmante");
                            cataf[0].prix = 120;
                            strcpy(cataf[0].alcohol, "20.00");
                            strcpy(cataf[0].taille, "50mL  ");
                            strcpy(cataf[0].duree, "6 heures  ");
                            strcpy(cataf[0].notesolfactives, "citron, jasmin, bambou, cèdre");


                            strcpy(cataf[1].nom, "Aden");
                            cataf[1].prix = 150;
                            strcpy(cataf[1].alcohol, "20.00");
                            strcpy(cataf[1].taille, "50mL  ");
                            strcpy(cataf[1].duree, "12 heures  ");
                            strcpy(cataf[1].notesolfactives, "fleur d'oranger, patchouli, vanille, pomme verte");

                            strcpy(cataf[2].nom, "Elegance");
                            cataf[2].prix = 220;
                            strcpy(cataf[2].alcohol, "20.00");
                            strcpy(cataf[2].taille, "50mL  ");
                            strcpy(cataf[2].duree, "9 heures  ");
                            strcpy(cataf[2].notesolfactives, "ylang-ylang, iris, bois de santal");


                            strcpy(cataf[3].nom, "Jasmine");
                            cataf[3].prix = 100;
                            strcpy(cataf[3].alcohol, "20.00");
                            strcpy(cataf[3].taille, "50mL  ");
                            strcpy(cataf[3].duree, "6 heures  ");
                            strcpy(cataf[3].notesolfactives, "jasmin, fraise,citron,caramel");


                            strcpy(cataf[4].nom, "Demoiselle");
                            cataf[4].prix = 180;
                            strcpy(cataf[4].alcohol, "20.00");
                            strcpy(cataf[4].taille, "50mL  ");
                            strcpy(cataf[4].duree, "8 heures  ");
                            strcpy(cataf[4].notesolfactives, " ylang-ylang, orchidée noire, vanille, patchouli");

                            strcpy(cataf[5].nom, "La rienne");
                            cataf[5].prix = 350;
                            strcpy(cataf[5].alcohol, "20.00");
                            strcpy(cataf[5].taille, "50mL ");
                            strcpy(cataf[5].duree, "7 heures ");
                            strcpy(cataf[5].notesolfactives, " fraise, violet, pivoine, jasmin, musc");


                            strcpy(cataf[6].nom, "Chic");
                            cataf[6].prix = 140;
                            strcpy(cataf[6].alcohol, "20.00");
                            strcpy(cataf[6].taille, "50mL ");
                            strcpy(cataf[6].duree, "6 heures ");
                            strcpy(cataf[6].notesolfactives, " bergamote, chocolat, citron");

                            strcpy(cataf[7].nom, "Rosea");
                            cataf[7].prix = 175;
                            strcpy(cataf[7].alcohol, "20.00");
                            strcpy(cataf[7].taille, "50mL ");
                            strcpy(cataf[7].duree, "6 heures ");
                            strcpy(cataf[7].notesolfactives, "fève tonka, miel, violet, Iris");


                            strcpy(cataf[8].nom, "Bella");
                            cataf[8].prix = 220;
                            strcpy(cataf[8].alcohol, "20.00");
                            strcpy(cataf[8].taille, "50mL ");
                            strcpy(cataf[8].duree, "3 heures ");
                            strcpy(cataf[8].notesolfactives, "benjoin, bergamote,  pêche, rose");


                            strcpy(cataf[9].nom, "Gazelle");
                            cataf[9].prix = 200;
                            strcpy(cataf[9].alcohol, "20.00");
                            strcpy(cataf[9].taille, "50mL ");
                            strcpy(cataf[9].duree, "9 heures ");
                            strcpy(cataf[9].notesolfactives, "musc, chocolat,citron, bois de santal");


                            printf("\n\n\n\t\t\t\t\t\t\t\t\t            Voici la liste de nos Parfums:\n\n");
                            for (int i = 0; i < 9; i++) {
                                 printf("\t\t\t\t\t\t\t\t\t\t\t     %d.      %s \n", i+1, cataf[i].nom);
                            }
                            printf("\n\n\t\t\t\t\t\t\t\tEntrez votre choix de parfum:  ");
                            scanf("%d", &choix_parfum);
                            if (choix_parfum >= 1 && choix_parfum <= 11) {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t    Informations sur le Parfum %d:\n\n\n", choix_parfum);
                                printf("\t\t\t\t\t\t\t\t============================================================\n");
                                printf("\t\t\t\t\t\t\t\t    Parfum                   : %s                             \n", cataf[choix_parfum-1].nom);
                                printf("\t\t\t\t\t\t\t\t    Alcool                   : %s                             \n", cataf[choix_parfum-1].alcohol);
                                printf("\t\t\t\t\t\t\t\t    Taille                   : %s                             \n", cataf[choix_parfum-1].taille);
                                printf("\t\t\t\t\t\t\t\t    Long%cvit%c                : %s                           \n",130,130, cataf[choix_parfum-1].duree);
                                printf("\t\t\t\t\t\t\t\t    Prix                     : %.2f                             \n",cataf[choix_parfum-1].prix);
                                printf("\t\t\t\t\t\t\t\t    notes olfactives         :%s                            \n",cataf[choix_parfum-1].notesolfactives);
                                printf("\t\t\t\t\t\t\t\t============================================================\n");
                                printf(" Entrer  1 si vous voulez choisir ce produit sinn tapez 2 pour retourner ");
                                scanf("%d",&i);

                                switch (i){
                                  case 1:

                                    montantTotal =+ cataf[choix_parfum-1].prix;
                                    break ;
                                  case 2:

                                    system("cls");
                                    afficher_catalogue();
                                    scanf("\n\t\t\t\t\t\t\t\t%d", &choix_parfum);


                                  default :
                                    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tChoix invalide.\n\n\n");
                                    break;
                                 }
                            } else {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\tChoix invalide.\n\n\n");
                                }

}
void catah( int choix_parfum) {

                            CataH catah[9];
                            strcpy(catah[0].nom, "Gentleman");
                            catah[0].prix = 120;
                            strcpy(catah[0].alcohol, "20.00");
                            strcpy(catah[0].taille, "50mL  ");
                            strcpy(catah[0].duree, "5 heures  ");
                            strcpy(catah[0].notesolfactives, "tabac, vanille, cacao, fèves tonka");


                            strcpy(catah[1].nom, "Homme vaut de l'or");
                            catah[1].prix = 130;
                            strcpy(catah[1].alcohol, "20.00");
                            strcpy(catah[1].taille, "50mL  ");
                            strcpy(catah[1].duree, "4 heures  ");
                            strcpy(catah[1].notesolfactives, "poivre noir, safran, cuir, tabac");


                            strcpy(catah[2].nom, "Roi");
                            catah[2].prix = 320;
                            strcpy(catah[2].alcohol, "20.00");
                            strcpy(catah[2].taille, "50mL  ");
                            strcpy(catah[2].duree, "9 heures  ");
                            strcpy(catah[2].notesolfactives, "lavande, clou de girofle, patchouli, mousse de chêne");


                            strcpy(catah[3].nom, "Lion");
                            catah[3].prix = 500;
                            strcpy(catah[3].alcohol, "20.00");
                            strcpy(catah[3].taille, "50mL  ");
                            strcpy(catah[3].duree, "12 heures  ");
                            strcpy(catah[3].notesolfactives, " bergamote, genièvre, bois de santal, ambre gris");


                            strcpy(catah[4].nom, "Wolf");
                            catah[4].prix = 150;
                            strcpy(catah[4].alcohol, "20.00");
                            strcpy(catah[4].taille, "50mL  ");
                            strcpy(catah[4].duree, "3 heures  ");
                            strcpy(catah[4].notesolfactives, "cardamome, bergamote, bois de cèdre, lavande");


                            strcpy(catah[5].nom, "L'homme fort");
                            catah[5].prix = 300;
                            strcpy(catah[5].alcohol, "20.00");
                            strcpy(catah[5].taille, "50mL ");
                            strcpy(catah[5].duree, "7 heures ");
                            strcpy(catah[5].notesolfactives, "mandarine, notes marines, cèdre, musc blanc");


                            strcpy(catah[6].nom, "Univers");
                            catah[6].prix = 190;
                            strcpy(catah[6].alcohol, "20.00");
                            strcpy(catah[6].taille, "50mL ");
                            strcpy(catah[6].duree, "6 heures ");
                            strcpy(catah[6].notesolfactives, "sel de mer, sauge, ambre gris");


                            strcpy(catah[7].nom, "Black elegance");
                            catah[7].prix = 175;
                            strcpy(catah[7].alcohol, "20.00");
                            strcpy(catah[7].taille, "50mL ");
                            strcpy(catah[7].duree, "7 heures ");
                            strcpy(catah[7].notesolfactives, "pamplemousse, baies roses, bois de gaïac, cuir");


                            strcpy(catah[8].nom, "Majestueux");
                            catah[8].prix = 220;
                            strcpy(catah[8].alcohol, "20.00");
                            strcpy(catah[8].taille, "50mL ");
                            strcpy(catah[8].duree, "8 heures ");
                            strcpy(catah[8].notesolfactives, "poivre noir, safran , clou de girofle, patchouli");


                            strcpy(catah[9].nom, "Dark");
                            catah[9].prix = 250;
                            strcpy(catah[9].alcohol, "20.00");
                            strcpy(catah[9].taille, "50mL ");
                            strcpy(catah[9].duree, "7 heures ");
                            strcpy(catah[9].notesolfactives, "bergamote, patchouli, bois de cèdre");


                            printf("\n\n\n\t\t\t\t\t\t\t\t\t            Voici la liste de nos parfums:\n\n");
                            for (int i = 0; i < 9; i++) {
                                 printf("\t\t\t\t\t\t\t\t\t\t\t     %d.      %s \n", i+1, catah[i].nom);
                            }
                            printf("\t\t\t\t\t\t\t\tEntrez votre choix de parfum: ");
                            scanf("%d", &choix_parfum);
                            if (choix_parfum >= 1 && choix_parfum <= 11) {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t    Informations sur le Parfum %d:\n\n\n", choix_parfum);
                                printf("\t\t\t\t\t\t\t\t=============================================================\n");
                                printf("\t\t\t\t\t\t\t\t    Parfum                   : %s                              \n", catah[choix_parfum-1].nom);
                                printf("\t\t\t\t\t\t\t\t    Alcool                   : %s                             \n", catah[choix_parfum-1].alcohol);
                                printf("\t\t\t\t\t\t\t\t    Taille                   : %s                             \n", catah[choix_parfum-1].taille);
                                printf("\t\t\t\t\t\t\t\t    Long%cvit%c                : %s                           \n",130,130, catah[choix_parfum-1].duree);
                                printf("\t\t\t\t\t\t\t\t    Prix                     : %.2f                            \n",catah[choix_parfum-1].prix);
                                printf("\t\t\t\t\t\t\t\t    notes olfactives         :%s                            \n",catah[choix_parfum-1].notesolfactives);
                                printf("\t\t\t\t\t\t\t\t=============================================================\n");

                            } else {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\tChoix invalide.\n\n\n");
                                }
                                }
void catafille (int choix_parfum) {

                            CataFILLE catafille[9];
                            strcpy(catafille[0].nom, "Angel");
                            catafille[0].prix = 120;
                            strcpy(catafille[0].alcohol, "20.00");
                            strcpy(catafille[0].taille, "50mL  ");
                            strcpy(catafille[0].duree, "7 heures  ");
                            strcpy(catafille[0].notesolfactives, "la framboise, la vanille,le muguet,musc.");



                            strcpy(catafille[1].nom, "Papillon Dore");
                            catafille[1].prix = 130;
                            strcpy(catafille[1].alcohol, "20.00");
                            strcpy(catafille[1].taille, "50mL  ");
                            strcpy(catafille[1].duree, "5 heures  ");
                            strcpy(catafille[1].notesolfactives, "citron,chocolat,jasmin");


                            strcpy(catafille[2].nom, "Fleura");
                            catafille[2].prix = 100;
                            strcpy(catafille[2].alcohol, "20.00");
                            strcpy(catafille[2].taille, "50mL  ");
                            strcpy(catafille[2].duree, "9 heures  ");
                            strcpy(catafille[2].notesolfactives, "le peche,le musc blanc ,le coton de sucre");


                            strcpy(catafille[3].nom, "Princesse");
                            catafille[3].prix = 150;
                            strcpy(catafille[3].alcohol, "00.00");
                            strcpy(catafille[3].taille, "50mL  ");
                            strcpy(catafille[3].duree, "6 heures  ");
                            strcpy(catafille[3].notesolfactives, "rose, banane, caramel");


                            strcpy(catafille[4].nom, "Brillante");
                            catafille[4].prix = 150;
                            strcpy(catafille[4].alcohol, "20.00");
                            strcpy(catafille[4].taille, "50mL  ");
                            strcpy(catafille[4].duree, "6 heures  ");
                            strcpy(catafille[4].notesolfactives, "l'ambre, bonbon, fleur d oranger.");


                            printf("\n\n\n\t\t\t\t\t\t\t\t\t            Voici la liste de nos parfums:\n\n");
                            for (int i = 0; i < 5; i++) {
                                 printf("\t\t\t\t\t\t\t\t\t\t\t     %d.      %s \n", i+1, catafille[i].nom);
                            }
                            printf("\t\t\t\t\t\t\t\tEntrez votre choix de parfum: ");
                            scanf("%d", &choix_parfum);
                            if (choix_parfum >= 1 && choix_parfum <= 5) {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t    Informations sur le Parfum %d:\n\n\n", choix_parfum);
                                printf("\t\t\t\t\t\t\t\t=============================================================\n");
                                printf("\t\t\t\t\t\t\t\t   Parfum                   : %s                             \n", catafille[choix_parfum-1].nom);
                                printf("\t\t\t\t\t\t\t\t   Alcool                   : %s                             \n", catafille[choix_parfum-1].alcohol);
                                printf("\t\t\t\t\t\t\t\t   Taille                   : %s                             \n", catafille[choix_parfum-1].taille);
                                printf("\t\t\t\t\t\t\t\t   Long%cvit%c                : %s                           \n",130,130, catafille[choix_parfum-1].duree);
                                printf("\t\t\t\t\t\t\t\t   Prix                     : %.2f                             \n",catafille[choix_parfum-1].prix);
                                printf("\t\t\t\t\t\t\t\t    notes olfactives         :%s                            \n",catafille[choix_parfum-1].notesolfactives);
                                printf("\t\t\t\t\t\t\t\t=============================================================\n");

                            } else {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\tChoix invalide.\n\n\n");
                                }
        }
void cataboy (int choix_parfum){

                            CataBOY cataboy[9];
                            strcpy(cataboy[0].nom, "Hero");
                            cataboy[0].prix = 180;
                            strcpy(cataboy[0].alcohol, " 00.00");
                            strcpy(cataboy[0].taille, " 50mL  ");
                            strcpy(cataboy[0].duree, " 7 heures  ");
                            strcpy(cataboy[0].notesolfactives, "le santal , le patchouli, cedre, musc blanc");


                            strcpy(cataboy[1].nom, "Dreamer");
                            cataboy[1].prix = 120;
                            strcpy(cataboy[1].alcohol, " 00.00");
                            strcpy(cataboy[1].taille, " 50mL  ");
                            strcpy(cataboy[1].duree, " 5 heures  ");
                            strcpy(cataboy[1].notesolfactives, " musc noir ,sel de mer, sauge.");


                            strcpy(cataboy[2].nom, "Aventureux ");
                            cataboy[2].prix = 130;
                            strcpy(cataboy[2].alcohol, " 00.00");
                            strcpy(cataboy[2].taille, " 50mL  ");
                            strcpy(cataboy[2].duree, " 7 heures  ");
                            strcpy(cataboy[2].notesolfactives, "le poivre, la cannelle, le gingembre ,la cardamome.");


                            strcpy(cataboy[3].nom, "Eclair de Feu");
                            cataboy[3].prix = 150;
                            strcpy(cataboy[3].alcohol, " 00.00");
                            strcpy(cataboy[3].taille, " 50mL  ");
                            strcpy(cataboy[3].duree, " 3 heures  ");
                            strcpy(cataboy[3].notesolfactives, "la mandarine, cuir, patchouli");


                            strcpy(cataboy[4].nom, "Nuage Doux");
                            cataboy[4].prix = 200;
                            strcpy(cataboy[4].alcohol, " 00.00");
                            strcpy(cataboy[4].taille, " 50mL  ");
                            strcpy(cataboy[4].duree, " 6 heures  ");
                            strcpy(cataboy[4].notesolfactives, "basilic, bergamote, bois de cedre");


                            printf("\n\n\n\t\t\t\t\t\t\t\t\t            Voici la liste de nos parfums:\n\n");
                            for (int i = 0; i < 5; i++) {
                                 printf("\t\t\t\t\t\t\t\t\t\t\t     %d.      %s \n", i+1, cataboy[i].nom);
                            }
                            printf("\t\t\t\t\t\t\t\tEntrez votre choix de parfum: ");
                            scanf("%d", &choix_parfum);
                            if (choix_parfum >= 1 && choix_parfum <= 5) {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\t    Informations sur le Parfum %d:\n\n\n", choix_parfum);
                                printf("\t\t\t\t\t\t\t\t ============================================================\n");
                                printf("\t\t\t\t\t\t\t\t   Parfum                   : %s                             \n", cataboy[choix_parfum-1].nom);
                                printf("\t\t\t\t\t\t\t\t   Alcool                   : %s                             \n", cataboy[choix_parfum-1].alcohol);
                                printf("\t\t\t\t\t\t\t\t   Taille                   : %s                             \n", cataboy[choix_parfum-1].taille);
                                printf("\t\t\t\t\t\t\t\t   Long%cvit%c                : %s                           \n",130,130, cataboy[choix_parfum-1].duree);
                                printf("\t\t\t\t\t\t\t\t   Prix                     : %.2f                             \n",cataboy[choix_parfum-1].prix);
                                printf("\t\t\t\t\t\t\t\t    notes olfactives         :%s                            \n",cataboy[choix_parfum-1].notesolfactives);
                                printf("\t\t\t\t\t\t\t\t ============================================================\n");

                            } else {
                                printf("\n\n\n\t\t\t\t\t\t\t\t\t\tChoix invalide.\n\n\n");
                                }

}

