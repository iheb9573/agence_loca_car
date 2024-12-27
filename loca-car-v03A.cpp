#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <unistd.h>

#define MAX_VOITURES 100
#define MAX_CLIENTS 100
#define MAX_LOCATIONS 100

typedef struct Voiture {
    char matricule[10];
    char marque[15];
    float prixlocation;
    char datefinassurance[10];
} Voiture;

typedef struct Client {
    char cin[10];
    char prenom_nom[25];
    char adresse[30];
    char telephone[9];
} Client;

typedef struct Location {
    int id_location;
    char id_voiture[10];
    char id_client[10];
    int nombre_jours;
    float montant;
} Location;

// Prototypes de fonctions
void ajouter_voiture(Voiture* voitures, int* nb_voitures);
void ajouter_client(Client* clients, int* nb_clients);
void ajouter_location(Location* locations, int* nb_locations, Voiture* voitures, int nb_voitures, Client* clients, int nb_clients);
void afficher_voitures(Voiture* voitures, int nb_voitures);
void afficher_clients(Client* clients, int nb_clients);
void afficher_locations(Location* locations, int nb_locations);
void sauvegarder_voitures(Voiture* voitures, int nb_voitures);
void sauvegarder_clients(Client* clients, int nb_clients);
void sauvegarder_locations(Location* locations, int nb_locations);
void charger_voitures(Voiture* voitures, int* nb_voitures);
void charger_clients(Client* clients, int* nb_clients);
void charger_locations(Location* locations, int* nb_locations);
void supprimer_voiture(Voiture* voitures, int* nb_voitures, const char* matricule);
void supprimer_client(Client* clients, int* nb_clients, const char* cin);
void modifier_voiture(Voiture* voitures, int nb_voitures, const char* matricule);
void modifier_client(Client* clients, int nb_clients, const char* cin);
void rechercher_voiture(Voiture* voitures, int nb_voitures, const char* matricule);
void rechercher_client(Client* clients, int nb_clients, const char* cin);
void menu_gestion_voitures(Voiture* voitures, int* nb_voitures);
void menu_gestion_clients(Client* clients, int* nb_clients);
//----------- Gestion Des Voiturs -------------------------------------
//---------------------------------------------------------------------

void gest_voi();              // Done
void gest_voi_modf_ppj();     // Done
void gest_voi_supp();         // Done
void gest_voi_rech();         // Done
void gest_voi_modf_mat();     // Done
void gest_voi_modf_mar();     // Done
void gest_voi_modf_ppj();     // Done
void gest_voi_modf_dfa();     // Done
void Gest_voi_modf();         // Done
void gest_voi_aff();          // Done

//----------- Gestion Des Clients -------------------------------------
//---------------------------------------------------------------------

void gest_clt_modif();       // Done
void gest_clt_modif_add();   // Done
void gest_clt_modif_pr();    // Done
void gest_clt_modif_tel();   // Done
void gest_clt_rech();        // Done
void gest_clt_modf_cin();    // Done
void gest_clt_aff();         // Done 
void gest_clt_sup();         // Done
//---------------------------------------------------------------------
void Menu_princ();
void Menu_Gest_voiture();
void Menu_Gest_client();
void Menu_Gest_location();
void Menu_Gest_location_aff();
void Final_animation();
//*********************************************
void animation() {
    int x;
    double y;
    system("color a");

    char text1[] = "\n\n\n\n\n \t\t\t\t\t\t.....Bienvenue Dans.....  ";
    char text2[] = " \t\t\t\t\t\t         AGENCE  ";
    char text3[] = " \t\t\t\t\t\t\t   DE ";
    char text4[] = " \t\t\t\t\t\t   LOCATION DE VOITURE ";
    char text6[] = "\n\t\t\t\t\t\t.........................";
    char text5[] = "\n\n\t\t\t\t\t\t        LOCA CAR";
    char text7[] = "\n\t\t\t\t\t\t   Projet Developpe Par : ";
    char text8[] = "\n\t\t\t\t\t\t      Iheb Ben Jeddy";
    char text9[] = "\n\t\t\t\t\t\t      Ahmad Argoubi";
    char text10[] = "\n\t\t\t\t\t\t      Adam Gannouni";

    char* texts[] = {text1, text2, text3, text4, text5, text6, text7, text8, text9, text10};
    int numTexts = sizeof(texts) / sizeof(texts[0]);

    for (int i = 0; i < numTexts; i++) {
        for (x = 0; texts[i][x] != '\0'; x++) {
            printf("%c", texts[i][x]);
            for (y = 0; y <= 8888888; y++) {
                // Delay loop
            }
        }
        printf("\n\n");
    }

    sleep(10);
    system("cls");
}

