#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//---------------------------------------------------------------------------------------------------------
//------------------  Structures et types ( Gestoper ) ----------------------------------------------------
//---------------------------------------------------------------------------------------------------------


typedef struct 
{
	int ID_Location;
	char ID_Voiture[10];
	char ID_Client [10];
	char DDS[10];
	char DDR[10];
	float Montant;

}typeLocation;

typedef struct Elem
{
   typeLocation Donnee;
   struct Elem *Suiv;

}typeElem;

typedef struct
{
  
  typeElem *tete;
  typeElem *Queue;
  int taille;	
	
}typeList;
//---------------------------------------------------------------------------------------------------------
//------------------  Structures et types ( GestClt ) ----------------------------------------------------
//---------------------------------------------------------------------------------------------------------
typedef struct{
	
	char CIN[10];
	char prenom_nom[25];
	char adresse[30];
	char telephone[8];
	
}typeClient;

typedef struct Elemnt{
 	typeClient Data;
 	struct Elemnt *Suiv;	
}typeElemnt;

typedef struct 
{
	typeElemnt *tete;
	typeElemnt *Queue;
	int taille;
}typeListe;
//---------------------------------------------------------------------------------------------------------
//------------------  Structures et types ( GestVoi ) -----------------------------------------------------
//---------------------------------------------------------------------------------------------------------
typedef struct{
	char Matricule[10];
	char Marque[15];
	float prix_loc_jrDT;
	char Date_fin_assur[10];
}TypeVoi;
//-----------------
typedef struct ElemVoi{
	TypeVoi Donnee;
	struct ElemVoi *Suiv;
}TypeElem;
//------------------
typedef struct {
	TypeElem * Tete;
	TypeElem * Queue;
	int Taille;		
}Typelist;

//----------------------------------------------------------------------------------------------------------
//-------------------------------------- Fin Structure ------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------

//------------------------- Interface & menu -------------------------

//void Menu_princ();                  // Done

//------------------------------ Fin ---------------------------------

//----------------------------- Menu ---------------------------------
//--------------------------------------------------------------------

void Menu_Gestvoi();                // Done
void Menu_Gestclt();                // Done
int Menu_Gestoper();               // Done

//------------------------------ Fin ---------------------------------

//----------- Gestion Des Operation De Location ----------------------
//--------------------------------------------------------------------

int Menu_Gestoper();               // Done
void Menu_Gestoper_Modf();          // Done
void Menu_Gestoper_Modf_IDLoc();    // Done
void Menu_Gestoper_Modf_IDVoi();    // Done
void Menu_Gestoper_Modf_IDClt();    // Done
void Menu_Gestoper_Modf_DDS();      // Done
void Menu_Gestoper_Modf_DDR();      // Done
void Menu_Gestoper_AJOU();          // Done
void Menu_Gestopr_Rech();           // Done
void Menu_Gestoper_SUPP();          // Done
void Menu_Gestoper_AFF();           // Done 
void Menu_Gestoper_AFF_OperLoc();   // Done
void Menu_Gestoper_AFF_VoiLoue();   // Done 
void Menu_Gestoper_AFF_VoiDispo();  // Done
void Menu_DetruireListLoc();
void Menu_SuppListLoc();

void choixALL_Menu_Gestoper();      // Done 
int ChoixGestoper();                // Done
int ChoixGestoper_AFF();            // Done


void InitListLocation(typeList *L);                // Done
int TailleListe(typeList L);                       // Done
void AjoutList_FinLoc(typeList *L,Typelist *Lvoi,typeListe *Lclt); // Done.....Pressque 
typeLocation GetLoc();                             // Done
int AfficheListLoc(typeList L);                   // Done 
void DetruireListLoc(typeList *L);                 // Done
int RechercheListLoc(typeList L,int D);            // Done
int SupprimerListLoc(typeList *L,int D);           // Done
int ModifierListeLoc(typeList *L,typeLocation D,int ID); // Done
int ModifierIDLoc(typeList *L,int ID,int IdModf);        // Done
int ModifierIDClt(typeList *L,int ID,char IdModf[10]);   // Done
int ModifierIDVoi(typeList *L,int ID,char IdModf[10]);   // Done 
 

//--------------------------------------------------------------------
//--------------------------------------------------------------------


//----------- Gestion Des Voiturs -------------------------------------
//---------------------------------------------------------------------

int Menu_princ();			  // Done
int menu_voi();              // Done
void Menu_GestVoi_AJOU();     // Done
void menu_voi_modf_ppj();     // Done
void menu_voi_supp();         // Done
void menu_voi_rech();         // Done
void gest_voi_modf_mat();     // Done
void gest_voi_modf_mar();     // Done
void gest_voi_modf_dfa();     // Done
void menu_voi_modf();         // Done
void menu_voi_aff();          // Done
void gest_voi_supp_suppVoi(); // Done
void gest_voi_supp_suppTO();  // Done

