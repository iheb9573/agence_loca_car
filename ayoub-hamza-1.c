#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


int choice;
int choice_voiture;
int choice_client;
int choice_location;


/*****************Fonctions de contraintes de saisie***********************************/

int test_alphanumerique(char s[30])
    {
        int i,alphnum;
        for (i=0;s[i];i++)
            {
                if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
                    {
                        alphnum = 1;
                        return alphnum;
                    }
                else
                    {
                        alphnum = 0;
                        return alphnum;
                    }
            }

    }

int test_numerique(char s[8])
    {
        int i,num;
        for (i=0;s[i];i++)
            {
                if (s[i] >= '0' && s[i] <= '9')
                    {
                        num = 1;
                        return num;
                    }
                else
                    {
                        num = 0;
                        return num;
                    }
            }
    }


int test_date_format(char date[10])
    {
       char annee[4] ;
       char mois[2] ;
       char jour[2] ;
       int a,b,c;
       int dateformat;
       int i = 0;
       int j = 0;
       int k = 0;
       while(i<=1)
       {
           jour[i] = date[i];
           i++;
       }
       jour[2] = '\0' ;
       int ijour = atoi(jour);
       if (ijour >= 1 && ijour <= 31)
        {
            a=1;
        }
       else
       {
            a=0;
       }
       while(j<=1)
       {
           mois[j] = date[3+j];
           j++;
       }
       mois[2] = '\0' ;
       int imois = atoi(mois);
       if (imois >= 1 && imois <= 12)
        {
            b=1;

        }
       else
       {
            b=0;
       }
       while(k<=3)
       {
           annee[k] = date[6+k];
           k++;
       }
       annee[4] = '\0' ;
       int iannee = atoi(annee);
       if (iannee >= 1900)
        {
            c=1;
        }
       else
       {
            c=0;
       }
       if (date[2] == '/' && date [5] == '/' && a == 1 && b ==1 && c ==1)
       {
           dateformat = 1;
           return dateformat;
       }
       else
       {
           dateformat = 0;
           return dateformat;
       }
    }



int test_compare_date(char date_exp[10] , char date_fab[10])
    {
       char annee_exp[4] ;
       char mois_exp[2] ;
       char jour_exp[2] ;
       char annee_fab[4] ;
       char mois_fab[2] ;
       char jour_fab[2] ;
       int compare_date;
       int a,b,c;
       int i = 0;
       int j = 0;
       int k = 0;
       while(i<=1)
       {
           jour_exp[i] = date_exp[i];
           jour_fab[i] = date_fab[i];
           i++;
       }
       jour_exp[2] = '\0' ;
       jour_fab[2] = '\0' ;
       int ijour_exp = atoi(jour_exp);
       int ijour_fab = atoi(jour_fab);

       if (ijour_exp > ijour_fab)
        {
            compare_date = 1;
            return compare_date;
        }
       else if (ijour_exp < ijour_fab)
       {
            compare_date = 0;
            return compare_date;
       }
       else
       {
            while(j<=1)
            {
                mois_exp[j] = date_exp[3+j];
                mois_fab[j] = date_fab[3+j];
                j++;
            }
            mois_exp[2] = '\0' ;
            mois_fab[2] = '\0' ;
            int imois_exp = atoi(mois_exp);
            int imois_fab = atoi(mois_fab);
            if (imois_exp > imois_fab)
            {
                 compare_date = 1;
                 return compare_date;
            }
            else if (imois_exp < imois_fab)
            {
                compare_date = 0;
                return compare_date;
            }
            else
            {
                while(k<=3)
                {
                    annee_exp[k] = date_exp[6+k];
                    annee_fab[k] = date_fab[6+k];
                    k++;
                }
                annee_exp[4] = '\0' ;
                annee_fab[4] = '\0' ;
                int iannee_exp = atoi(annee_exp);
                int iannee_fab = atoi(annee_fab);
                if (iannee_exp > iannee_fab)
                {
                    compare_date = 1;
                    return compare_date;
                }
                else
                {
                    compare_date = 0;
                    return compare_date;
                }

            }
       }


    }

