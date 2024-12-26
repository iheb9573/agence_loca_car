#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

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
    char date_sortie[10];
    char date_retour[10];
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
int simple_get_number_of_days(char* date_sortie, char* date_retour);
void convert_number_to_words(int n, char* words);
void display_amount_in_words(float amount);

int main() {
	
	//testes unitaires 
	const int jours=5;
	
	//
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
        printf("\nMenu:\n");
        printf("1. Ajouter une voiture\n");
        printf("2. Ajouter un client\n");
        printf("3. Ajouter une location\n");
        printf("4. Afficher les voitures\n");
        printf("5. Afficher les clients\n");
        printf("6. Afficher les locations\n");
        printf("7. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_voiture(voitures, &nb_voitures);
                break;
            case 2:
                ajouter_client(clients, &nb_clients);
                break;
            case 3:
                ajouter_location(locations, &nb_locations, voitures, nb_voitures, clients, nb_clients);
                break;
            case 4:
                afficher_voitures(voitures, nb_voitures);
                break;
            case 5:
                afficher_clients(clients, nb_clients);
                break;
            case 6:
                afficher_locations(locations, nb_locations);
                break;
            case 7:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide!\n");
        }
    } while (choix != 7);

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
    if (*nb_locations >= MAX_LOCATIONS) {
        printf("Limite de locations atteinte.\n");
        return;
    }
    Location* l = &locations[*nb_locations];
    printf("Entrer identifiant de location: ");
    scanf("%d", &l->id_location);
    char cin[10], matricule[10];
    printf("Entrer CIN du client: ");
    scanf("%s", cin);
    printf("Entrer matricule de la voiture: ");
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
    printf("Entrer date de sortie (JJ/MM/AAAA): ");
    scanf("%s", l->date_sortie);
    printf("Entrer date de retour (JJ/MM/AAAA): ");
    scanf("%s", l->date_retour);

    // Calculer le nombre de jours de location
    int days = simple_get_number_of_days(l->date_sortie, l->date_retour);
    if (days < 0) {
        printf("Erreur dans le calcul des jours.\n");
        return;
    }

    // Calculer le montant
    for (int i = 0; i < nb_voitures; i++) {
        if (strcmp(voitures[i].matricule, matricule) == 0) {
            l->montant = days * voitures[i].prixlocation;
            break;
        }
    }
    printf("Montant à payer: %.2f\n", l->montant);
    display_amount_in_words(l->montant);
    (*nb_locations)++;
}

void afficher_voitures(Voiture* voitures, int nb_voitures) {
    printf("Liste des voitures:\n");
    for (int i = 0; i < nb_voitures; i++) {
        printf("Matricule: %s, Marque: %s, Prix: %.2f, Date d'assurance: %s\n",
               voitures[i].matricule, voitures[i].marque, voitures[i].prixlocation, voitures[i].datefinassurance);
    }
}

void afficher_clients(Client* clients, int nb_clients) {
    printf("Liste des clients:\n");
    for (int i = 0; i < nb_clients; i++) {
        printf("CIN: %s, Nom: %s, Adresse: %s, Téléphone: %s\n",
               clients[i].cin, clients[i].prenom_nom, clients[i].adresse, clients[i].telephone);
    }
}

void afficher_locations(Location* locations, int nb_locations) {
    printf("Liste des locations:\n");
    for (int i = 0; i < nb_locations; i++) {
        printf("ID Location: %d, ID Voiture: %s, ID Client: %s, Date Sortie: %s, Date Retour: %s, Montant: %.2f\n",
               locations[i].id_location, locations[i].id_voiture, locations[i].id_client,
               locations[i].date_sortie, locations[i].date_retour, locations[i].montant);
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
        fprintf(file, "%d %s %s %s %s %.2f\n", locations[i].id_location, locations[i].id_voiture,
                locations[i].id_client, locations[i].date_sortie, locations[i].date_retour,
                locations[i].montant);
    }
    fclose(file);
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
        while (fscanf(file, "%d %s %s %s %s %f", &locations[*nb_locations].id_location,
                      locations[*nb_locations].id_voiture, locations[*nb_locations].id_client,
                      locations[*nb_locations].date_sortie, locations[*nb_locations].date_retour,
                      &locations[*nb_locations].montant) == 6) {
            (*nb_locations)++;
        }
        fclose(file);
    }
}

int validate_date_format(const char* date) {
    int jour, mois, annee;
    if (sscanf(date, "%d/%d/%d", &jour, &mois, &annee) != 3) {
        return 0;
    }
    if (jour < 1 || jour > 31 || mois < 1 || mois > 12 || annee < 1900) {
        return 0;
    }
    return 1;
}

int simple_get_number_of_days(const char* date_sortie, const char* date_retour) {
    int jour_sortie, mois_sortie, annee_sortie;
    int jour_retour, mois_retour, annee_retour;

    // Extraire les jours, mois et années
    sscanf(date_sortie, "%d/%d/%d", &jour_sortie, &mois_sortie, &annee_sortie);
    sscanf(date_retour, "%d/%d/%d", &jour_retour, &mois_retour, &annee_retour);

    // Vérifier si les années et mois sont les mêmes
    if (annee_sortie == annee_retour && mois_sortie == mois_retour) {
        return jour_retour - jour_sortie; // Simple soustraction
    } else {
        printf("Les dates doivent être dans le même mois et la même année.\n");
        return -1; // Indiquer une erreur
    }
}

void convert_number_to_words(int n, char* words) {
    const char* units[] = {"", "un", "deux", "trois", "quatre", "cinq", "six", "sept", "huit", "neuf"};
    const char* teens[] = {"dix", "onze", "douze", "treize", "quatorze", "quinze", "seize"};
    const char* tens[] = {"", "", "vingt", "trente", "quarante", "cinquante", "soixante", "soixante-dix", "quatre-vingt", "quatre-vingt-dix"};

    if (n < 10) {
        strcpy(words, units[n]);
    } else if (n < 20) {
        strcpy(words, teens[n - 10]);
    } else {
        int unit = n % 10;
        int ten = n / 10;
        if (ten == 8 && unit > 0) {
            sprintf(words, "%s et %s", tens[ten], units[unit]);
        } else {
            sprintf(words, "%s%s%s", tens[ten], (unit == 0 ? "" : (ten == 7 || ten == 9 ? "-" : " ")), units[unit]);
        }
    }
}

void display_amount_in_words(float amount) {
    int whole_part = (int)amount;
    int decimal_part = (int)((amount - whole_part) * 100);
    char words[100] = "";

    if (whole_part == 0) {
        strcpy(words, "zéro");
    } else {
        convert_number_to_words(whole_part, words);
    }

    if (decimal_part > 0) {
        char decimal_words[20];
        convert_number_to_words(decimal_part, decimal_words);
        printf("Montant à payer: %s euros et %s centimes\n", words, decimal_words);
    } else {
        printf("Montant à payer: %s euros\n", words);
    }
}