//*******************************************MAIN***************************************************************************

int main() {
	
	
	//animation();
	
    Voiture voitures[MAX_VOITURES];
    Client clients[MAX_CLIENTS];
    Location locations[MAX_LOCATIONS];
    int nb_voitures = 0, nb_clients = 0, nb_locations = 0;

    // Charger les données depuis les fichiers
    charger_voitures(voitures, &nb_voitures);
    charger_clients(clients, &nb_clients);
    charger_locations(locations, &nb_locations);

    int choix;
    do {
//        printf("\nMenu:\n");
//        printf("1. Gestion des voitures\n");
//		printf("2. Gestion des clients\n");
//		printf("3. Ajouter une location\n");
//		printf("4. Afficher les locations\n");
//		printf("5. Quitter\n");
//        printf("Choisissez une option: ");
		Menu_princ();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                menu_gestion_voitures(voitures, &nb_voitures);
                break;
            case 2:
                menu_gestion_clients(clients, &nb_clients);
                break;
            case 3:
                ajouter_location(locations, &nb_locations, voitures, nb_voitures, clients, nb_clients);
                break;
            case 4:
                afficher_locations(locations, nb_locations);
                break;
            case 5:
            	Final_animation();
                printf("3awnina madam\n");
                sleep(5);
                break;
            default:
                printf("Choix invalide!\n");
        }
    } while (choix != 5);

    // Sauvegarder les données dans les fichiers
    sauvegarder_voitures(voitures, nb_voitures);
    sauvegarder_clients(clients, nb_clients);
    sauvegarder_locations(locations, nb_locations);

    return 0;
}

void ajouter_voiture(Voiture* voitures, int* nb_voitures) {
    if (*nb_voitures >= MAX_VOITURES) {
        printf("Limite de voitures atteinte.\n");
        return;
    }
    Voiture* v = &voitures[*nb_voitures];
    printf("Entrer matricule: ");
    scanf("%s", v->matricule);
    printf("Entrer marque: ");
    scanf("%s", v->marque);
    printf("Entrer prix de location: ");
    scanf("%f", &v->prixlocation);
    printf("Entrer date de fin d'assurance : ");
    scanf("%s", v->datefinassurance);
    (*nb_voitures)++;
}

void ajouter_client(Client* clients, int* nb_clients) {
    if (*nb_clients >= MAX_CLIENTS) {
        printf("Limite de clients atteinte.\n");
        return;
    }
    Client* c = &clients[*nb_clients];
    printf("Entrer CIN: ");
    scanf("%s", c->cin);
    printf("Entrer prénom et nom: ");
    scanf(" %[^\n]", c->prenom_nom);
    printf("Entrer adresse: ");
    scanf(" %[^\n]", c->adresse);
    printf("Entrer téléphone: ");
    scanf("%s", c->telephone);
    (*nb_clients)++;
}