int test_reel_postive(float s)
    {
        int reelpositif;
        if (s >= 0)
            {
                reelpositif = 1;
                return reelpositif;
            }
        else
            {
                reelpositif = 0;
                return reelpositif;

            }
    }


int test_int_postive(int s)
    {
        int entierpositif;
        if (s >= 0)
            {
                entierpositif = 1;
                return entierpositif;
            }
        else
            {
                entierpositif = 0;
                return entierpositif;

            }
    }



int get_number_day(char date_sortie[10] , char date_retour[10])
{

    char year1[4] ;
    char month1[2] ;
    char day1[2] ;
    char year2[4] ;
    char month2[2] ;
    char day2[2] ;
    int i = 0;
    int j = 0;
    int k = 0;
    int c = 0;
    int d1,d2,d,m1,m2,m,y1,y2,y, nb_jour;

    while(i<=1)
    {
       day1[i] = date_sortie[i];
       day2[i] = date_retour[i];
       i++;
    }


    day1[2] = '\0' ;
    d1 = atoi(day1);

    day2[2] = '\0' ;
    d2 = atoi(day2);

    while(j<=1)
    {
        month1[j] = date_sortie[3+j];
        month2[j] = date_retour[3+j];
        j++;
    }

    month1[2] = '\0' ;
    m1 = atoi(month1);
    month2[2] = '\0' ;
    m2 = atoi(month2);


    while(k<=3)
    {
         year1[k] = date_sortie[6+k];
         k++;
    }

	year1[4] = '\0' ;
	y1 = atoi(year1);

	while(c<=3)
    {
         year2[c] = date_retour[6+c];
         c++;
    }

    year2[4] = '\0' ;
    y2 = atoi(year2);

	if(d2<d1)
	{
		if(m2==3)
		{
			if(y2%100!=0 && y2%4==0  ||  y2%400==0)
				d2=d2+29;
			else
				d2=d2+28;
		}
		else if(m2==5 || m2==7 || m2==10 || m2==12)
			d2=d2+30;
		else
			d2=d2+31;
		m2=m2-1;
	}
	if(m2<m1)
	{
		y2=y2-1;
		m2=m2+12;
	}
	y=y2-y1;
	m=m2-m1;
	d=d2-d1;
	nb_jour = 365 * y + 30 * m + d;
	printf("Difference of the two dates is : ");
	printf("%d years %d months %d days\n",y,m,d);
	printf("%d",nb_jour);


	return nb_jour;
}


/****************fonctions de gestion des voiture**********************/

typedef struct Voiture
    {
        char matricule[10];
        char marque[15];
        float prixlocation;
        char datefinassurance[10];
        struct Voiture* next;
    }Voiture;


Voiture* ajouter_voiture(Voiture* first)
    {
        Voiture* voiture = (Voiture*)malloc(sizeof(Voiture));
        int alphnum;
        int reelpositif;
        int dateformat;
        printf("\nEntrer les informations de la voiture \n\n");
        do{
            printf("Entrer matricule: ");
            scanf("%s", &voiture->matricule);
            alphnum = test_alphanumerique(voiture->matricule);
          }while(alphnum == 0);

        do{
            printf("Entrer la marque: ");
            scanf("%s", &voiture->marque);
            alphnum = test_alphanumerique(voiture->marque);
          }while(alphnum == 0);

        do{
            printf("Entrer le prix de location: ");
            scanf("%f", &voiture->prixlocation);
            reelpositif = test_reel_postive(voiture->prixlocation);
          }while(reelpositif ==0);


        do{
            printf("Entrer la date de fin de l'assurance: ");
            scanf("%s", &voiture->datefinassurance);
            dateformat = test_date_format(voiture->datefinassurance);
          }while(dateformat == 0);


        voiture->next = first;
        first= voiture;

        return first;

    }