//-----------------------------------------------------------------------
//-------------------------prototype fonction---------------------------
//-----------------------------------------------------------------------
int Choix_OpVoi();				 //choix pour 
int Choi_SUPP();				 //choix pour la suppr
void Initlistvoi(Typelist *L);  //initialisation la liste
void choixALL_Menu_Voiture();	//grand switch de choix de menu
TypeVoi GetVoi();				//saisir de info de la voiture	
void AjoutList_Fin(Typelist *L, TypeVoi D); //AJOUTE une liste ala fin
int Recherche_voiaff(Typelist *L,char Matri[10]);//RECHERCHE un liste selon le matricule
void DetruireList(TypeElem **L);	//supprimer tous la liste
void AfficheList(Typelist L);        //affichage de liste voiture
int ModiferlistVoi(Typelist *L,TypeVoi D,char Matr[10]);
//------------------------- Fin ---------------------------------------


main ()
{   
/*   int CHOIX;
   do {
   	  CHOIX=Menu_princ();

   	switch(CHOIX)
   {
   	 case 1 : choixALL_Menu_Voiture(); break;
     case 2 : choixALL_Menu_Gestoper(); break;
     case 3 : break;
     default :Menu_princ();break;
   }break;
   	
   }while(CHOIX<1 || CHOIX>3);*/
   choixALL_Menu_Voiture();
   
   
   



     
	  
}   