void ajouter_location(Location* locations, int* nb_locations, Voiture* voitures, int nb_voitures, Client* clients, int nb_clients) {
	Menu_Gest_location();
    if (*nb_locations >= MAX_LOCATIONS) {
        printf("Limite de locations atteinte.\n");
        return;
    }
    Location* l = &locations[*nb_locations];
    printf("\t\tEntrer identifiant de location: ");
    scanf("%d", &l->id_location);
    char cin[10], matricule[10];
    printf("\t\tEntrer CIN du client: ");
    scanf("%s", cin);
    printf("\t\tEntrer matricule de la voiture: ");
    scanf("%s", matricule);

    // Vérification de l'existence du client et de la voiture
    int client_found = 0, voiture_found = 0;
    for (int i = 0; i < nb_clients; i++) {
        if (strcmp(clients[i].cin, cin) == 0) {
            client_found = 1;
            break;
        }
    }
    for (int i = 0; i < nb_voitures; i++) {
        if (strcmp(voitures[i].matricule, matricule) == 0) {
            voiture_found = 1;
            break;
        }
    }
    if (!client_found) {
        printf("Client non trouvé.\n");
        return;
    }
    if (!voiture_found) {
        printf("Voiture non trouvée.\n");
        return;
    }
    strcpy(l->id_client, cin);
    strcpy(l->id_voiture, matricule);
    printf("Entrer le nombre de jours de location: ");
    scanf("%d", &l->nombre_jours);

    // Calculer le montant
    for (int i = 0; i < nb_voitures; i++) {
        if (strcmp(voitures[i].matricule, matricule) == 0) {
            l->montant = l->nombre_jours * voitures[i].prixlocation;
            break;
        }
    }
    printf("Montant à payer: %.2f\n", l->montant);
    (*nb_locations)++;
}

void afficher_voitures(Voiture* voitures, int nb_voitures) {
    printf("\t\tListe des voitures:\n");
    printf("\t\t-------------------------------------------------\n");
    printf("\t\t| Matricule | Marque       | Prix    | Assurance |\n");
    printf("\t\t-------------------------------------------------\n");
    for (int i = 0; i < nb_voitures; i++) {
        printf("\t\t| %-9s | %-12s | %-7.2f | %-9s |\n",
               voitures[i].matricule, voitures[i].marque, voitures[i].prixlocation, voitures[i].datefinassurance);
    }
    printf("\t\t-------------------------------------------------\n");
}

void afficher_clients(Client* clients, int nb_clients) {
    printf("\t\tListe des clients:\n");
    printf("-------------------------------------------------------------\n");
    printf("\t\t| CIN       | Nom                   | Adresse               | Téléphone |\n");
    printf("\t\t-------------------------------------------------------------\n");
    for (int i = 0; i < nb_clients; i++) {
        printf("\t\t| %-9s | %-20s | %-20s | %-9s |\n",
               clients[i].cin, clients[i].prenom_nom, clients[i].adresse, clients[i].telephone);
    }
    printf("\t\t-------------------------------------------------------------\n");
}

void afficher_locations(Location* locations, int nb_locations) {
	Menu_Gest_location_aff();
    printf("\t\tListe des locations:\n");
    printf("\t\t--------------------------------------------------------------------------\n");
    printf("\t\t| ID Location | ID Voiture | ID Client | Jours | Montant |\n");
    printf("\t\t--------------------------------------------------------------------------\n");
    for (int i = 0; i < nb_locations; i++) {
        printf("\t\t| %-11d | %-10s | %-9s | %-5d | %-7.2f |\n",
               locations[i].id_location, locations[i].id_voiture, locations[i].id_client, locations[i].nombre_jours, locations[i].montant);
    }
    printf("\t\t--------------------------------------------------------------------------\n");
}

void supprimer_voiture(Voiture* voitures, int* nb_voitures, const char* matricule) {
    int found = 0;
    for (int i = 0; i < *nb_voitures; i++) {
        if (strcmp(voitures[i].matricule, matricule) == 0) {
            found = 1;
            for (int j = i; j < *nb_voitures - 1; j++) {
                voitures[j] = voitures[j + 1];
            }
            (*nb_voitures)--;
            printf("Voiture supprimée.\n");
            break;
        }
    }
    if (!found) {
        printf("Voiture non trouvée.\n");
    }
}

