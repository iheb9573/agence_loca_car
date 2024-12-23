#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char telephone[8];
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
void ajouter_location(Location* locations, int* nb_locations);
void afficher_voitures(Voiture* voitures, int nb_voitures);
void afficher_clients(Client* clients, int nb_clients);
void afficher_locations(Location* locations, int nb_locations);
void sauvegarder_voitures(Voiture* voitures, int nb_voitures);
void sauvegarder_clients(Client* clients, int nb_clients);
void sauvegarder_locations(Location* locations, int nb_locations);
void charger_voitures(Voiture* voitures, int* nb_voitures);
void charger_clients(Client* clients, int* nb_clients);
void charger_locations(Location* locations, int* nb_locations);

int main() {
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
                ajouter_location(locations, &nb_locations);
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
    printf("Entrer date de fin d'assurance: ");
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
    scanf("%s", c->prenom_nom);
    printf("Entrer adresse: ");
    scanf("%s", c->adresse);
    printf("Entrer téléphone: ");
    scanf("%s", c->telephone);
    (*nb_clients)++;
}

void ajouter_location(Location* locations, int* nb_locations) {
    if (*nb_locations >= MAX_LOCATIONS) {
        printf("Limite de locations atteinte.\n");
        return;
    }
    Location* l = &locations[*nb_locations];
    printf("Entrer identifiant de location: ");
    scanf("%d", &l->id_location);
    printf("Entrer identifiant de voiture: ");
    scanf("%s", l->id_voiture);
    printf("Entrer identifiant de client: ");
    scanf("%s", l->id_client);
    printf("Entrer date de sortie: ");
    scanf("%s", l->date_sortie);
    printf("Entrer date de retour: ");
    scanf("%s", l->date_retour);
    printf("Entrer montant de location/jour: ");
    scanf("%f", &l->montant);
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