void modifier_liste_voiture(Voiture* first)
{
   Voiture* current = first;
   int alphnum;
   int reelpositif;
   int dateformat;

   if(first==NULL)
    {
      printf("La liste est vide.\n");
      return;
    }
   else
   {
      char mat[10];
      printf("\nEntrer matricule a modifier \n\n");
      scanf("%s",&mat);
      current = first;
      while(current!=NULL)
        {
           if(strcmp(current->matricule,mat) == 0)
           {

               do{
                    printf("Modifier matricule: ");
                    char matr[10];
                    scanf("%s", &matr);
                    strcpy(current->matricule,matr);
                    alphnum = test_alphanumerique(current->matricule);
               }while(alphnum == 0);


               do{
                     printf("Modifier la marque: ");
                    char mar[15];
                    scanf("%s", &mar);
                    strcpy(current->marque ,mar);
                    alphnum = test_alphanumerique(current->marque);

               }while(alphnum == 0);
               do{
                    printf("Modifier le prix de location: ");
                    float prloc;
                    scanf("%f", &prloc);
                    current->prixlocation = prloc;
                    reelpositif = test_reel_postive(current->prixlocation);
               }while(reelpositif ==0);


               do{
                    printf("Modifier la date fin de l'assurance: ");
                    char datefinass[10];
                    scanf("%s", &datefinass);
                    strcpy(current->datefinassurance,datefinass);
                    dateformat = test_date_format(current->datefinassurance);
               }while(dateformat == 0);

               return;

           }
           current = current->next;
        }
        printf("%s ne se trouve pas dans la liste\n", mat);

   }

}


Voiture* supprimer_voiture(Voiture* first)
    {
       Voiture* ptr, *temp;
       int alphnum;
       char mat[10];
       if(first==NULL)
        {
          printf("La liste est vide.\n");
        }
       else
        {
            do{

                printf("\nEntrer la matricule a supprimer \n\n");
                scanf("%s",&mat);
                alphnum = test_alphanumerique(mat);
            }while(alphnum == 0);
            if (strcmp(first->matricule,mat) == 0)
            {
               ptr = first;
               first = first->next;
               free(ptr);
               printf("\n La matricule %s est supprimee.\n\n",mat);
            }
            else
            {
                temp = first;
                while(temp->next!=NULL && strcmp(temp->next->matricule,mat) != 0)
                    temp = temp->next;
                if(temp->next != NULL)
                {
                    ptr=temp->next;
                    temp->next=temp->next->next;
                    free(ptr);
                    printf("\n La matricule %s est supprime.\n\n",mat);
                }
            }
            return first;
        }

    }



void chercher_voiture(Voiture* first)
    {
        Voiture* current = first;
        int alphnum;
        char mat[10];

        if(current == NULL)
            {
              printf("La liste est vide.\n");
              return;
            }
        while(current != NULL)
        {
            do{
                printf("\nEntrer la matricule a chercher \n\n");

                scanf("%s",&mat);
                alphnum = test_alphanumerique(mat);
            }while(alphnum == 0);


            if(strcmp(current->matricule,mat) == 0)
            {
               printf("---------------------------------------------------------------------------------------------------------------------------------\n");
               printf(" Matricule  | Marque | Prix location | Date de fin d'assurance| \n");
               printf("---------------------------------------------------------------------------------------------------------------------------------\n");
               printf("\n");
               printf(" %s\t| %s\t| %f\t| %s\t",current->matricule,current->marque,current->prixlocation,current->datefinassurance);
               printf("--------------------------------------------------------------------------------------------------------------------------\n");
               return;
            }
            current = current->next;
        }
        printf("Matricule n'existe pas.\n");

    }



void afficher_liste_voiture(Voiture* first)
    {
        Voiture* ptr = NULL;
        ptr = first;
        if(first == NULL)
            {
                printf("La liste est vide.\n");
            }
        else
            {

                printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                printf(" Matricule  | Marque | Prix location | Date de fin d'assurance| \n");
                printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n");
                while(ptr!= NULL)
                    {
                        printf(" %s\t| %s\t| %f\t| %s\t",ptr->matricule,ptr->marque,ptr->prixlocation,ptr->datefinassurance);
                        printf("--------------------------------------------------------------------------------------------------------------------------\n");
                        ptr = ptr->next;
                    }
                printf("--------------------------------------------------------------------------------------------------------------------------\n");
            }

    }