void supprimer_client(Client* clients, int* nb_clients, const char* cin) {
    int found = 0;
    for (int i = 0; i < *nb_clients; i++) {
        if (strcmp(clients[i].cin, cin) == 0) {
            found = 1;
            for (int j = i; j < *nb_clients - 1; j++) {
                clients[j] = clients[j + 1];
            }
            (*nb_clients)--;
            printf("Client supprimé.\n");
            break;
        }
    }
    if (!found) {
        printf("Client non trouvé.\n");
    }
}

void modifier_voiture(Voiture* voitures, int nb_voitures, const char* matricule) {
    for (int i = 0; i < nb_voitures; i++) {
        if (strcmp(voitures[i].matricule, matricule) == 0) {
            printf("Entrer nouvelle marque: ");
            scanf("%s", voitures[i].marque);
            printf("Entrer nouveau prix de location: ");
            scanf("%f", &voitures[i].prixlocation);
            printf("Entrer nouvelle date de fin d'assurance: ");
            scanf("%s", voitures[i].datefinassurance);
            printf("Voiture modifiée.\n");
            return;
        }
    }
    printf("Voiture non trouvée.\n");
}

void modifier_client(Client* clients, int nb_clients, const char* cin) {
    for (int i = 0; i < nb_clients; i++) {
        if (strcmp(clients[i].cin, cin) == 0) {
            printf("Entrer nouveau prénom et nom: ");
            scanf(" %[^\n]", clients[i].prenom_nom);
            printf("Entrer nouvelle adresse: ");
            scanf(" %[^\n]", clients[i].adresse);
            printf("Entrer nouveau téléphone: ");
            scanf("%s", clients[i].telephone);
            printf("Client modifié.\n");
            return;
        }
    }
    printf("Client non trouvé.\n");
}

void rechercher_voiture(Voiture* voitures, int nb_voitures, const char* matricule) {
    for (int i = 0; i < nb_voitures; i++) {
        if (strcmp(voitures[i].matricule, matricule) == 0) {
            printf("Voiture trouvée: Matricule: %s, Marque: %s, Prix: %.2f, Date d'assurance: %s\n",
                   voitures[i].matricule, voitures[i].marque, voitures[i].prixlocation, voitures[i].datefinassurance);
            return;
        }
    }
    printf("Voiture non trouvée.\n");
}

void rechercher_client(Client* clients, int nb_clients, const char* cin) {
    for (int i = 0; i < nb_clients; i++) {
        if (strcmp(clients[i].cin, cin) == 0) {
            printf("Client trouvé: CIN: %s, Nom: %s, Adresse: %s, Téléphone: %s\n",
                   clients[i].cin, clients[i].prenom_nom, clients[i].adresse, clients[i].telephone);
            return;
        }
    }
    printf("Client non trouvé.\n");
}
void charger_voitures(Voiture* voitures, int* nb_voitures) {
    FILE* file = fopen("voitures.txt", "r");
    if (file) {
        while (fscanf(file, "%s %s %f %s", voitures[*nb_voitures].matricule,
                      voitures[*nb_voitures].marque, &voitures[*nb_voitures].prixlocation, voitures[*nb_voitures].datefinassurance) == 4) {
            (*nb_voitures)++;
        }
        fclose(file);
    }
}

void charger_clients(Client* clients, int* nb_clients) {
    FILE* file = fopen("clients.txt", "r");
    if (file) {
        while (fscanf(file, "%s %s %s %s", clients[*nb_clients].cin, clients[*nb_clients].prenom_nom,
                      clients[*nb_clients].adresse, clients[*nb_clients].telephone) == 4) {
            (*nb_clients)++;
        }
        fclose(file);
    }
}

