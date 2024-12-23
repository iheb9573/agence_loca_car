#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#define Max 100
void animation()
{

   int x; double y;
   system("color 9f");
   
   char text1[]=    "\n\n\n\n\n \t\t\t\t\t\t.....Bienvunue Dans.....  ";
   char text2[]=    " \t\t\t\t\t\t         AGENCE  ";
   char text3[]=    " \t\t\t\t\t\t\t   DE ";
   char text4[]=    " \t\t\t\t\t\t   LOCATION DE VOITURE ";
   char text5[]=    "\n\t\t\t\t\t\t.........................";
   
    for(x=0; text1[x]!=NULL; x++)
   {
     printf("%c",text1[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
    printf("\n\n");
    for(x=0; text2[x]!=NULL; x++)
   {
     printf("%c",text2[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   printf("\n\n");
    for(x=0; text3[x]!=NULL; x++)
   {
     printf("%c",text3[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   printf("\n\n");
    for(x=0; text4[x]!=NULL; x++)
   {
     printf("%c",text4[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   for(x=0; text5[x]!=NULL; x++)
   {
     printf("%c",text5[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
    printf("\n\n");
   //getch();
   return 0;
   
   }


typedef struct Date_perinciple {

	int jj;
	int mm;
	int aa;

} Date ;

typedef struct Date_generale {

	Date Ds;//date sortie
	Date Dr;//date retour
	Date Dc;//date debut cerculisatioo
	Date Fa;//date fin assurance
	Date Vtech;//visite technique

} Dateg;

typedef struct voiture {
	char ID[20];//id dernier client
	char Mar[20];//marque voiture
	int  Mod;// modèle
	char  Mat[10];//matricule
	int  Cv;//code voiture
	float Km;//kilometrage
	char Col[20];//couleur voiture
	char Etat[20];//Etat voiture
	float Va;//valeur Achete

} Voi;

typedef struct frais_location {

	float Pj;//prix par jour
	float Pm;//prix par mois
	float Mt;//montant visit technique


} Fraisl;

typedef struct voiture_generale {
	Dateg Dg;
	Voi V;
	Fraisl Fl;

} Vg;



void sous_meny() {
	printf("\n\t   ________________________\n");
	printf("\n\t     ___ Bienvenue ___");

	printf("\n\t _____________________________\n");

}
void caract_mod() {
	printf("\n\t                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("\n\t\t\t\t  \xba    Modifie   \xba   la carecteristique       \xba ");
	printf("\n\t                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	printf("\n\n\t\t\t\t\t [1] Modifier Id dernier Client ");
	printf("\n\t\t\t\t\t [2] Modifier la Marque de voiture ");
	printf("\n\t\t\t\t\t [3] Modifier la Modele de voiture ");
	printf("\n\t\t\t\t\t [4] Modifier la Matricule ");
	printf("\n\t\t\t\t\t [5] Modifier La code Id de voiture ");
	printf("\n\t\t\t\t\t [6] Modifier kilometrage de voiture ");
	printf("\n\t\t\t\t\t [7] Modifier La couleur de voiture ");
	printf("\n\t\t\t\t\t [8] Modifier L'Etat de voiture\n ");
}
void date_mod() {
    printf("\n\t                          \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("\n\t\t\t\t  \xba    Modifie   \xba            Date            \xba ");
	printf("\n\t                          \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	printf("\n\n\t\t\t\t\t[1] Date de mise en circulation");
	printf("\n\t\t\t\t\t[2] Date Sortie de a agence\n");
	printf("\t\t\t\t\t[3] Date Retour de a agence\n");
	printf("\t\t\t\t\t[4] Date fin d'assurance\n");
	printf("\t\t\t\t\t[5] Date fin de visite technique\n");

}
void frais_mod() {
	
	printf("\n\t\t\t\t\t[1] Modifier Valeur Acheter  ");
	printf("\n\t\t\t\t\t[2] Montant de visite technique ");
	printf("\n\t\t\t\t\t[3] Prix location par jour ");
	printf("\n\t\t\t\t\t[4] Prix location par mois ");
	printf("\n\t\t\t\t\t[5] Tout Le Frais \n  ");

}
void mod_date()
{
	printf("\n\n\t\t\t\t\t[1] Date-jour..........");
	printf("\n\t\t\t\t\t[2] Date-mois..........\n");
	printf("\t\t\t\t\t[3] Date-annee.........\n");
	printf("\t\t\t\t\t[4] Date-jour-mois-annee\n");

}

int main() {
	
	
	float NvVA,NvMVt,NvLPJ,NvLPM;// pour modifier le frais de location 
	int NvMod,NvCv; // apres le modification...
	char NvMat[15];
	float NvKm;
    
    int Numv; // numerou de voiture
    int Nvdj,Nvdm,Nvda;
	char NvEtat[15];
	char NvMaq[15];
	char NvIDcl[15];
	char NvCol[15];
	int i,j,mj; // compteur pour recherche et cle modifier jour-mois-anne 
	char id [15];
	int mmc;
	int mdf; // cle pour utilise poit modifie
	int cvm;
	int choix;
	int taille=0;
	Vg t[Max];



    animation();
	do {

        
		system("cls");
		system("color 9f");
		char tmpbuf[128],datebuf[128];

		_strtime( tmpbuf );

		_strdate( datebuf );
        
		//printf("\n\xba %s \xba              \xba Bienvenue \xba            \xba %s \xba\n",tmpbuf,datebuf);
		printf("\n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
		printf("\n\t\t  \xba %s \xba \xba  GESTION D UNE AGENCE DE LOCATION DE VOITURE   \xba \xba %s \xba ",tmpbuf,datebuf);
		printf("\n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
        
		printf("\n                                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
		printf("\n                                       \xba                                \xba");
		printf("\n                                       \xba    [1] Ajouter une voiture     \xba");
		printf("\n                                       \xba    [2] Supprimer une voiture   \xba");
		printf("\n                                       \xba    [3] Modifier une voiture    \xba");
		printf("\n                                       \xba    [4] Afficher une voiture    \xba");
		printf("\n                                       \xba    [5] Chercher une voiture    \xba");
		printf("\n                                       \xba    [6] Retour                  \xba");
		printf("\n                                       \xba    [7] Quitter                 \xba");
		printf("\n                                       \xba                                \xba");
		printf("\n                                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

		printf("\n\n\t                                    - Donner Votre Choix :");
		scanf("%d",&choix);
		//printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		while(choix<1 || choix>7) {
			printf("\n\t\t\t\t    Attention ! votre choix non disponible..\n");
			printf("\t\t\t\t\t    - Donner Nouvelle Choix :");
			scanf("%d",&choix);

		}

		switch(choix) 
		{


			case 1: {
				printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
				printf("\n                                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb  \xc9\xcd\xcd\xcd\xcd\xcd\xbb");
				printf("\n                                       \xba  Ajouter un Voiture   \xba  \xba  %d  \xba",taille+1);
				printf("\n                                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc  \xc8\xcd\xcd\xcd\xcd\xcd\xbc");

				printf("\n\n\t\t\t\t\t - Id dernier Client : ");
				scanf("%s",t[taille].V.ID);

				printf("\t\t\t\t\t - Saisir la Marque de voiture : ");
				scanf("%s",t[taille].V.Mar);

		
		        printf("\t\t\t\t\t - Saisir la Modele de voiture : ");
				scanf("%d",&t[taille].V.Mod);
				
				printf("\t\t\t\t\t - Saisir la Matricule :");
				scanf("%s",t[taille].V.Mat);

				printf("\t\t\t\t\t - Saisir La code Id de voiture : ");
				scanf("%d",&t[taille].V.Cv);

				printf("\t\t\t\t\t - Saisir kilometrage de voiture : ");
				scanf("%f",&t[taille].V.Km);

				printf("\t\t\t\t\t - Saisir La couleur de voiture : ");
				scanf("%s",t[taille].V.Col);

				printf("\t\t\t\t\t - Saisir L'Etat de voiture :");
				scanf("%s",t[taille].V.Etat);

				printf("\t\t\t\t\t - Valeur Acheter : ");
				scanf("%f",&t[taille].V.Va);

				printf("\n\t\t\t\t\t - Date de mise en circulation\n");
				printf("\t\t\t\t\t\t - Date-jour :");
				scanf("%d",&t[taille].Dg.Dc.jj);
				printf("\t\t\t\t\t\t - Date-mois :");
				scanf("%d",&t[taille].Dg.Dc.mm);
				printf("\t\t\t\t\t\t - Date-annee :");
				scanf("%d",&t[taille].Dg.Dc.aa);

				printf("\n\t\t\t\t\t - Date Sortie de a agence\n");
				printf("\t\t\t\t\t\t - Date-jour :");
				scanf("%d",&t[taille].Dg.Ds.jj);
				printf("\t\t\t\t\t\t - Date-mois :");
				scanf("%d",&t[taille].Dg.Ds.mm);
				printf("\t\t\t\t\t\t - Date-annee :");
				scanf("%d",&t[taille].Dg.Ds.aa);

				printf("\n\t\t\t\t\t - Date Retour de a agence\n");
				printf("\t\t\t\t\t\t - Date-jour :");
				scanf("%d",&t[taille].Dg.Dr.jj);
				printf("\t\t\t\t\t\t - Date-mois :");
				scanf("%d",&t[taille].Dg.Dr.mm);
				printf("\t\t\t\t\t\t - Date-annee :");
				scanf("%d",&t[taille].Dg.Dr.aa);

				printf("\n\t\t\t\t\t - Date fin d'assurance\n");
				printf("\t\t\t\t\t\t - Date-jour :");
				scanf("%d",&t[taille].Dg.Fa.jj);
				printf("\t\t\t\t\t\t - Date-mois :");
				scanf("%d",&t[taille].Dg.Fa.mm);
				printf("\t\t\t\t\t\t - Date-annee :");
				scanf("%d",&t[taille].Dg.Fa.aa);

				printf("\n\t\t\t\t\t - Date fin de visite technique\n");
				printf("\t\t\t\t\t\t - Date-jour :");
				scanf("%d",&t[taille].Dg.Vtech.jj);
				printf("\t\t\t\t\t\t - Date-mois :");
				scanf("%d",&t[taille].Dg.Vtech.mm);
				printf("\t\t\t\t\t\t - Date-annee :");
				scanf("%d",&t[taille].Dg.Vtech.aa);

				printf("\n\t\t\t\t\t - Montant de visite technique :");
				scanf("%f",&t[taille].Fl.Mt);

				printf("\t\t\t\t\t - Prix location par jour :");
				scanf("%f",&t[taille].Fl.Pj);

				printf("\t\t\t\t\t - Prix location par mois :");
				scanf("%f",&t[taille].Fl.Pm);


				taille++;

			}
			break;

			case 2: {
				printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
                printf("\n\n                                           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
				printf("\n                                           \xba Supprimer une voiture  \xba");
				printf("\n                                           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n");
				     printf("\n\n\t\t\t\t       - Donner le Matricule  : ");
                     scanf("%s",id);
                        i=0;
                         while(i<=taille-1 && strcmp(t[i].V.Mat,id)!=0)
                         {
                         i++;
						 }
                             if(i>taille-1)
							      printf("Matricule ne pas exist ");
							 
                             else 
                               {
                        	       for(j=i;j<=taille-1;j++)
                          	         {
                        		         t[j]=t[j+1];
                        		         //taille=taille-1;
							        }
							        //taille=taille-1;
							        taille--;
						      }
			}
			break;
			case 3: {

			   	 printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		       	 printf("\n\n                                           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
				 printf("\n                                           \xba  Modifier une voiture  \xba");
			   	 printf("\n                                           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n");
				 printf("\n                                   \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
		         printf("\n                                   \xba                                        \xba");
		         printf("\n                                   \xba    [1] Modifier la carecteristique     \xba");
	             printf("\n                                   \xba    [2] Modifier la Date                \xba");
		         printf("\n                                   \xba    [3] Modifier le frais de voiture    \xba");
		         printf("\n                                   \xba                                        \xba");
		         printf("\n                                   \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				 printf("\n\n\t\t\t\t       - Donne votre choix pour modifier  : ");
				scanf("%d",&mdf);
				if (mdf==1) {
					caract_mod();
					do {
						printf("\n\t\t\t\t\t- Donne votre choix pour modifier : ");
						scanf("%d",&mmc);
					} while(mmc<1 || mmc>8);
					if (mmc==1) {
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba   la carecteristique       \xba          Id dernier Client         \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				       
				
				        printf("\n\n\t\t\t\t       - Donner Matriculle de voiture  doit modifie  : ");
                        scanf("%s",id);
					    i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					    if(i>taille-1)
					            printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					     else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle ID Client : ");
					            scanf("%s",NvIDcl);
					            strcpy(t[i].V.ID,NvIDcl);
					         } 
	
					}
					if (mmc==2) {
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba   la carecteristique       \xba          Marque de voiture         \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

					
					    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                        scanf("%s",id);
					    i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					    if(i>taille-1)
					            printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					     else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle Marque : ");
					            scanf("%s",NvMaq);
					            strcpy(t[i].V.Mar,NvMaq);
					         } 
					
					}
					if (mmc==3) 
					{
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba   la carecteristique       \xba          Modele de voiture         \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				       
				          printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                          scanf("%s",id);
				       	i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					     if(i>taille-1)
                             printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
				    
					     else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle modele pour modifier : ");
					            scanf("%d",&NvMod);
					            t[i].V.Mod=NvMod;
					         }   
					
					}
					if (mmc==4) {
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba   la carecteristique       \xba          Matricule                 \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
                        
                        printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                        scanf("%s",id);
					    i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					    if(i>taille-1)
					            printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					     else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle Matricule : ");
					            scanf("%s",NvMat);
					            strcpy(t[i].V.Mat,NvMat);
					            
					         }   		
					}
					if (mmc==5) {
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba   la carecteristique       \xba          code Id de voiture        \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
					        
							
							 printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                             scanf("%s",id);
                             i=0;
                             while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                  i++;
					              if(i>taille-1)
                                       printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
				    
					              else 
                                      {	
                            
					                     printf("\n\n\t\t\t\t\t- Donne nouvelle Code Id de voiture : ");
					                     scanf("%d",&NvCv);
					                     t[i].V.Cv=NvCv;
					
					                 }
					}
					if (mmc==6) {
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba   la carecteristique       \xba          kilometrage de voiture    \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
					
					
					    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                        scanf("%s",id);
					    i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					        
							if(i>taille-1)
					            printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					     else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle kilometrage : ");
					            scanf("%f",&NvKm);
					            t[i].V.Km=NvKm;
					         }   		
			      	}
					if (mmc==7) {
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba   la carecteristique       \xba          couleur de voiture        \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
					
					    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                        scanf("%s",id);
					    i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					        
							if(i>taille-1)
					            printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					     else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle couleur : ");
					            scanf("%s",NvCol);
					            strcpy(t[i].V.Col,NvCol);
					         }
							
					}
					if (mmc==8) {
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba   la carecteristique       \xba          L'Etat de voiture         \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
					
					    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                        scanf("%s",id);
					    i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					    if(i>taille-1)
					            printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					     else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle Etat : ");
					            scanf("%s",NvEtat);
					            strcpy(t[i].V.Etat,NvEtat);
					         }   		
				
					}

				}
				if (mdf==2) {
					date_mod();
					printf("\n\n\t\t\t\t       - Donne votre choix pour modifier  : ");
					scanf("%d",&mmc);
					if (mmc==1)
					{
					    printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba            Date            \xba         mise en circulation        \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
					    mod_date();
					     printf("\n\t\t\t\t\t - Donner votre choix modifier : ");
                         scanf("%d",&mj);
                         switch(mj)
                         {
                         	case 1:
                         		{
                         			printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					             	printf("\n\t \xba    Modifie   \xba            Date            \xba       mise en circulation          \xba   jour   \xba");
						            printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                    
                                    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                         t[i].Dg.Dc.jj=Nvdj;
					                         
										 }
								 }break;
                            case 2:
							{
								printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						        printf("\n\t \xba    Modifie   \xba            Date            \xba       mise en circulation          \xba   mois   \xba");
					            printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                  
								printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         t[i].Dg.Dc.mm=Nvdm;
					                         
										}
							 }break; 
							 case 3:
							 {
							 	printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					            printf("\n\t \xba    Modifie   \xba            Date            \xba       mise en circulation          \xba   annee  \xba");
					            printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                
                                printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         t[i].Dg.Dc.aa=Nvda;
					                         
										}
														
							 }break;
							 case 4:
							 {
							 	printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					            printf("\n\t \xba    Modifie   \xba            Date            \xba       mise en circulation          \xba Tout date \xba");
					            printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                     	        
                     	        printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                          
											 printf("\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         
										     printf("\t\t\t\t\t- Donne nouvelle Date-annee : ");
					                         scanf("%d",&Nvda);
					                         
					                         t[i].Dg.Dc.jj=Nvdj;
                                             t[i].Dg.Dc.mm=Nvdm;
                                             t[i].Dg.Dc.aa=Nvda;
                                             
											}
					    		
							 }break;                        	
          	
                         	
						 }
	
					}
					if (mmc==2)
					{
                        printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba            Date            \xba         Sortie de a agence         \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
						mod_date();
					    printf("\n\t\t\t\t\t - Donner votre choix modifier : ");
                        scanf("%d",&mj);
						switch(mj)
					    {
					    	case 1:
					    	{
					    		printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					          	printf("\n\t \xba    Modifie   \xba            Date            \xba       Sortie de a agence           \xba   jour   \xba");
						        printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                         t[i].Dg.Ds.jj=Nvdj;
					                         
										}
					    		
							}break;
							
							case 2:
							{
								    printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					           	    printf("\n\t \xba    Modifie   \xba            Date            \xba       Sortie de a agence           \xba   mois   \xba");
					            	printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         t[i].Dg.Ds.mm=Nvdm;
					                         
										}
								
							}break;
					    	
					    	
					    	case 3:
					    	{
					    		printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					            printf("\n\t \xba    Modifie   \xba            Date            \xba       Sortie de a agence           \xba   annee  \xba");
					            printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                
                                 printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         t[i].Dg.Ds.aa=Nvda;
					                         
										}
					    		
					    	
							}break;

					    	case 4:
					    	{
					    		printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					            printf("\n\t \xba    Modifie   \xba            Date            \xba       Sortie de a agence           \xba Tout date \xba");
					            printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                
                                printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                          
											 printf("\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         
										     printf("\n\t\t\t\t\t- Donne nouvelle Date-annee : ");
					                         scanf("%d",&Nvda);
					                         
					                         t[i].Dg.Ds.jj=Nvdj;
                                             t[i].Dg.Ds.mm=Nvdm;
                                             t[i].Dg.Ds.aa=Nvda;
                                             
											}
					    		
							}break;
  	
						}
					}
					if (mmc==3)
					{
					    printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba            Date            \xba         Retour de a agence         \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                        mod_date();
					    printf("\n\t\t\t\t\t - Donner votre choix modifier : ");
                        scanf("%d",&mj);
                        switch(mj)
                        {
                        	case 1:
                        		{
                        		printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						        printf("\n\t \xba    Modifie   \xba            Date            \xba       Retour de a agence           \xba   jour   \xba");
						        printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
 	                        	printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                          t[i].Dg.Dr.jj=Nvdj;
					                         
										}
						    }break;
							
							case 2:
								{
								printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						        printf("\n\t \xba    Modifie   \xba            Date            \xba       Retour de a agence           \xba   mois   \xba");
					         	printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
 	                            printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-mois: ");
					                         scanf("%d",&Nvdm);
					                          t[i].Dg.Dr.mm=Nvdm;
					                         
										}
									
							}break;
                           
						    case 3:
							{
								
								printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					            printf("\n\t \xba    Modifie   \xba            Date            \xba       Retour de a agence           \xba   annee  \xba");
					            printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                 printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-annee: ");
					                         scanf("%d",&Nvda);
					                          t[i].Dg.Dr.aa=Nvda;
					                         
										}
								
						   }break; 
						   
						   case 4:
						   {
						   	
						  	 printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					         printf("\n\t \xba    Modifie   \xba            Date            \xba       Retour de a agence           \xba Tout date \xba");
					         printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                             
                             printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                          
											 printf("\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         
										     printf("\n\t\t\t\t\t- Donne nouvelle Date-annee : ");
					                         scanf("%d",&Nvda);
					                         
					                         t[i].Dg.Dr.jj=Nvdj;
                                             t[i].Dg.Dr.mm=Nvdm;
                                             t[i].Dg.Dr.aa=Nvda;
                                             
											 }
						   }break;                      	
    	
			    	}					

					}
					if (mmc==4)
					{
						printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba            Date            \xba          fin d'assurance           \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                        mod_date();
					    printf("\n\t\t\t\t\t - Donner votre choix modifier : ");
                        scanf("%d",&mj);
                        switch(mj)
                        {
                        	case 1:
                        		{
                        			printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					            	printf("\n\t \xba    Modifie   \xba            Date            \xba       fin d'assurance              \xba   jour   \xba");
						            printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                   
								    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                 else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                         t[i].Dg.Fa.jj=Nvdj;
					                         
									     }
					                    
                        			
                        			
								}break;
							case 2:
								{
								    printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					             	printf("\n\t \xba    Modifie   \xba            Date            \xba       fin d'assurance              \xba   mois   \xba");
					             	printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                     printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                 else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         t[i].Dg.Fa.mm=Nvdm;
					                         
									     }
									
								}break;
                        	case 3:
                        		{
                        			  printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					                  printf("\n\t \xba    Modifie   \xba            Date            \xba       fin d'assurance              \xba   annee  \xba");
					                  printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                      
                                      printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                      scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                 else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvda);
					                         t[i].Dg.Fa.aa=Nvda;
					                  
									  }
                        			
								}break;
                        	case 4:
							{
									printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
					                printf("\n\t \xba    Modifie   \xba            Date            \xba       fin d'assurance              \xba Tout date \xba");
					                printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                     			    printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                    scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                          
											 printf("\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         
										     printf("\n\t\t\t\t\t- Donne nouvelle Date-annee : ");
					                         scanf("%d",&Nvda);
					                         
					                         t[i].Dg.Fa.jj=Nvdj;
                                             t[i].Dg.Fa.mm=Nvdm;
                                             t[i].Dg.Fa.aa=Nvda;
                                             
											 }
							
							
							}break;                        	

						}

					
					}
					if (mmc==5)
					{
					    printf("\n\t         \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
						printf("\n\t         \xba    Modifie   \xba            Date            \xba       fin de visite technique      \xba ");
						printf("\n\t         \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                        mod_date();
                        printf("\n\t\t\t\t\t - Donner votre choix modifier : ");
                        scanf("%d",&mj);
                        if (mj==1)
                        {
                        
						printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n\t \xba    Modifie   \xba            Date            \xba       fin de visite technique      \xba   jour   \xba");
						printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                         
						 printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                         scanf("%s",id);
					     i=0;
                         while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					      if(i>taille-1)
					          printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					    
						 else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					            scanf("%d",&Nvdj);
					            t[i].Dg.Vtech.jj=Nvdj;
					         } 

						}
						if(mj==2)
						  {
						  	printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						    printf("\n\t \xba    Modifie   \xba            Date            \xba       fin de visite technique      \xba   mois   \xba");
						    printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                            printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                       
					    scanf("%s",id);
					    i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					      if(i>taille-1)
					          printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					    
						 else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle Date-mois : ");
					            scanf("%d",&Nvdm);
					            t[i].Dg.Vtech.mm=Nvdm;
					         } 
						  }
						  if(mj==3)
						  {
						  	 printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						     printf("\n\t \xba    Modifie   \xba            Date            \xba       fin de visite technique      \xba  annee   \xba");
					        	printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                          printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                        scanf("%s",id);
					    i=0;
                        while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                         i++;
					      if(i>taille-1)
					          printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					    
						 else 
                            {	
					            printf("\n\n\t\t\t\t\t- Donne nouvelle Date-annee : ");
					            scanf("%d",&Nvda);
					            t[i].Dg.Vtech.aa=Nvda;
					         } 
						  }
						  if(mj==4)
						  {
						    	printf("\n\t \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						        printf("\n\t \xba    Modifie   \xba            Date            \xba       fin de visite technique      \xba   Tout date   \xba");
						        printf("\n\t \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc"); 
                                 
								     printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                     scanf("%s",id);
					                 i=0;
                                    while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                    i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Date-jour : ");
					                         scanf("%d",&Nvdj);
					                          
											 printf("\t\t\t\t\t- Donne nouvelle Date-mois : ");
					                         scanf("%d",&Nvdm);
					                         
										     printf("\t\t\t\t\t- Donne nouvelle Date-annee : ");
					                         scanf("%d",&Nvda);
					                         
					                         t[i].Dg.Vtech.jj=Nvdj;
                                             t[i].Dg.Vtech.mm=Nvdm;
                                             t[i].Dg.Vtech.aa=Nvda;
					                         
										 }
						  }
                        
					}
					
					
				}
				if (mdf==3) 
				{
				  frais_mod();
				  printf("\n\t\t\t\t\t - Donner votre choix modifier : ");
                  scanf("%d",&mj);
				  switch(mj)
				  {
				  	case 1: 
				  	{
				  		printf("\n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n\t           \xba    Modifie   \xba      frais de voiture      \xba      Valeur Acheter      \xba ");
						printf("\n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				       
				       printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                     scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t\t- Donne nouvelle Valeur Acheter : ");
					                         scanf("%f",&NvVA);
					                         t[i].V.Va=NvVA;
					                          
										 }
				       
				  		
					  }break;
					
					case 2:
						{
						printf("\n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n\t           \xba    Modifie   \xba      frais de voiture      \xba   Montant de visite technique   \xba ");
						printf("\n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				        
				        printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                     scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
					                        printf("\n\n\t\t\t    - Donne nouvelle Montant de visite technique : ");
					                         scanf("%f",&NvMVt); 
									        
									        t[i].Fl.Mt=NvMVt;
     
										 }

						}break;
						
			      	case 3:
					  {
						printf("\n\t              \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n\t              \xba    Modifie   \xba      frais de voiture      \xba   Prix location par jour   \xba ");
						printf("\n\t              \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				        
				        printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                     scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t    - Donne nouvelle Prix de location par jour : ");
					                         scanf("%f",&NvLPJ);
					                        t[i].Fl.Pj=NvLPJ;
										 }
				        
						
					  }break;
					case 4:
					{
					    printf("\n\t             \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n\t             \xba    Modifie   \xba      frais de voiture      \xba   Prix location par mois   \xba ");
						printf("\n\t             \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				        
				        printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                     scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											 printf("\n\n\t\t\t\t    - Donne nouvelle Prix de location par mois : ");
					                         scanf("%f",&NvLPM);
					                          
										 }
				        
						
						
					}break;
					case 5:
					{
					    printf("\n\t             \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
						printf("\n\t             \xba    Modifie   \xba      frais de voiture      \xba       Tout Le Frais      \xba ");
						printf("\n\t             \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbbc\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
				       	
						printf("\n\n\t\t\t\t       - Donner Matriculle de voiture doit modifie  : ");
                                     scanf("%s",id);
					                 i=0;
                                     while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                                     i++;
					                 if(i>taille-1)
					                     printf("\n\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
					                     else
					                     {
					                     	
											printf("\n\n\t\t\t\t\t- Donne nouvelle Valeur Acheter : ");
					                         scanf("%f",&NvVA);
					                          
					                        printf("\t\t\t\t        - Donne nouvelle Montant de visite technique : ");
					                         scanf("%f",&NvMVt); 
											 
											 printf("\t\t\t\t        - Donne nouvelle Prix de location par jour : ");
					                         scanf("%f",&NvLPJ);
					                         
										     printf("\t\t\t\t        - Donne nouvelle Prix de location par mois : ");
					                         scanf("%f",&NvLPM);
					                         
					                         t[i].V.Va=NvVA;
					                         t[i].Fl.Mt=NvMVt;
					                         t[i].Fl.Pj=NvLPJ;
					                         t[i].Fl.Pm=NvLPM;
						               
									   }
						
					}break;		
	
				  }
	
				}
			}
			break;
			case 4: {
				printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
				printf("\n                                           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
				printf("\n                                           \xba  Afficher une voiture  \xba");
				printf("\n                                           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n");
                
                
                
                for(i=0;i<=taille-1;i++)
               {
               	     printf("\n                                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb  \xc9\xcd\xcd\xcd\xcd\xcd\xbb");
				     printf("\n                                       \xba      Voiture Num      \xba  \xba  %d  \xba",i+1);
			         printf("\n                                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc  \xc8\xcd\xcd\xcd\xcd\xcd\xbc");
					   					   
				    printf("\n\n\t\t\t\t\t - Id dernier Client : %s",t[i].V.ID);
                	printf("\n\t\t\t\t\t - la Marque de voiture : %s",t[i].V.Mar);
                	printf("\n\t\t\t\t\t - la Modele de voiture : %d",t[i].V.Mod);
                	printf("\n\t\t\t\t\t - la Matricule : %s",t[i].V.Mat);
                	printf("\n\t\t\t\t\t - La code Id de voiture : %d",t[i].V.Cv);
                	printf("\n\t\t\t\t\t - Saisir kilometrage de voiture : %.3f",t[i].V.Km);
                	printf("\n\t\t\t\t\t - La couleur de voiture : %s",t[i].V.Col);
                	printf("\n\t\t\t\t\t - Saisir L'Etat de voiture : %s",t[i].V.Etat);
                	printf("\n\t\t\t\t\t - Valeur Acheter : %.3f",t[i].V.Va);
                	
					printf("\n\n\t\t\t\t\t - Date de mise en circulation \n");
                	printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Dc.jj);
                	printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Dc.mm);
                	printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Dc.aa);
                	
                	printf("\n\n\t\t\t\t\t - Date Sortie de a agence\n");
                    printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Ds.jj);
                    printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Ds.mm);
                    printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Ds.aa);
                    
                    printf("\n\n\t\t\t\t\t - Date Retour de a agence\n");
                    printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Dr.jj);
                    printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Dr.mm);
                    printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Dr.aa);
                    
                    printf("\n\n\t\t\t\t\t - Date fin d'assurance\n");
                    printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Fa.jj); 
					printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Fa.mm);
                    printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Fa.aa);
					
					printf("\n\n\t\t\t\t\t - Date fin de visite technique\n");
                    printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Vtech.jj);
                    printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Vtech.mm);
                    printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Vtech.aa);
                    
                    printf("\n\n\t\t\t\t\t - Montant de visite technique : %.3f",t[i].Fl.Mt);
                    printf("\n\t\t\t\t\t - Prix location par jour : %.3f",t[i].Fl.Pj);
                    printf("\n\t\t\t\t\t - Prix location par mois : %.3f\n",t[i].Fl.Pm);
                    printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
				} 
                
        
				}
			break;
			 case 5:
			  {
				printf("\n\n\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
				printf("\n                                           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
				printf("\n                                           \xba  Chercher une voiture  \xba");
				printf("\n                                           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc\n");
                printf("\n\n\t\t\t\t       - Donner Matricule de voiture  : ");
                scanf("%s",id);
                i=0;
                while(i<=taille-1 && strcmp(id,t[i].V.Mat)!=0)
                 i++;	
                
                if(i>taille-1)
                  printf("\n\t\t\t\t\t\t!! ID NEXISTE PAS !!!\n  ");
                else 
                {
                	printf("\n\n\t\t\t\t\t - Id dernier Client : %s",t[i].V.ID);
                	printf("\n\t\t\t\t\t - la Marque de voiture : %s",t[i].V.Mar);
                	printf("\n\t\t\t\t\t - la Modele de voiture : %d",t[i].V.Mod);
                	printf("\n\t\t\t\t\t - la Matricule : %s",t[i].V.Mat);
                	printf("\n\t\t\t\t\t - La code Id de voiture : %d",t[i].V.Cv);
                	printf("\n\t\t\t\t\t - Saisir kilometrage de voiture : %.3f",t[i].V.Km);
                	printf("\n\t\t\t\t\t - La couleur de voiture : %s",t[i].V.Col);
                	printf("\n\t\t\t\t\t - Saisir L'Etat de voiture : %s",t[i].V.Etat);
                	printf("\n\t\t\t\t\t - Valeur Acheter : %.3f",t[i].V.Va);
                	
					printf("\n\n\t\t\t\t\t - Date de mise en circulation \n");
                	printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Dc.jj);
                	printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Dc.mm);
                	printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Dc.aa);
                	
                	printf("\n\n\t\t\t\t\t - Date Sortie de a agence\n");
                    printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Ds.jj);
                    printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Ds.mm);
                    printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Ds.aa);
                    
                    printf("\n\n\t\t\t\t\t - Date Retour de a agence\n");
                    printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Dr.jj);
                    printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Dr.mm);
                    printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Dr.aa);
                    
                    printf("\n\n\t\t\t\t\t - Date fin d'assurance\n");
                    printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Fa.jj); 
					printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Fa.mm);
                    printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Fa.aa);
					
					printf("\n\n\t\t\t\t\t - Date fin de visite technique\n");
                    printf("\n\t\t\t\t\t\t - Date-jour : %d",t[i].Dg.Vtech.jj);
                    printf("\n\t\t\t\t\t\t - Date-mois : %d",t[i].Dg.Vtech.mm);
                    printf("\n\t\t\t\t\t\t - Date-annee : %d",t[i].Dg.Vtech.aa);
                    
                    printf("\n\n\t\t\t\t\t - Montant de visite technique : %.3f",t[i].Fl.Mt);
                    printf("\n\t\t\t\t\t - Prix location par jour : %.3f",t[i].Fl.Pj);
                    printf("\n\t\t\t\t\t - Prix location par mois : %.3f\n",t[i].Fl.Pm);
				}
                  
			}
			break;
			case 6:
			 {
           //retour	
			}
			break;
			case 7: {
				return 0;
			}
			break;

		}
		system("pause");
	} while(choix!=7);

	return 0;
}