Voiture* trier_voiture(Voiture *first)
    {
        Voiture* temp, *p;
        float prixlocation;
        if(first == NULL)
            {
                printf("La liste est vide.\n");
            }
        else
        {
            for(temp=first;temp->next!=NULL;temp=temp->next)
            {
                for(p=temp->next;p!=NULL;p=p->next)
                {
                    if(p->prixlocation < temp->prixlocation)
                    {
                        prixlocation = p->prixlocation;
                        p->prixlocation = temp->prixlocation;
                        temp->prixlocation = prixlocation;
                    }
                }
            }
        }
        return first;
    }



/****************fonctions de gestion des clients avec la liste chainï¿½e***********************/


typedef struct Client
    {
        char cin[10];
        char prenom_nom[25];
        char adresse[30];
        char telephone[8];
        struct Client* next;
    }Client;


 Client* ajouter_client(Client* first)
    {
        Client* client= (Client*)malloc(sizeof(Client));
        int alphnum, num;
        printf("\nEntrer les informations des clients \n\n");

        do{
            printf("Entrer cin: ");
            scanf("%s", &client->cin);
            num = test_numerique(client->cin);
        }while(num == 0);

        do{
            printf("Entrer le prenom et le nom: ");
            scanf("%s", &client->prenom_nom);
            alphnum = test_alphanumerique(client->prenom_nom);
        }while(alphnum == 0);

        do{
            printf("Entrer adresse: ");
            scanf("%s", &client->adresse);
            alphnum = test_alphanumerique(client->adresse);
        }while(alphnum == 0);

        do{
            printf("Entrer le telephone: ");
            scanf("%s", &client->telephone);
            num = test_numerique(client->telephone);
        }while(num == 0);

        client->next = first;
        first= client;

        return first;

    }



void modifier_liste_client(Client* first)
{
   Client* current = first;
   int alphnum, num;
   if(first==NULL)
    {
      printf("La liste est vide.\n");
      return;
    }
   else
   {
      char cint[10];
      printf("\nEntrer cin clienta modifier \n\n");
      scanf("%s",&cint);
      current = first;
      while(current!=NULL)
        {
           if(strcmp(current->cin,cint) == 0)
           {

               do{
                    printf("Modifier cin: ");
                    char cintu[10];
                    scanf("%s", &cintu);
                    strcpy(current->cin,cintu);
                    num = test_numerique(current->cin);
               }while(num == 0);

               do{
                    printf("Modifier le prenom et le nom: ");
                    char pre_nom[25];
                    scanf("%s", &pre_nom);
                    strcpy(current->prenom_nom ,pre_nom);
                    alphnum = test_alphanumerique(current->prenom_nom);
               }while(alphnum == 0);

               do{
                    printf("Modifier adresse: ");
                    char adress_cl[30];
                    scanf("%s", &adress_cl);
                    strcpy(current->adresse ,adress_cl);
                    alphnum = test_alphanumerique(current->adresse);
               }while(alphnum == 0);


               do{
                    printf("Modifier le telephone: ");
                    char telephone_cl[8];
                    scanf("%s", &telephone_cl);
                    strcpy(current->telephone ,telephone_cl);
                    num = test_numerique(current->telephone);
               }while(num == 0);


               return;

           }
           current = current->next;
        }
        printf("%s ne se trouve pas dans la liste\n", cint);

   }

}


Client* supprimer_client(Client* first)
    {
       Client* ptr, *temp;
       int alphnum, num;
       char cint[10];
       if(first==NULL)
        {
          printf("La liste est vide.\n");
        }
       else
        {
            do{

                printf("\nEntrer cin client a supprimer \n\n");
                scanf("%s",&cint);
                num = test_numerique(cint);
            }while(num == 0);

            if (strcmp(first->cin,cint) == 0)
            {
               ptr = first;
               first = first->next;
               free(ptr);
               printf("\n La cin client %s est supprimee.\n\n",cint);
            }
            else
            {
                temp = first;
                while(temp->next!=NULL && strcmp(temp->next->cin,cint) != 0)
                    temp = temp->next;
                if(temp->next != NULL)
                {
                    ptr=temp->next;
                    temp->next=temp->next->next;
                    free(ptr);
                    printf("\n La cin client %s est supprimee.\n\n",cint);
                }
            }
            return first;
        }

    }