void charger_locations(Location* locations, int* nb_locations) {
    FILE* file = fopen("locations.txt", "r");
    if (file) {
        while (fscanf(file, "%d %s %s %d %f", &locations[*nb_locations].id_location,
                      locations[*nb_locations].id_voiture, locations[*nb_locations].id_client,
                      &locations[*nb_locations].nombre_jours, &locations[*nb_locations].montant) == 5) {
            (*nb_locations)++;
        }
        fclose(file);
    }
}
void sauvegarder_voitures(Voiture* voitures, int nb_voitures) {
    FILE* file = fopen("voitures.txt", "w");
    for (int i = 0; i < nb_voitures; i++) {
        fprintf(file, "%s %s %.2f %s\n", voitures[i].matricule, voitures[i].marque,
                voitures[i].prixlocation, voitures[i].datefinassurance);
    }
    fclose(file);
}

void sauvegarder_clients(Client* clients, int nb_clients) {
    FILE* file = fopen("clients.txt", "w");
    for (int i = 0; i < nb_clients; i++) {
        fprintf(file, "%s %s %s %s\n", clients[i].cin, clients[i].prenom_nom,
                clients[i].adresse, clients[i].telephone);
    }
    fclose(file);
}

void sauvegarder_locations(Location* locations, int nb_locations) {
    FILE* file = fopen("locations.txt", "w");
    for (int i = 0; i < nb_locations; i++) {
        fprintf(file, "%d %s %s %d %.2f\n", locations[i].id_location, locations[i].id_voiture,
                locations[i].id_client, locations[i].nombre_jours, locations[i].montant);
    }
    fclose(file);
}

void menu_gestion_voitures(Voiture* voitures, int* nb_voitures) {
    int choix;
    do {
//        printf("\nGestion des voitures:\n");
//        printf("1. Ajouter une voiture\n");
//        printf("2. Afficher les voitures\n");
//        printf("3. Supprimer une voiture\n");
//        printf("4. Modifier une voiture\n");
//        printf("5. Rechercher une voiture\n");
//        printf("6. Retour au menu principal\n");
//        printf("Choisissez une option: ");
		Menu_Gest_voiture();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_voiture(voitures, nb_voitures);
                break;
            case 2:
                afficher_voitures(voitures, *nb_voitures);
                break;
            case 3:
                {
                    char matricule[10];
                    printf("Entrer le matricule de la voiture à supprimer: ");
                    scanf("%s", matricule);
                    supprimer_voiture(voitures, nb_voitures, matricule);
                }
                break;
            case 4:
                {
                    char matricule[10];
                    printf("Entrer le matricule de la voiture à modifier: ");
                    scanf("%s", matricule);
                    modifier_voiture(voitures, *nb_voitures, matricule);
                }
                break;
            case 5:
                {
                    char matricule[10];
                    printf("Entrer le matricule de la voiture à rechercher: ");
                    scanf("%s", matricule);
                    rechercher_voiture(voitures, *nb_voitures, matricule);
                }
                break;
            case 6:
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide!\n");
        }
    } while (choix != 6);
}