//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------
void Menu_Gestvoi()
{
	printf("          \n                 \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n                 \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                 \xba %c  1  %c %c  Gestion des voitures  %c \xba",219,219,219,219);
	printf("\n                 \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

    printf("          \n                 \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
    //-------------------------------------------------------------------------------------------------------------------------------------------------------
    printf("          \n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  1  %c %c%c     Ajouter       %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  2  %c %c%c     Modifier      %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  3  %c %c%c     Supprimer     %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  4  %c %c%c     Recherche     %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  5  %c %c%c     Affiche       %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  6  %c %c%c     Retour        %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("          \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");

}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int ChoixGestoper_AFF()
{
  int Choix;
  do
	{
		printf("\n Donner votre choix : ");
		scanf("%d",&Choix);
	}while(Choix<1 || Choix>5);
	
	return Choix;	
}
//----------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------
int ChoixGestoper()
{
  int Choix;
  do
	{
		printf("\n\n\t\t\t\t- Donner votre choix : ");
		scanf("%d",&Choix);
	}while(Choix<1 || Choix>6);
	
	return Choix;	
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
 void choixALL_Menu_Gestoper()
{ 

    typeList A;
    typeListe B;
    Typelist C;
    InitListLocation(&A);
	int Choix1,Choix2,Choix3;
	//Menu_Gestoper();
	//Choix1=ChoixGestoper();
	//Choix1=Menu_Gestoper();
	
	do{
		Choix1=Menu_Gestoper();
	
	switch(Choix1)
	{   
	    Menu_Gestoper();
		case 1 : 
	    {
			/*Menu_Gestoper_AJOU();
			typeLocation Donne;
            Donne=GetLoc();
            AjoutList_FinLoc(&A,Donne);
			break;*/
			AjoutList_FinLoc(&A,&B,&C);
			break;
	    }
		case 2 :
		{
			
			Menu_Gestoper_Modf();
			Choix2=ChoixGestoper();
			
			switch(Choix2)
			{   
				case 1 :
					Menu_Gestoper_Modf_IDLoc();
				  
				   int id,Nid,test;
					
					printf("\n\n\t\t\t\t   - Donne ID Location Doit Modifier : ");
					scanf("%d",&id);
					printf("\n\t\t\t\t     - Donne Nouvelle ID Location : ");
					scanf("%d",&Nid);
					
					test=ModifierIDLoc(&A,id,Nid);
					if (test==0)
					     printf("\n\n\t\t\t\t   - Modfifier Valide ");
					else
					     printf("\n\n\t\t\t\t        - ID Ne Pas exist ! ");
					   
					    break;
				
				case 2 :
					Menu_Gestoper_Modf_IDVoi();

					int ID;
					char NidVoi[10];
					printf("\n\n\t\t\t\t   - Donne ID Location Doit Modifier : ");
					scanf("%d",&id);
					printf("\n\t\t\t\t     - Donne Nouvelle ID Voiture : ");
					scanf("%s",NidVoi);
					test=ModifierIDVoi(&A,ID,NidVoi);
					if (test==0)
					     printf("\n\n\t\t\t\t   - Modefier Valide ");
					else
					     printf("\n\n\t\t\t\t        - ID Ne Pas exist ! ");
					
					
					break;
				
				case 3 : 
				    Menu_Gestoper_Modf_IDClt();
				    
				    
				    int IDL;
					char NidClt[10];
					printf("\n\n\t\t\t\t   - Donne ID Location Doit Modifier : ");
					scanf("%d",&IDL);
					printf("\n\t\t\t\t     - Donne Nouvelle ID 	Client : ");
					scanf("%s",NidClt);
					test=ModifierIDVoi(&A,IDL,NidClt);
					if (test==0)
					     printf("\n\n\t\t\t\t   - Modefier Valide ");
					else
					     printf("\n\n\t\t\t\t        - ID Ne Pas exist ! ");
					
				    
				    //ModifierIDClt(&A,12,"Hous");
				    break;
				case 4 :
					Menu_Gestoper_Modf_DDS();
					
					
					break;
				case 5 :
					Menu_Gestoper_Modf_DDR();
					
					
					break;
				default : 
					Menu_Gestoper();
					break;
			}
			break;
		}
		case 3 : 
	  	{
	  		int LocSupp,test;
			Menu_Gestoper_SUPP();
			Choix3=ChoixGestoper_AFF();
			
			switch(Choix3)
			{
				case 1 :
					Menu_DetruireListLoc();
					DetruireListLoc(&A);
					printf("\n\n\t\t\t\t        - Valide Detruire ! ");
					break;
				case 2 :
					Menu_SuppListLoc();
		          	printf("\n\n\t\t\t\t   - Donne ID Location Doit Supprimer : ");
		          	scanf("%d",&LocSupp);
			        test=SupprimerListLoc(&A,LocSupp);
			        if (test==0)
				        printf("\n\n\t\t\t\t   - Supprimer Valide ");
			        else
			           	printf("\n\n\t\t\t\t        - ID Ne Pas exist ! ");
					break;
				
				default :
					Menu_Gestoper();
					break;	
				
			}
			break;

		}
		case 4 :
		{
			Menu_Gestopr_Rech();
			
			int LocRech,test;
			printf("\n\n\t\t\t\t   - Donne ID Location  : ");
			scanf("%d",&LocRech);
			test=RechercheListLoc(A,LocRech);
			if (test==0)
				printf("\n\n\t\t\t\t- Recherche Valide ");
			else
				printf("\n\n\t\t\t\t        - ID Ne Pas exist ! ");
			
			//RechercheListLoc(A,1);
			
			break;
		}
		case 5 :
		{
			
			Menu_Gestoper_AFF();
			Choix3=ChoixGestoper_AFF();
			
			switch(Choix3)
			{
			   
			   case 1 :
			   		Menu_Gestoper_AFF_OperLoc();  //strcmp
			   		int test;
			   		test=AfficheListLoc(A);
			   		if(test==1)
			   		printf("\n\n\t\t\t\t        - List Vide ! ");
			   		   
			   		
			   		break;
				case 2:
					Menu_Gestoper_AFF_VoiLoue(); //strcmp
					break;
				case 3 :
					Menu_Gestoper_AFF_VoiLoue();   //strcmp
					break;
				case 4 :
					Menu_Gestoper_AFF_VoiDispo();  //strcmp
					break;
				default :
					Menu_Gestoper();
					break;	
			}
			break;
		}
		case 6 :
		{
			Menu_princ();
			break;
		}
    }	
}while(Choix1!=6);
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
int Menu_Gestoper()
{
	int Choix;
	printf("          \n                   \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c \xba",219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
    
	printf("          \n                   \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	//-------------------------------------------------------------------------------------------------------------------------------------------------------
	//int choix;
	printf("        \n\t                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n\t                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  1  %c %c%c     Ajouter       %c%c \xba",219,219,219,219,219,219); 
    printf("          \n\t                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  2  %c %c%c     Modifier      %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  3  %c %c%c     Supprimer     %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  4  %c %c%c     Recherche     %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  5  %c %c%c     Affiche       %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  6  %c %c%c     Retour        %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("         \n\t                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n\t                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");

   
   do
	{
		printf("\n\n\t\t\t\t- Donner votre choix : ");
		scanf("%d",&Choix);
	}while(Choix<1 || Choix>6);
	
	return Choix;

}
//--------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------
    
void Menu_Gestoper_Modf_IDLoc()
{
    printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Modifier  %c %c     ID Location    %c \xba",219,219,219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//--------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------- 
void Menu_Gestoper_Modf_IDVoi()
{
    printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Modifier  %c %c     ID Voiture     %c \xba",219,219,219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \t\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//--------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------
    
void Menu_Gestoper_Modf_IDClt()
{
    printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Modifier  %c %c      ID Client     %c \xba",219,219,219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \t\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//--------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------- 
void Menu_Gestoper_Modf_DDS()
{
    printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Modifier  %c %c   Date De Sortie   %c \xba",219,219,219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//--------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------- 
void Menu_Gestoper_Modf_DDR()
{
    printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Modifier  %c %c   Date De Retour   %c \xba",219,219,219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_Gestoper_Modf()
{
    printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Modifier  %c \xba",219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    
	//--------------------------------------------------------------------------------------------------------------------------------------------------
    
	printf("        \n\t                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n\t                       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  1  %c %c%c        ID Location         %c%c \xba",219,219,219,219,219,219); 
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  2  %c %c%c         ID Voiture         %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  3  %c %c%c         ID Client          %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  4  %c %c%c       Date De Sortie       %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  5  %c %c%c       Date De Retour       %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c            List            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  6  %c %c%c           Retour           %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("         \n\t                       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n\t                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_Gestoper_AJOU()
{
	printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c    Ajouter   %c \xba",219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_Gestopr_Rech()
{
	printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Recherche  %c \xba",219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
			
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_Gestoper_AFF()
{
printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Affichage  %c \xba",219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    
	//--------------------------------------------------------------------------------------------------------------------------------------------------
    
	printf("        \n\t                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n\t                       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
	printf("          \n\t                       \xba %c  1  %c %c%c    Operation de Location   %c%c \xba",219,219,219,219,219,219);
	printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  2  %c %c%c       Clients Louer        %c%c \xba",219,219,219,219,219,219); // Par Voiture Donne 
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  3  %c %c%c       Voitures louees      %c%c \xba",219,219,219,219,219,219); // Par Client Donne
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  4  %c %c%c    voitures disponibles    %c%c \xba",219,219,219,219,219,219); // Par date Donne 
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c  5  %c %c%c           Retour           %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                       \xba %c     %c %c%c                            %c%c \xba",219,219,219,219,219,219);
    printf("         \n\t                       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n\t                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_Gestoper_SUPP()
{
	printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c  Gestion des Operation des location %c %c   Supprimer  %c \xba",219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
  
	printf("        \n\t                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n\t                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                        %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  1  %c %c%c     Supprimer Tout     %c%c \xba",219,219,219,219,219,219); 
    printf("          \n\t                  \xba %c     %c %c%c                        %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  2  %c %c%c     Supprimer List     %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                        %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c  3  %c %c%c         Retour         %c%c \xba",219,219,219,219,219,219);
    printf("          \n\t                  \xba %c     %c %c%c                        %c%c \xba",219,219,219,219,219,219);
    printf("         \n\t                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n\t                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
}
  

//-------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_Gestoper_AFF_OperLoc()
{
	printf("          \n           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n           \xba %c  3  %c %c  Gestion des Operation des location %c %c   Affichage  %c %c    Operation de Location   %c \xba",219,219,219,219,219,219,219,219);
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("                    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_Gestoper_AFF_VoiLoue()
{
	 
    printf("          \n           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n           \xba %c  3  %c %c  Gestion des Operation des location %c %c   Affichage  %c %c  Voitures Louer  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("\t\t                   \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_Gestoper_AFF_VoiDispo()
{
	printf("          \n           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n           \xba %c  3  %c %c  Gestion des Operation des location %c %c   Affichage  %c %c  Voitures Disponible  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("\t                   \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_clt_modif()
{
	
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     Gestion des clients       %c  %c   Modifier  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	
	
	int choix;
	printf("        \n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  1  %c %c%c           CIN           %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  2  %c %c%c       nom & prenom      %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  3  %c %c%c         adresse         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  4  %c %c%c        telephone        %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  5  %c %c%c          Retour         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("         \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_clt_modif_add()
{
    printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  3  %c %c     Gestion des clients       %c  %c  Modifier   %c  %c   Adresse   %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
    printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_clt_modif_pr()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  1  %c %c     Gestion des clients       %c  %c  Modifier   %c  %c Prenom&Nom  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_clt_modif_tel()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  3  %c %c     Gestion des clients       %c  %c  Modifier   %c  %c  Telephone  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_clt_rech()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     Gestion des clients       %c  %c  Recherche  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_clt_modf_cin()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     Gestion des clients       %c  %c  Modifier   %c  %c     CIN     %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_clt_aff()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     Gestion des clients       %c  %c   Afficher  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_clt_sup()
{
  	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     Gestion des clients       %c  %c  Supprimer  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void Gest_client_ajou()
{
    printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  3  %c %c         Gestion des clients         %c %c    Ajouter   %c \xba",219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void InitListLocation(typeList *L)
{
	
	L->taille=0;
	L->tete=NULL;
	L->Queue=NULL;

}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int TailleListe(typeList L)
{
	typeElem *Ptr;
	int nb;
	Ptr=L.tete;
	if(Ptr==NULL)
	   return 0;
	
	else 
	{
		nb=0;
		while(Ptr!=NULL)
		{
			nb++;
			Ptr=Ptr->Suiv;
		}
		return nb;	
	}
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*void AjoutList_FinLoc(typeList *L,typeLocation D)
{
	typeElem *Ptr;								
	Ptr=(typeElem *)malloc(sizeof(typeElem));	
	
	Ptr->Donnee=D;								
	Ptr->Suiv=NULL;							
	
	if (L->tete==NULL)							
		L->tete=Ptr;						
	else
		L->Queue->Suiv=Ptr;					

	L->Queue=Ptr;								
	L->taille++;								
}
*/

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
typeLocation GetLoc()
{
	typeLocation DonLoc;
	printf("\n -Donne Id Location : ");
	scanf("%d",&DonLoc.ID_Location);
	printf("\n -Donne Id voiture : ");
	scanf("%s",DonLoc.ID_Voiture);
	printf("\n -Donne Id Client : ");
	scanf("%s",DonLoc.ID_Client);
	
	return DonLoc;
	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int AfficheListLoc(typeList L)
{
	typeElem *Ptr;								// D?claration du pointeur qui pointe sur un ?l?ment de la liste
	Ptr=L.tete;									// On met le pointeur sur la t?te de la liste
	printf("\n");
	
	if (Ptr!=NULL)
	{
		 while(Ptr!=NULL)							// tant qu'on n'a pas arriv? ?la fin de la liste
	{
		printf("\nID LOCATION  %d|",Ptr->Donnee.ID_Location);
		printf("\nID VOITURE %s  |",Ptr->Donnee.ID_Voiture);	
	    printf("\nID CLIENT %s   |",Ptr->Donnee.ID_Client);			// Afficher la donn?e
		printf("\nDATE DE SORTIE %s|",Ptr->Donnee.DDS);
		printf("\nDATE DE RETOUR %s",Ptr->Donnee.DDR);
		
		
		Ptr=Ptr->Suiv;	
		printf("\n");
							// Passer ? l'?l?ment suivant de la liste
	}
	printf("\n");
	}
    else 
      return 1;
	

	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void DetruireListLoc(typeList *L)
{
	typeElem *Ptr, *Suiv;
	Ptr=L->tete;						
	while(Ptr!=NULL)					
	{
		Suiv=Ptr->Suiv;				
		free(Ptr);						
		Ptr=Suiv;					
	}
	L->tete=NULL;						
	L->Queue=NULL;						
	L->taille=0;						
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 int RechercheListLoc(typeList L,int D)
{
	typeElem *Ptr;
	Ptr=L.tete;
	int Pos=0;
	while(Ptr!=NULL && Ptr->Donnee.ID_Location!=D)			
	{
		Ptr=Ptr->Suiv;						
		Pos++;									
	}
	
	if (Ptr!=NULL)
	{
		printf(" %d |",Ptr->Donnee.ID_Location);
		printf(" %s |",Ptr->Donnee.ID_Voiture);	
	    printf(" %s |",Ptr->Donnee.ID_Client);
	    
	    return 0;
	}								
		
	else
		return -1;
	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int SupprimerListLoc(typeList *L,int D)
{
	typeElem *Ptr,*Pred;
	Ptr=L->tete;
	Pred=NULL;
	while(Ptr!=NULL && Ptr->Donnee.ID_Location!=D)			// Tant que la liste n'est pas termin?e et on n'a pas trouv? l'?l?ment
	{
		Pred=Ptr;								// Sauvegarder l'adresse du pr?c?dent
		Ptr=Ptr->Suiv;						// Passer ? l'?l?ment suivant
	}

	if(Ptr!=NULL)								// Si l'?l?ment existe
	{
		if(Ptr==L->tete)						// si l'?l?ment est la t?te
			L->tete=Ptr->Suiv;				// la t?te devient le suivant
		else
			Pred->Suiv=Ptr->Suiv;			// mettre ? jour le chainage
		
		if(Ptr==L->Queue)						// si l'?l?ment est la queue
			L->Queue=Pred;						// la queue devient le pr?d?cesseur
			
		free(Ptr);								// Lib?rer l'espace m?moire				
		L->taille--;							// D?crimenter la taille
		return 0;								// L'?l?ment a ?t? supprim?
	}
	else
		return 1;								// L'?l?ment n'exsite pas
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int ModifierListeLoc(typeList *L,typeLocation D,int ID)
{
	typeElem *Ptr;
	Ptr=L->tete;
	while(Ptr!=NULL && Ptr->Donnee.ID_Location!=ID)
	       Ptr=Ptr->Suiv;
	       
	if(Ptr!=NULL && Ptr->Donnee.ID_Location==ID)
	{
		Ptr->Donnee=D;
	    return 0;
	}    
	else
	    return -1;	
	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int ModifierIDLoc(typeList *L,int ID,int IdModf)
{
	typeElem *Ptr;
	Ptr=L->tete;
	while(Ptr!=NULL && Ptr->Donnee.ID_Location!=ID)
	       Ptr=Ptr->Suiv;
	       
	if(Ptr!=NULL && Ptr->Donnee.ID_Location==ID)
	{
		Ptr->Donnee.ID_Location=IdModf;
	    return 0;
    }
    else 
       return -1;
	    
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int ModifierIDClt(typeList *L,int ID,char IdModf[10])
{
	typeElem *Ptr;
	Ptr=L->tete;
	while(Ptr!=NULL && Ptr->Donnee.ID_Location!=ID)
	       Ptr=Ptr->Suiv;
	       
	if(Ptr!=NULL && Ptr->Donnee.ID_Location==ID)
	{
		strcpy(Ptr->Donnee.ID_Client,IdModf);
	    return 0;
    }
    else 
       return -1;
	    
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int ModifierIDVoi(typeList *L,int ID,char IdModf[10])
{
   	typeElem *Ptr;
	Ptr=L->tete;
	while(Ptr!=NULL && Ptr->Donnee.ID_Location!=ID)
	       Ptr=Ptr->Suiv;
	       
	if(Ptr!=NULL && Ptr->Donnee.ID_Location==ID)
	{
		strcpy(Ptr->Donnee.ID_Voiture,IdModf);
	    return 0;
    }
    else 
       return -1;	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 void Menu_DetruireListLoc()
 {
 	printf("          \n           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n           \xba %c  3  %c %c  Gestion des Operation des location %c %c  Supprimer   %c %c       Tous       %c \xba",219,219,219,219,219,219,219,219);
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("\t\t                   \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    
 	
 }
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 void Menu_SuppListLoc()
 {
 	
 	printf("          \n           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n           \xba %c  3  %c %c  Gestion des Operation des location %c %c  Supprimer   %c %c       List       %c \xba",219,219,219,219,219,219,219,219);
	printf("\n           \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("\t\t                   \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    
 	
 }
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int Recherche_voi(Typelist *L,char Matri[10])
{
	TypeElem *Ptr;
	Ptr=L->Tete;
	while(Ptr!=NULL && strcmp(Ptr->Donnee.Matricule,Matri)!=0)
	{
		Ptr=Ptr->Suiv;
		
	}
	if(Ptr!=NULL && strcmp(Ptr->Donnee.Matricule,Matri)==0)
	{
		return 0;
	}
	else
	 return -1;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void AjoutList_FinLoc(typeList *L,Typelist *Lvoi,typeListe *Lclt)
{
	typeElem *Ptr;
	typeLocation DonLoc;
		
	char Mtvpi[10],CinClt[10];
	int test1,test2;							
	Ptr=(typeElem *)malloc(sizeof(typeElem));
	printf(" - Donne Matrucile De Voiture : ");	
	scanf("%s",Mtvpi);
	printf(" - Donne Cin De Client  : ");
	scanf("%s",CinClt);
	
	test1=Recherche_voi(&Lvoi,Mtvpi);
	test2=RecherechListeClt(&Lclt,CinClt);
	
	printf("\n -Donne Id Location : ");
    scanf("%d",&Ptr->Donnee.ID_Location);
    
	do
    {
    printf("\n -Donne Id Client : ");
    scanf("%s",Ptr->Donnee.ID_Client);
	}while(test1!=0);
	
	do
    {
    printf("\n -Donne Id voiture : ");
    scanf("%s",Ptr->Donnee.ID_Voiture);
	}while(test1!=0);
	printf(" - Donne date de sortir : ");
	scanf("%s",Ptr->Donnee.DDS);
	
	do
    {
    printf("\n -Donne date de retour : ");
    scanf("%s",Ptr->Donnee.DDR);
	}while(Ptr->Donnee.DDR<Ptr->Donnee.DDS);
								
	Ptr->Suiv=NULL;							
	
	if (L->tete==NULL)							
		L->tete=Ptr;						
	else
		L->Queue->Suiv=Ptr;					

	L->Queue=Ptr;								
	L->taille++;								
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int RecherechListeClt(typeListe *L , char cherche[10])
{
	
	typeElemnt *Ptr;
	Ptr=L->tete;
	while(Ptr!=NULL && strcmp(Ptr->Data.CIN,cherche)!=0){
		Ptr=Ptr->Suiv;
		
	}
	if(Ptr!=NULL && strcmp(Ptr->Data.CIN,cherche)==0){
	return 0;
		
	}	
	else
	 return -1;	
}
//-------------------------------------------------------------------
//-----------------------------------------------------------------
//-------------------------------------------------------------------
int Menu_princ()
{    
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
	char tmpbuf[128],datebuf[128];
    _strtime( tmpbuf );
   	_strdate( datebuf );    //   
	   int choix;                  

    printf("          \n    \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");	
	printf("          \n    \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("          \n    \xba %c   %s  %c %c         AGENCE DE LOCATION VOITURE          %c %c  %s   %c \xba",219,tmpbuf,219,219,219,219,datebuf,219);
	printf("          \n    \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
 
    printf("          \n    \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	   
    printf("\n");
   	//---------------------------------------------------------------------------------------------------------------------------------------------------------
	printf("        \n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                                    %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  1  %c %c%c         Gestion de compte          %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                  \xba %c     %c %c%c                                    %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  2  %c %c%c         Gestion de compte          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                                    %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  3  %c %c%c         Gestion de compte          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                                    %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n                  %c\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd%c ",204,185);
	//---------------------------------------------------------------------------------------------------------------------------------------------------------------------
   	
	printf("          \n\t          \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
    printf("          \n\t          \xba %c          %c%c%c%c%c%c DONNES VOTRE CHOIX :         %c \xba",219,175,175,175,175,175,175,219);
	printf("          \n\t          \xba %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
   
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------	
     	do{
	
	printf("\n\tDONNER VOTRE CHOIX:\t");
	scanf("%d",&choix);
	}while(choix<1 || choix >3);
	return choix;
}
//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------
int menu_voi()
{
	int choix;
	printf("          \n\t       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n               \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n               \xba %c  2  %c %c     GESTION DES VOITURES      %c \xba",219,219,219,219);
	printf("\n               \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220);

    printf("          \n\t       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	
	
	printf("        \n                   \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                   \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c  1  %c %c%c     Ajouter       %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                   \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c  2  %c %c%c     Modifier      %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c  3  %c %c%c     Supprimer     %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c  4  %c %c%c     Recherche     %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c  5  %c %c%c     Affichage     %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c  6  %c %c%c      Retour       %c%c \xba",219,219,219,219,219,219);
    printf("          \n                   \xba %c     %c %c%c                   %c%c \xba",219,219,219,219,219,219);
    printf("         \n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n                   \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	
		do{
	
	printf("\n\tDONNER VOTRE CHOIX:\t");
	scanf("%d",&choix);
	}while(choix>5 || choix <1);
	return choix;
		
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void Menu_GestVoi_AJOU()
{
	printf("          \n\t           \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n                   \xba %c  1  %c %c  Gestion des Operation des Voitures %c %c    Ajouter   %c \xba",219,219,219,219,219,219);
	printf("\n                   \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba ",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);
  	printf("          \n\t           \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void menu_voi_supp()
{


    printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     GESTION DES VOITURES      %c  %c  Supprimer  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	
	

	int choix_sup;
	printf("        \n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  1  %c %c%c  Supprimer une voiture  %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  2  %c %c%c      Supprimer tous     %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  3  %c %c%c         Retour          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                         %c%c \xba",219,219,219,219,219,219);
    printf("         \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	
		
	

	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void menu_voi_rech()
{
	
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     GESTION DES VOITURES      %c  %c   Recherche  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_voi_modf_mat()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     GESTION DES VOITURES      %c  %c   Modifier  %c  %c  Matricule  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_voi_modf_mar()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     GESTION DES VOITURES      %c  %c   Modifier  %c  %c  Marque  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_voi_modf_ppj()
{
		printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     GESTION DES VOITURES      %c  %c   Modifier  %c  %c  Prix par jour  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_voi_modf_dfa()
{
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     GESTION DES VOITURES      %c  %c   Modifier  %c  %c  Date d'assurance  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	
}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void menu_voi_modf()
{

	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  2  %c %c     GESTION DES VOITURES      %c  %c   Modifier  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	
	
	int choix_Modif;
	printf("        \n                  \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	printf("          \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  1  %c %c%c   Matricule              %c%c \xba",219,219,219,219,219,219); 
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  2  %c %c%c   Marque                 %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  3  %c %c%c   Prix par jour          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  4  %c %c%c   Date de fin dassurance %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c  5  %c %c%c   Retour                 %c%c \xba",219,219,219,219,219,219);
    printf("          \n                  \xba %c     %c %c%c                          %c%c \xba",219,219,219,219,219,219);
    printf("         \n                  \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
   	printf("        \n                  \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc ");
	
	
	
	

}
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void gest_voi_aff()
{
	
	printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  5  %c %c     GESTION DES VOITURES      %c  %c   Affichage  %c \xba",219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	void gest_voi_supp_suppTO()
{
		printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  3  %c %c     GESTION DES VOITURES      %c  %c   Modifier  %c  %c  supprimer tous  %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	
}
//-------------------------------------------
void gest_voi_supp_suppVoi()
{
		printf("          \n       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb ");
	
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,219,219,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,223,219);
	printf("\n       \xba %c  4  %c %c     GESTION DES VOITURES      %c  %c  Supprimer  %c  %c  supprimer une voiture %c \xba",219,219,219,219,219,219,219,219);
	printf("\n       \xba %c%c%c%c%c%c%c %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \xba",219,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,219,219,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,219);

   	printf("          \n       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");

	
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void choixALL_Menu_Voiture()
{
	int ChoixV1,ChoixV2,ChoixV3; 				// Varaibale pour le choix du menu 
	Typelist L;									// Déclaration de la liste									
	TypeVoi Donnee;
	Initlistvoi(&L);					//initialisation de la liste
	char Matricula[10];					//chaine de caractere pour le comparee
	do{	
	//menu_voi();
	ChoixV1=menu_voi();//Choix_OpVoi();           
	
	
	switch(ChoixV1)
	{
		menu_voi();
		char matri[10];
		case 1 : 
	    {
			Menu_GestVoi_AJOU();
				Donnee=GetVoi();
				AjoutList_Fin(&L,Donnee);
				
			break;
	    }
		case 2 :
		{
	
	
		//	menu_voi_modf();
			//ChoixV2=Choix_OpVoi();
			TypeVoi Donnee;
			Donnee=GetVoi();
			ModiferlistVoi(&L,Donnee,matri);
		
			
		/*	switch(ChoixV2)
			{   
				case 1 :
					gest_voi_modf_mat();
					
				
					break;
				case 2 :
					gest_voi_modf_mar();
				 	
				
					break;
				case 3 : 
				    gest_voi_modf_ppj();
				    
				    
				    break;
				case 4 :
					gest_voi_modf_dfa();
					
					
					break;
				default : 
					menu_voi();
					break;
			}*/
			break;
		}
		case 3 : 
	  	{
			menu_voi_supp();
			ChoixV3=Choi_SUPP();
		do{
			switch(ChoixV3)
			{
			
			case 1 :
			{
				gest_voi_supp_suppVoi();
				
			}break;
			case 2 :
			{
				gest_voi_supp_suppTO();
				DetruireList(&L);
			}break;
			default :
			{
				printf("retour...");
				menu_voi();
			}break;
		
			
		}
		}while(ChoixV3>3);
	}break;
		case 4 :
		{
			menu_voi_rech();
			printf("entre les Matricule a rechercher :\t");
  					scanf("%s",Matricula);
  					Recherche_voiaff(&L,Matricula);
			
			break;
		}
		case 5 : //Affichage
				
			AfficheList(L);
		{
			break;
		}
		default :
		{
			Menu_princ();	
			break;
		}
    }break;
}while(ChoixV1!=6);
	//system("pause");
		//system("cls");	
}
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
int Choix_OpVoi()
{
  int Choix;
  do
	{
		printf("\n\n\t\t\t\t- Donner votre choix : ");
		scanf("%d",&Choix);
	}while(Choix<1 || Choix>6);
	
	return Choix;	
}
//------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------
int Choi_SUPP()
{
	int choix;
	do{
		printf("\n\n\t\t\t\t- Donner votre choix : ");
		scanf("%d",&choix);
	}while(choix<1 || choix>2);
	return choix;
}
//---------------initialisation liste----------------------------
void Initlistvoi(Typelist *L)
{
	L->Taille=0;
	L->Tete=NULL;
	L->Queue=NULL;	
}
//--------------saisir de l'info de voiture----------------------
TypeVoi GetVoi()						
{
	TypeVoi Item;
	printf("\n***entre les informations suivant***\n");
	printf("\n Date du fin d'assurance (en forme jj/mm/aaaa) : ");
	scanf("%s",Item.Date_fin_assur);
	printf("\n Marque    : ");												// Saisie d'une donnee 
	scanf("%s",Item.Marque);
	printf(" \n Matricule    : ");
	scanf("%s",Item.Matricule);
	printf("\n Prix de location par jour (en dinar tunisien DT)      : ");
	scanf("%f ",&Item.prix_loc_jrDT);
	printf("HELLO ");

	
	
	
	
	return Item;
}
//-------------------Ajoute une liste ala fin---------------------
void AjoutList_Fin(Typelist * L, TypeVoi D)
{
	TypeElem * Ptr;								// Déclaration du pointeur qui pointe sur un ?l?ment de la liste
	Ptr=(TypeElem *)malloc(sizeof(TypeElem));	// Allocation dynamique d'un élément
	
	Ptr->Donnee=D;								// Mettre la donnée D dans le champ "Donne"
	Ptr->Suiv=NULL;							// Mettre le suivant du nouveau élément à NULL
	
	if (L->Tete==NULL)							// Si la liste est vide
		L->Tete=Ptr;						
	else
		L->Queue->Suiv=Ptr;					// Ajouter le pointeur du nouveau élément ? la fin 

	L->Queue=Ptr;								// Mettre à jour le pointeur de queue
	L->Taille++;								// Incrémenter la taille de la liste
}
//---------------------------------------------------------------
//----------------recherche liste---------------------------------
//---------------------------------------------------------------
int Recherche_voiaff(Typelist *L,char Matri[10])
{
	TypeElem *Ptr;
	Ptr=L->Tete;
	while(Ptr!=NULL && strcmp(Ptr->Donnee.Matricule,Matri)!=0)
	{
		Ptr=Ptr->Suiv;
		
	}
	if(Ptr!=NULL && strcmp(Ptr->Donnee.Matricule,Matri)==0)
	{
		printf("\n Date du fin d'assurance (en forme jj/mm/aaaa) : %s",Ptr->Donnee.Date_fin_assur);
		printf("\n Marque    :%s ",Ptr->Donnee.Marque);								
		printf(" \n Matricule    :%s ",Ptr->Donnee.Matricule);									
		printf("\n Prix de location par jour       : %f DT",Ptr->Donnee.prix_loc_jrDT);	
		
		return 0;
	}
	else
	 return -1;
}
//---------------------------------------------------------------
//--------------------suppr tous----------------------------------
//---------------------------------------------------------------
void DetruireList(TypeElem **L)
{
	TypeElem *Ptr, *suiv;
	Ptr=*L;								
	while(Ptr!=NULL)	
	{
		suiv=Ptr->Suiv;				
		free(Ptr);						
		Ptr=suiv;				
	}

	*L=NULL;
	
	printf("la liste a \x82te suprimer");						
}
//------------------affiche liste de voi---------------------------
void AfficheList(Typelist L)
{
	TypeElem * Ptr;								// D?claration du pointeur qui pointe sur un ?l?ment de la liste
	Ptr=L.Tete;									// On met le pointeur sur la t?te de la liste
	printf("\n");
	
	while(Ptr!=NULL)							// tant qu'on n'a pas arriv? ?la fin de la liste
	{
	
        printf("\n Date du fin d'assurance (en forme jj/mm/aaaa) : %s",Ptr->Donnee.Date_fin_assur);
		printf("\n Marque    :%s ",Ptr->Donnee.Marque);												// Afficher la donn?e
		printf(" \n Matricule    :%s ",Ptr->Donnee.Matricule);										// Afficher la donn?e
		printf("\n Prix de location par jour       : %f DT",Ptr->Donnee.prix_loc_jrDT);				// Afficher la donn?e
		Ptr=Ptr->Suiv;						// Passer à l'?l?ment suivant de la liste
	
					                      	// Afficher la donn?e
		Ptr=Ptr->Suiv;						// Passer ? l'?l?ment suivant de la liste
	}
	printf("\n");
}
//-----------------------------------------------------------------------
//------------------------------------------------------------
//-----------------------------------------------------------------------
int ModiferlistVoi(Typelist *L,TypeVoi D,char Matr[10])
{
	TypeElem *Ptr;
	Ptr=L->Tete;
	while(Ptr !=NULL && strcmp(Ptr->Donnee.Matricule,Matr)!=0)
	{
		Ptr=Ptr->Suiv;
	}
	if(Ptr !=NULL && strcmp(Ptr->Donnee.Matricule,Matr)!=0)
	{
		Ptr->Donnee=D;
		return 0;
	}
	else
	{
		return -1;
	}
}