void chercher_client(Client* first)
    {
        Client* current = first;
        int alphnum, num;
        char cint[10];
        if(current == NULL)
            {
              printf("La liste est vide.\n");
              return;
            }
        while(current != NULL)
        {
            do{

                printf("\nEntrer cin client/fournisseur a chercher \n\n");
                scanf("%s",&cint);
                num = test_numerique(cint);
            }while(num == 0);

            if(strcmp(current->cin,cint) == 0)
            {
               printf("---------------------------------------------------------------------------------------------------------------------------------\n");
               printf(" CIN  | Prenom & Nom | Adresse | Telephone | \n");
               printf("---------------------------------------------------------------------------------------------------------------------------------\n");
               printf("\n");
               printf(" %s\t| %s\t| %s\t| %s\t",current->cin,current->prenom_nom,current->adresse,current->telephone);
               printf("--------------------------------------------------------------------------------------------------------------------------\n");
               return;
            }
            current = current->next;
        }
        printf("CIN client n'existe pas.\n");

    }



void afficher_liste_client(Client* first)
    {
        Client* ptr = NULL;
        ptr = first;
        if(first == NULL)
            {
                printf("La liste est vide.\n");
            }
        else
            {
                printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                printf(" Identifiant  | Nom | Adresse | Telephone | \n");
                printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n");
                while(ptr!= NULL)
                    {
                        printf(" %s\t| %s\t| %s\t| %s\t",ptr->cin,ptr->prenom_nom,ptr->adresse,ptr->telephone);
                        printf("--------------------------------------------------------------------------------------------------------------------------\n");
                        ptr = ptr->next;
                    }
                printf("--------------------------------------------------------------------------------------------------------------------------\n");
            }

    }



/****************fonctions de gestion de location des voiture avec la liste chainï¿½e***********************/


typedef struct Location
    {
        int id_location;
        char id_voiture[10];
        char id_client[10];
        char date_sortie[10];
        char date_retour[10];
        float montant;
        struct Location* next;
    }Location;


Location* ajouter_location(Location* first)
    {
        Location* location = (Location*)malloc(sizeof(Location));
        int alphnum,dateformat,int_positive,num,compare_date;
        printf("\nEntrer les informations de location de voiture \n\n");

        do{
            printf("Entrer identifiant de location: ");
            scanf("%d", &location->id_location);
            int_positive = test_int_postive(location->id_location);
        }while(int_positive == 0);


        do{
            printf("Entrer identifiant voiture: ");
            scanf("%s", &location->id_voiture);
            alphnum = test_alphanumerique(location->id_voiture);
        }while(alphnum == 0);


        do{
            printf("Entrer identifiant client: ");
            scanf("%s", &location->id_client);
            num = test_numerique(location->id_client);
        }while(num == 0);


        do{
            printf("Entrer la date de sortie: ");
            scanf("%s", &location->date_sortie);
            dateformat = test_date_format(location->date_sortie);
        }while(dateformat == 0);

        do{
            printf("Entrer la date de retour: ");
            scanf("%s", &location->date_retour);
            dateformat = test_date_format(location->date_retour);
            compare_date = test_compare_date(location->date_retour,location->date_sortie);
        }while(dateformat == 0 || compare_date == 0);




        do{
            printf("Entrer le montant de location/jour: ");
            scanf("%f", &location->montant);
        }while(location->montant < 0);


        location->next = first;
        first= location;

        return first;

    }



