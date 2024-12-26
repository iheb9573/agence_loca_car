#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define DATE_FORMAT "JJ/MM/AAAA"
#define MAX_CLIENTS 100
#define MAX_CARS 100
#define MAX_RENTALS 100

typedef struct {
    char name[50];
    char birthdate[11]; // Format JJ/MM/AAAA
} Client;

typedef struct {
    char model[50];
    bool is_available;
} Car;

typedef struct {
    Client client;
    Car car;
    char start_date[11]; // Format JJ/MM/AAAA
    char end_date[11];   // Format JJ/MM/AAAA
} Rental;

Client clients[MAX_CLIENTS];
Car cars[MAX_CARS];
Rental rentals[MAX_RENTALS];
int client_count = 0;
int car_count = 0;
int rental_count = 0;

// Function Prototypes
bool is_valid_date(const char *date);
int get_number_of_days(const char *start_date, const char *end_date);
bool verify_client_existence(const char *client_name);
bool verify_car_existence(const char *car_model);
void calculate_rental_amount(int days, float *amount);
void add_rental(const char *client_name, const char *car_model, const char *start_date, const char *end_date);
void display_rentals();

int main() {
    // Sample data
    strcpy(clients[client_count++].name, "Alice");
    strcpy(clients[0].birthdate, "01/01/1990");
    
    strcpy(cars[car_count++].model, "Toyota Corolla");
    cars[0].is_available = true;

    // Adding a rental
    add_rental("Alice", "Toyota Corolla", "01/10/2023", "05/10/2023");
    
    // Display all rentals
    display_rentals();

    return 0;
}

// Function to check if a date is valid
bool is_valid_date(const char *date) {
    int day, month, year;
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;
    
    // Simple check for month days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return false;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day > 29) return false; // Leap year
        } else {
            if (day > 28) return false; // Non-leap year
        }
    }
    return true;
}

// Function to calculate the number of days between two dates
int get_number_of_days(const char *start_date, const char *end_date) {
    if (!is_valid_date(start_date) || !is_valid_date(end_date)) {
        printf("Date non valide.\n");
        return -1;
    }
    
    // Simple date parsing
    int start_day, start_month, start_year;
    int end_day, end_month, end_year;
    sscanf(start_date, "%d/%d/%d", &start_day, &start_month, &start_year);
    sscanf(end_date, "%d/%d/%d", &end_day, &end_month, &end_year);
    
    // Convert dates to days since a reference date (e.g., 01/01/1970)
    int total_start_days = start_year * 365 + start_day;
    int total_end_days = end_year * 365 + end_day;

    // Adjust for leap years
    for (int year = 1970; year < start_year; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            total_start_days++;
        }
    }
    for (int year = 1970; year < end_year; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            total_end_days++;
        }
    }

    return total_end_days - total_start_days;
}

// Function to verify if a client exists
bool verify_client_existence(const char *client_name) {
    for (int i = 0; i < client_count; i++) {
        if (strcmp(clients[i].name, client_name) == 0) {
            return true;
        }
    }
    return false;
}

// Function to verify if a car exists
bool verify_car_existence(const char *car_model) {
    for (int i = 0; i < car_count; i++) {
        if (strcmp(cars[i].model, car_model) == 0) {
            return true;
        }
    }
    return false;
}

// Function to calculate rental amount based on days
void calculate_rental_amount(int days, float *amount) {
    const float daily_rate = 20.0; // Example daily rate
    *amount = days * daily_rate;
}

// Function to add a rental
void add_rental(const char *client_name, const char *car_model, const char *start_date, const char *end_date) {
    if (!verify_client_existence(client_name)) {
        printf("Client non trouvé.\n");
        return;
    }
    if (!verify_car_existence(car_model)) {
        printf("Voiture non trouvée.\n");
        return;
    }
    
    int days = get_number_of_days(start_date, end_date);
    if (days <= 0) {
        printf("Les dates de location ne sont pas valides.\n");
        return;
    }

    Rental new_rental;
    strcpy(new_rental.client.name, client_name);
    strcpy(new_rental.car.model, car_model);
    strcpy(new_rental.start_date, start_date);
    strcpy(new_rental.end_date, end_date);
    
    float amount;
    calculate_rental_amount(days, &amount);
    
    rentals[rental_count++] = new_rental;
    printf("Location ajoutée: %s a loué %s pour %d jours. Montant: %.2f\n", client_name, car_model, days, amount);
}

// Function to display all rentals
void display_rentals() {
    printf("Locations:\n");
    for (int i = 0; i < rental_count; i++) {
        printf("Client: %s, Voiture: %s, Dates: %s à %s\n", rentals[i].client.name, rentals[i].car.model, rentals[i].start_date, rentals[i].end_date);
    }
} 


