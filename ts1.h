/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>


typedef struct
{
   int state;
   char name[40];
   char code[40];
   char type[40];
   float val;
 } var_cst;

typedef struct
{ 
   int state; 
   char name[40];
   char type[20];
} MC_sep;

var_cst tab1[1000];
MC_sep tab2[40],tab3[40];
extern char sav[20];
char chaine [] = "";


/***Step 2: initialisation de l'état des cases des tables des symbloles***/
/*0: la case est libre    1: la case est occupée*/

void initialisation()
{
  int i;
  for (i=0;i<25;i++)
  {
	  tab1[i].state=0; 
	  strcpy(tab1[i].type,chaine); 
	  
	 
  }
  
  

  for (i=0;i<40;i++)
    {tab2[i].state=0;
    tab3[i].state=0;}

}


/***Step 3: insertion des entititées lexicales dans les tables des symboles ***/

void inserer (char entite[], char code[],char type[],float val,int i,int y)
{
  switch (y)
 { 
   case 0:/*insertion dans la table des IDF et CONST*/
       tab1[i].state=1;
       strcpy(tab1[i].name,entite);
       strcpy(tab1[i].code,code);
	   strcpy(tab1[i].type,type);
	   tab1[i].val=val;
	   break;

   case 1:/*insertion dans la table des mots clés*/
       tab3[i].state=1;
       strcpy(tab3[i].name,entite);
       strcpy(tab3[i].type,code);
       break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tab2[i].state=1;
      strcpy(tab2[i].name,entite);
      strcpy(tab2[i].type,code);
      break;
 }

}

/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */
void rechercher (char entite[], char code[],char type[],float val,int y)	
{

int j,i;

switch(y) 
  {
   case 0:/*verifier si la case dans la tables des IDF et CONST est libre*/
        for (i=0; ((i<1000)&&(tab1[i].state==1))&&(strcmp(entite,tab1[i].name)!=0);i++); 
        if((i<1000)&&(strcmp(entite,tab1[i].name)!=0))
        { 
	        
			inserer(entite,code,type,val,i,0); 
	      
         }
        //else
          //printf("entité existe déjà\n");
        break;

   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       
       for (i=0;((i<40)&&(tab3[i].state==1))&&(strcmp(entite,tab1[i].name)!=0);i++); 
        if(i<40)
          inserer(entite,code,type,val,i,1);
        //else
          //printf("entité existe déjà\n");
        break; 
    
   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
         for (i=0;((i<40)&&(tab2[i].state==1))&&(strcmp(entite,tab1[i].name)!=0);i++); 
        if(i<40)
         inserer(entite,code,type,val,i,2);
        //else
   	       //printf("entité existe déjà\n");
        break;

    case 3:/*verifier si la case dans la tables des IDF et CONST est libre*/
        for (i=0;((i<1000)&&(tab1[i].state==1))&&(strcmp(entite,tab1[i].name)!=0);i++); 
                  
        if (i<1000)
        { inserer(entite,code,type,val,i,0); }
        else
          printf("entité existe déjà\n");
        break;
  }

}


/***Step 5 L'affichage du contenue de la table des symboles ***/

void afficher()
{int i;
 
printf("/***************Table des symboles IDF*************/\n");
printf("\n/***************Table des symboles ******************/\n");
printf("____________________________________________________________________\n");
printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite\n");
printf("____________________________________________________________________\n");
  
for(i=0;i<20;i++)
{	
	
    if(tab1[i].state==1)
      { 
        printf("\t|%10s |%15s | %12s | %12f\n",tab1[i].name,tab1[i].code,tab1[i].type,tab1[i].val);
		
         
      }
}

 
printf("\n/***************Table des symboles mots clés*************\n");

printf("_____________________________________\n");
printf("\t| NomEntite |  CodeEntite | \n");
printf("_____________________________________\n");
  
for(i=0;i<40;i++)
    if(tab3[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tab3[i].name, tab3[i].type);
               
      }

printf("\n/***************Table des symboles séparateurs*************\n");*/

printf("_____________________________________\n");
printf("\t| NomEntite |  CodeEntite | \n");
printf("_____________________________________\n");
  
for(i=0;i<40;i++)
    if(tab2[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tab2[i].name,tab2[i].type );
        
      }

}




		
		
    int Recherche_position(char entite[])
		{
		int i=0;
		while(i<1000)
		{
		
		if (strcmp(entite,tab1[i].name)==0) return i;	
		i++;
		}
 
		return -1;
		
		}

	 void insererTYPE(char entite[], char type[])
	{
       int pos;
	   pos=Recherche_position(entite);
	   if(pos!=-1)  { strcpy(tab1[pos].type,type); }
	}
    
	
	int doubleDeclaration(char entite[])
	{
	int pos;
	pos=  Recherche_position(entite);
	if(strcmp(tab1[pos].type,"")==0) return 0;
	   else return -1;
	  
	
	}
	