void modifier_location(Location* first)
{
   Location* current = first;
   int alphnum;
   int dateformat;

   if(first==NULL)
    {
      printf("La liste est vide.\n");
      return;
    }
   else
   {
      int id_loc, int_positive, num, compare_date;
      printf("\nEntrer identifiant location a modifier \n\n");
      scanf("%d",&id_loc);
      current = first;
      while(current!=NULL)
        {
           if(current->id_location == id_loc)
           {

               do{
                    printf("Modifier identifiant de location: ");
                    int idt_loc;
                    scanf("%d", &idt_loc);
                    current->id_location = idt_loc;
                    int_positive = test_int_postive(current->id_location);
               }while(int_positive == 0);

               do{
                    printf("Modifier identifiant de voiture: ");
                    char idt_voiture[10];
                    scanf("%s", &idt_voiture);
                    strcpy(current->id_voiture ,idt_voiture);
                    alphnum = test_alphanumerique(current->id_voiture);
               }while(alphnum == 0);

               do{
                    printf("Modifier identifiant de client: ");
                    char idt_client[10];
                    scanf("%s", &idt_client);
                    strcpy(current->id_client ,idt_client);
                    num = test_numerique(current->id_client);
               }while(num == 0);

               do{
                    printf("Modifier la date de sortie: ");
                    char date_sortiee[10];
                    scanf("%s", &date_sortiee);
                    strcpy(current->date_sortie ,date_sortiee);
                    dateformat = test_date_format(current->date_sortie);
               }while(dateformat == 0);

               do{
                    printf("Modifier la date de retour: ");
                    char date_retoure[10];
                    scanf("%s", &date_retoure);
                    strcpy(current->date_retour ,date_retoure);
                    dateformat = test_date_format(current->date_retour);
                    compare_date = test_compare_date(current->date_retour,current->date_sortie);
               }while(dateformat == 0 || compare_date == 0);



               do{
                    printf("Modifier le montant de location/jour: ");
                    int montant_jour;
                    scanf("%f", &montant_jour);
                    current->montant = montant_jour;
               }while(current->montant <0);


               return;

           }
           current = current->next;
        }
        printf("%d ne se trouve pas dans la liste\n", id_loc);

   }

}


Location* supprimer_location(Location* first)
    {
       Location* ptr, *temp;
       int alphnum, int_positive;
       int id_loc;
       if(first==NULL)
        {
          printf("La liste est vide.\n");
        }
       else
        {
            do{

                printf("\nEntrer id location a supprimer \n\n");
                scanf("%d",&id_loc);
                int_positive = test_int_postive(id_loc);
            }while(int_positive == 0);

            if (first->id_location == id_loc)
            {
               ptr = first;
               first = first->next;
               free(ptr);
               printf("\n L'identifiant de location %d est supprime.\n\n",id_loc);

            }
            else
            {
                temp = first;
                while(temp->next!=NULL && temp->next->id_location != id_loc)
                    temp = temp->next;
                if(temp->next != NULL)
                {
                    ptr=temp->next;
                    temp->next=temp->next->next;
                    free(ptr);
                    printf("\nL'identifiant de location %d est supprime.\n\n",id_loc);
                }
            }
            return first;
        }

    }



void chercher_location(Location* first)
    {
        Location* current = first;
        int alphnum, int_positive;
        int id_loc;

        if(current == NULL)
            {
              printf("La liste est vide.\n");
              return;
            }
        while(current != NULL)
        {
            do{

                printf("\nEntrer id de location a chercher \n\n");
                scanf("%d",&id_loc);
                int_positive = test_int_postive(id_loc);
            }while(int_positive == 0);
            if(current->id_location == id_loc)
            {

               int nbre_jours;
               nbre_jours = get_number_day(current->date_sortie,current->date_retour);
               current->montant =  nbre_jours * current->montant;
               printf("---------------------------------------------------------------------------------------------------------------------------------\n");
               printf(" Identifiant  Location | Identifiant Voiture | Identifiant Client | Date Sortie | Date Entree | Montant/Jour | \n");
               printf("---------------------------------------------------------------------------------------------------------------------------------\n");
               printf("\n");
               printf(" %d\t| %s\t| %s\t| %s\t| %s\t| %f\t",current->id_location,current->id_voiture,current->id_client,current->date_sortie,current->date_retour,current->montant);
               printf("--------------------------------------------------------------------------------------------------------------------------\n");
               return;
            }
            current = current->next;
        }
        printf("Identifiant location n'existe pas.\n");

    }



