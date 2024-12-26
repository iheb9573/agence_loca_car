#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

// Fonction pour vérifier si une date est au format jj/mm/aaaa
bool validate_date_format(const char *date) {
    if (strlen(date) != 10) return false; // La date doit avoir exactement 10 caractères
    if (date[2] != '/' || date[5] != '/') return false; // Les séparateurs doivent être des '/'

    // Extraire les parties de la date
    int day = atoi(&date[0]);
    int month = atoi(&date[3]);
    int year = atoi(&date[6]);

    // Vérifier les limites des jours, mois et années
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 1) return false;

    // Vérification du nombre de jours par mois
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[1] = 29; // Année bissextile
    }
    if (day > days_in_month[month - 1]) return false;

    return true;
}

// Fonction auxiliaire pour convertir une date au format jj/mm/aaaa en struct tm
void parse_date(const char *date, struct tm *tm_date) {
    int day, month, year;
    sscanf(date, "%d/%d/%d", &day, &month, &year); // Extraction des parties de la date
    tm_date->tm_mday = day;
    tm_date->tm_mon = month - 1; // Les mois vont de 0 à 11 dans struct tm
    tm_date->tm_year = year - 1900; // Les années commencent à 1900 dans struct tm
    tm_date->tm_hour = 0;
    tm_date->tm_min = 0;
    tm_date->tm_sec = 0;
    tm_date->tm_isdst = -1; // Ne pas gérer l'heure d'été
}

// Fonction pour calculer le nombre de jours entre deux dates
int get_number_of_days(const char *date1, const char *date2) {
    struct tm tm1 = {0}, tm2 = {0};

    // Conversion des dates
    parse_date(date1, &tm1);
    parse_date(date2, &tm2);

    // Convertir les structures tm en temps en secondes
    time_t time1 = mktime(&tm1);
    time_t time2 = mktime(&tm2);

    if (time1 == -1 || time2 == -1) {
        return -1; // Erreur lors de la conversion
    }

    // Calculer la différence en secondes et la convertir en jours
    double difference_in_seconds = difftime(time2, time1);
    return (int)(difference_in_seconds / (60 * 60 * 24));
}

int main() {
    const char *date1 = "25/12/2024";
    const char *date2 = "07/01/2025";

    // Validation des dates
    if (!validate_date_format(date1) || !validate_date_format(date2)) {
        printf("L'une des dates est invalide.\n");
        return 1;
    }

    // Calcul du nombre de jours
    int days = get_number_of_days(date1, date2);
    if (days == -1) {
        printf("Erreur lors du calcul des jours.\n");
    } else {
        printf("Nombre de jours entre %s et %s : %d jours\n", date1, date2, days);
    }

    return 0;
}