void menu_gestion_clients(Client* clients, int* nb_clients) {
    int choix;
    do {
//        printf("\nGestion des clients:\n");
//        printf("1. Ajouter un client\n");
//        printf("2. Afficher les clients\n");
//        printf("3. Supprimer un client\n");
//        printf("4. Modifier un client\n");
//        printf("5. Rechercher un client\n");
//        printf("6. Retour au menu principal\n");
//        printf("Choisissez une option: ");
		Menu_Gest_client();
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_client(clients, nb_clients);
                break;
            case 2:
                afficher_clients(clients, *nb_clients);
                break;
            case 3:
                {
                    char cin[10];
                    printf("Entrer le CIN du client à supprimer: ");
                    scanf("%s", cin);
                    supprimer_client(clients, nb_clients, cin);
                }
                break;
            case 4:
                {
                    char cin[10];
                    printf("Entrer le CIN du client à modifier: ");
                    scanf("%s", cin);
                    modifier_client(clients, *nb_clients, cin);
                }
                break;
            case 5:
                {
                    char cin[10];
                    printf("Entrer le CIN du client à rechercher: ");
                    scanf("%s", cin);
                    rechercher_client(clients, *nb_clients, cin);
                }
                break;
            case 6:
                printf("Retour au menu principal.\n");
                break;
            default:
                printf("Choix invalide!\n");
        }
    } while (choix != 6);
}
void Menu_princ()
{    
	system("color a");
	char tmpbuf[128],datebuf[128];

		_strtime( tmpbuf );

		_strdate( datebuf );
        
		
		printf("\n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
		printf("\n\t\t  \xba %s \xba \xba     AGENCE DE LOCATION DE VOITURES LOCA CAR    \xba \xba %s \xba ",tmpbuf,datebuf);
		printf("\n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
		
		printf("\n");
		
	printf("        \n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  1  %c %c%c  Gestion des voitures    %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  2  %c %c%c  Gestion des clients     %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  3  %c %c%c  Ajouter une location    %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  4  %c %c%c  Afficher les locations  %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  5  %c %c%c         Retour           %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("         \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
//	printf("\n");
	printf("          \n\t          \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
    printf("          \n\t          \xba %c          %c%c%c%c%c%c DONNES VOTRE CHOIX :         %c \xba",219,175,175,175,175,175,175,219);
	printf("          \n\t          \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	printf("\n");
}
void Menu_Gest_voiture(){
	printf("        \n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  1  %c %c%c  Ajouter une voiture     %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  2  %c %c%c  Afficher les voitures   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  3  %c %c%c  Supprimer une voiture   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  4  %c %c%c  Modifier une voiture    %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  5  %c %c%c  Rechercher une voiture  %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  6  %c %c%c Retour au menu principal %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("         \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	printf("          \n\t          \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
    printf("          \n\t          \xba %c          %c%c%c%c%c%c DONNES VOTRE CHOIX :         %c \xba",219,175,175,175,175,175,175,219);
	printf("          \n\t          \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	printf("\n");
}
void Menu_Gest_client(){
	printf("        \n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  1  %c %c%c  Ajouter un client       %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  2  %c %c%c  Afficher les clients    %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  3  %c %c%c  Supprimer unclient      %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  4  %c %c%c  Modifier un client      %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  5  %c %c%c  Rechercher unclient     %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  6  %c %c%c Retour au menu principal %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("         \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	printf("          \n\t          \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
    printf("          \n\t          \xba %c          %c%c%c%c%c%c DONNES VOTRE CHOIX :         %c \xba",219,175,175,175,175,175,175,219);
	printf("          \n\t          \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	printf("\n");
}
void Menu_Gest_location()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  3  %c %c     Gestion des location      %c  %c  Ajoute     %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
   	printf("\n");
}
void Menu_Gest_location_aff()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  4  %c %c     Gestion des location      %c  %c  Affichage  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
   	printf("\n");
}
void Final_animation()
{
	system("cls");
	system("COLOR 0B");
	 			
	printf("\n\n\n\n\n\n\n");
	printf("        **     *********  *********  **********  **   ******   **       **\n");       
	printf("      ******   *********  *********  **********  **  ********  ***      **\n");
	printf("     ********  **         **             **      **  **    **  ****     **\n");
	printf("    ***        **         **             **      **  **    **  ** **    **\n");
	printf("    **         *********  *********      **      **  **    **  **  **   **\n");
	printf("    **         *********  *********      **      **  **    **  **   **  **\n");
	printf("    **    ***  **                **      **      **  **    **  **    ** **\n");
	printf("    ***   ***  **                **      **      **  **    **  **     ****\n");
	printf("     ********  *********  *********      **      **  ********  **      ***\n");
	printf("      *****    *********  *********      **      **   ******   **       **\n");
	printf("\n\n\n\n");
		sleep(2);            /* c'est le temps d'attent*/
	system("cls");


	printf("\n\n\n");
	printf("                             ********    *********                         \n");
	printf("                             *********   *********                         \n");
	printf("                             **     ***  **                                \n");
	printf("                             **     ***  **                                \n");
	printf("                             **     ***  *********                         \n");
	printf("                             **     ***  *********                         \n");
	printf("                             **     ***  **                                \n");
	printf("     	                     **     ***  **                                \n");
	printf("                             *********   *********                         \n");
	printf("                             ********    *********                         \n");
		sleep(2);            /* c'est le temps d'attent*/
	system("cls");
	

	printf("\n\n\n\n");
	printf(" **         ******    *******   ********** ********  **   ******    **       ** \n");         
	printf(" **        *********  *******   ********** ********  **  ********   ***      ** \n");      
	printf(" **        **     **  **        **      **    **     **  **    **   ***      ** \n");
	printf(" **        **     **  **        **      **    **     **  **    **   ** **    ** \n");
	printf(" **        **     **  **        **********    **     **  **    **   **  **   ** \n");
	printf(" **        **     **  **        **      **    **     **  **    **   **   **  ** \n");
	printf(" **        **     **  **        **      **    **     **  **    **   **    ** ** \n");
	printf(" **        **     **  **        **      **    **     **  **    **   **     **** \n");
	printf(" ******    *********  ******    **      **    **     **  ********   **      *** \n");
	printf(" ******     *******   *******   **      **    **     **   ******    **       ** \n");
	printf("\n\n\n\n");
		sleep(2);            /* c'est le temps d'attent*/
	system("cls");
	 			printf("\n\n\n\n\n\n\n");
	printf("   **         ******    *******   **********   \n");         
	printf("   **        *********  *******   **********   \n");      
	printf("   **        **     **  **        **      **   \n");
	printf("   **        **     **  **        **      **   \n");
	printf("   **        **     **  **        **********   \n");
	printf("   **        **     **  **        **      **   \n");
	printf("   **        **     **  **        **      **   \n");
	printf("   **        **     **  **        **      **   \n");
	printf("   ******    *********  ******    **      **   \n");
	printf("   ******     *******   *******   **      **          \n");
	printf("\n\n\n\n\n\n\n");

	sleep(2);            /* c'est le temps d'attent*/
	system("cls");
		printf("\n\n\n\n\n\n\n");
	printf(" \t\t\t\t\t\t\t   ***********         ********     ************\n");         
	printf(" \t\t\t\t\t\t\t   ************        ********     ***     ****  \n");      
	printf(" \t\t\t\t\t\t\t   ***                 **    **     ***     ***\n");
	printf(" \t\t\t\t\t\t\t   ***                 **    **     ***********\n");
	printf(" \t\t\t\t\t\t\t   ***                 ********     *******\n");
	printf(" \t\t\t\t\t\t\t   ***                 **    **     *** ****\n");
	printf(" \t\t\t\t\t\t\t   ***                 **    **     ***  ****\n");
	printf(" \t\t\t\t\t\t\t   ************        **    **     ***   *****\n");
	printf(" \t\t\t\t\t\t\t   *************       **    **     ***    *****\n");
	printf("\n\n\n\n\n\n\n");

	sleep(2);
	system("cls");
		printf("\n\n\n\n\n\n\n");
	printf("   **         ******    *******   **********                        ***********         ********     ************\n");         
	printf("   **        *********  *******   **********                        ************        ********     ****    ****  \n");      
	printf("   **        **     **  **        **      **                        ***                 **    **     ****    ***\n");
	printf("   **        **     **  **        **      **                        ***                 **    **     ***********\n");
	printf("   **        **     **  **        **********                        ***                 ********     *******\n");
	printf("   **        **     **  **        **      **                        ***                 **    **     *** ****\n");
	printf("   **        **     **  **        **      **                        ***                 **    **     ***  ****\n");
	printf("   **        **     **  **        **      **   *************        ************        **    **     ***   *****\n");
	printf("   ******    *********  ******    **      **   *************        *************       **    **     ***    *****\n");
	printf("   ******     *******   *******   **      **          \n");
	printf("\n\n\n\n\n\n\n");

}