void afficher_liste_location(Location* first)
    {
        Location* ptr = NULL;
        ptr = first;
        if(first == NULL)
            {
                printf("La liste est vide.\n");
            }
        else
            {
                printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                printf(" Identifiant  Location | Identifiant Voiture | Identifiant Client | Date Sortie | Date Entree | Montant/Jour | \n");
                printf("---------------------------------------------------------------------------------------------------------------------------------\n");
                printf("\n");
                while(ptr!= NULL)

                    {
                        int nbre_jours;
                        nbre_jours = get_number_day(ptr->date_sortie,ptr->date_retour);
                        ptr->montant =  nbre_jours * ptr->montant;
                        printf(" %d\t| %s\t| %s\t| %s\t| %s\t| %f\t",ptr->id_location,ptr->id_voiture,ptr->id_client,ptr->date_sortie,ptr->date_retour,ptr->montant);
                        printf("--------------------------------------------------------------------------------------------------------------------------\n");
                        ptr = ptr->next;
                    }
                printf("--------------------------------------------------------------------------------------------------------------------------\n");
            }

    }




//P: affiche  les clients par voiture
 void affichage_client_voiture(struct Voiture*debut)
{
    struct Voiture *tempvoiture;
    struct Client *tempclient;
    //struct joueurs *prevjoueur;
    printf("Vous voulez la liste des joueurs de quel sport : " );

    int id_voiture;
    printf("\nEntrer id de voiture :\n\n");
    scanf("%d",&id_voiture);

    tempvoiture=debut;
    while(tempvoiture!=NULL && strcmp(tempvoiture->matricule,id_voiture) != 0)
    {
        tempvoiture=tempvoiture->next;
    }
    if(tempvoiture!=NULL && strcmp(tempvoiture->matricule,id_voiture) == 0)
    {
        tempclient=tempvoiture->next;
        while(tempclient!=NULL)
        {
          printf("---------------------------------------------------------------------------------------------------------------------------------\n");
          printf(" CIN  | Prenom & Nom | Adresse | Telephone | \n");
          printf("---------------------------------------------------------------------------------------------------------------------------------\n");
          printf("\n");
          printf(" %s\t| %s\t| %s\t| %s\t",tempclient->cin,tempclient->prenom_nom,tempclient->adresse,tempclient->telephone);
          printf("--------------------------------------------------------------------------------------------------------------------------\n");
          tempclient=tempclient->next;
        }
    }
    else
    {
        printf("\nLE NOM N EST PAS PRESENT" );
    }
}



/****************Fonctions d'affichage des menus et des sous-menus***********************/

void showMenu()
{
    printf("\n  ::::::::::::::::::::::::::| Societe GoodRent | Gestion de location de Voiture | 16/05/2022 |:::::::::::::::::::::::::: \n");;
    printf("*                                                       *\n");
    printf("*************************Menu****************************\n");
    printf("*                                                       *\n");
    printf("* 1. Gestion des voitures                               *\n");
    printf("*                                                       *\n");
    printf("* 2. Gestion des clients                                *\n");
    printf("*                                                       *\n");
    printf("* 3. Gestion de location des voitures                   *\n");
    printf("*                                                       *\n");
    printf("* 4. Quitter                                            *\n");
    printf("*                                                       *\n");
    printf("*********************************************************\n\n");
    printf("ton choix: ");
    scanf("%d",&choice);
}



void showMenuVoiture()
{
    printf("***************Menu Gestion Voiture *********************\n");
    printf("*                                                       *\n");
    printf("* 1. Ajouter une voiture                                *\n");
    printf("*                                                       *\n");
    printf("* 2. Modifier une voiture                               *\n");
    printf("*                                                       *\n");
    printf("* 3. Supprimer une voiture                              *\n");
    printf("*                                                       *\n");
    printf("* 4. Rechercher une voiture                             *\n");
    printf("*                                                       *\n");
    printf("* 5. Afficher les voitures                              *\n");
    printf("*                                                       *\n");
    printf("* 6. Afficher les voitures avec une assurance fini      *\n");
    printf("*                                                       *\n");
    printf("* 7. Quitter                                            *\n");
    printf("*                                                       *\n");
    printf("*********************************************************\n\n");
    printf("ton choix: ");
    scanf("%d",&choice_voiture);
}


void showMenuClient()
{
    printf("**********Menu Gestion Client             ***************\n");
    printf("*                                                       *\n");
    printf("* 1. Ajouter un client                                  *\n");
    printf("*                                                       *\n");
    printf("* 2. Modifier un client                                 *\n");
    printf("*                                                       *\n");
    printf("* 3. Supprimer un client                                *\n");
    printf("*                                                       *\n");
    printf("* 4. Rechercher un client                               *\n");
    printf("*                                                       *\n");
    printf("* 5. Afficher les clients                               *\n");
    printf("*                                                       *\n");
    printf("* 6. Quitter                                            *\n");
    printf("*                                                       *\n");
    printf("*********************************************************\n\n");
    printf("ton choix: ");
    scanf("%d",&choice_client);
}


void showMenuLocation()
{
    printf("**********Menu Gestion Location     ***************\n");
    printf("*                                                 *\n");
    printf("* 1. Ajouter une location                         *\n");
    printf("*                                                 *\n");
    printf("* 2. Modifier une location                        *\n");
    printf("*                                                 *\n");
    printf("* 3. Supprimer une location                       *\n");
    printf("*                                                 *\n");
    printf("* 4. Rechercher une location                      *\n");
    printf("*                                                 *\n");
    printf("* 5. Afficher la liste de location                *\n");
    printf("*                                                 *\n");
    printf("* 6. Afficher les clients/voiture                 *\n");
    printf("*                                                 *\n");
    printf("* 7. Afficher les voitures/clients                *\n");
    printf("*                                                 *\n");
    printf("* 8. Afficher les voitures disponibles            *\n");
    printf("*                                                 *\n");
    printf("* 9. Quitter                                      *\n");
    printf("*                                                 *\n");
    printf("***************************************************\n\n");
    printf("ton choix: ");
    scanf("%d",&choice_location);
}



/******************************Le main******************************************************/

int main()
    {
        Voiture* liste_voiture = NULL;
        Client* liste_client = NULL;
        Location* liste_location = NULL;
        do{
            showMenu();
            switch(choice)
            {


                case 1: do{
                            showMenuVoiture();
                            switch(choice_voiture)
                            {
                                case 1 : liste_voiture = ajouter_voiture(liste_voiture);
                                         break;
                                case 2 : modifier_liste_voiture(liste_voiture);
                                         break;
                                case 3 : liste_voiture = supprimer_voiture(liste_voiture);
                                         break;
                                case 4 : chercher_voiture(liste_voiture);
                                         break;
                                case 5 : liste_voiture = trier_voiture(liste_voiture);
                                         afficher_liste_voiture(liste_voiture);
                                         break;
                                case 6 : printf("Afficher voiture avec fin d'assurance\n");
                                         break;
                                case 7 : printf("Quitter\n");
                                         break;
                                default: printf("Choix incorrect\n");
                                         break;

                            }

                        }while(choice_voiture != 7);
                        break;




                case 2:  do{
                            showMenuClient();
                            switch(choice_client)
                            {
                                case 1 : liste_client= ajouter_client(liste_client);
                                         break;
                                case 2 : modifier_liste_client(liste_client);
                                         break;
                                case 3 : liste_client = supprimer_client(liste_client);
                                         break;
                                case 4 : chercher_client(liste_client);
                                         break;
                                case 5 : afficher_liste_client(liste_client);
                                         break;
                                case 6 : printf("Quitter\n");
                                         break;
                                default: printf("Choix incorrect\n");
                                         break;

                            }

                        }while(choice_client != 6);
                        break;





                case 3:  do{
                            showMenuLocation();
                            switch(choice_location)
                            {
                                case 1 : liste_location = ajouter_location(liste_location);
                                         break;
                                case 2 : modifier_location(liste_location);
                                         break;
                                case 3 : liste_location = supprimer_location(liste_location);
                                         break;
                                case 4 : chercher_location(liste_location);
                                         break;
                                case 5 : afficher_liste_location(liste_location);
                                         break;
                                case 6 : affichage_client_voiture(liste_client);
                                         break;
                                case 7 : printf("Afficher voiture par client\n");
                                         break;
                                case 8 : printf("Afficher les voitures disponibles\n");
                                         break;
                                case 9 : printf("Quitter\n");
                                         break;
                                default: printf("Choix incorrect\n");
                                         break;

                            }

                        }while(choice_location != 9);
                        break;


                case 4: printf("Quitter");
                        break;
                default : printf("Choix incorrect");
            }

        }while(choice != 4);


    }




