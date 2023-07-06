/*Vigla Afroditi AM 2022202000021
 Mavrogianni Eleni AM 2022202000136
  */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct mo
{
    char *mors; 
    struct mo *next;
    struct mo *prev;
}m;

void list(m *cur);
m *insert( m *sptr,char *mors);
    
void list(m *cur)
   {
    if(cur==NULL){
       printf("empty\n");
   }
  else
  {
     while(cur!=NULL)
     {
        printf("\n\n%s\n",cur->mors);
        cur=cur->next;
      }
   printf("\n");
   }
}


int main(void)
{
  m *mr, *tmp,*head=NULL;
  mr=(m*)malloc(sizeof(m));
  char code[40][40]={"._","_.",".____","_...","___","..___","_._.",".__.","...__","_..","__._","...._",".","._.",".....",".._.","...","_....","__.","_","__...","....",".._","___..","..","..._","____.",".___",".__","_____","_._","_.._","._._._","._..","_.__","__..__","__","__..","......"};
char   m[40]={'a','n','1','b','o','2','c','p','3','d','q','4','e','r','5','f','s','6','g','t','7','h','u','8','i','v','9','j','w','0','k','x','.','l','y',',','m','z',' '};
 char ch[100];
 char *filename="test.txt";
 FILE *fp,*fp1,*fp2;
 int i;
 char *array[100];
 int loop;
 char *c;
 char *token="@";

 fp=fopen(filename,"r");
 fp1=fopen("mm.txt","w+b");
 while(!feof(fp))
 {
	fscanf(fp,"%s",ch);
	printf("%s\n",ch);
	c=strtok(ch,token);
	if(c!=NULL)
	 {
		for(i=0;i<40;i++)
		 {
		   if(strcmp(c,code[i])==0)
		    {
			fprintf(fp1,"%c",m[i]);
                    }

	         }
         }
      for(loop=1;loop<100;loop++)
       {
	    array[loop]=strtok(NULL,"@");
            if(array[loop]==NULL) break;
       }
     for(loop=1;loop<100;loop++) 
     {
        int ii;
	if(array[loop]==NULL) break;
	printf("Is: %s\n",array[loop]);
	for(ii=0;ii<40;ii++)
	{
		if(strcmp(array[loop],code[ii])==0)
		{
			fprintf(fp1,"%c",m[ii]);
		}
	}
     }
    break;
 }
fclose(fp);
fclose(fp1);
printf("End\n");
fp2=fopen("mm.txt","r");
char ch1;
while(!feof(fp2))
 {
	fscanf(fp2,"%s", (mr->mors)); 
	mr->mors=&ch1;
	printf("%s",mr->mors);
	//head=insert(head,mr->mors);
	break;
 }
return 0;
}


m *insert( m *sptr,char *mors)
{
 m *mewptr,*curptr;
 mewptr=(m*)malloc(sizeof(m));
 if(mewptr==NULL)
 {
 	printf("not enough mem\n");
 }
 else
 {
     mewptr->mors= strdup(mors);
     mewptr->next=NULL;    
     if(sptr==NULL)
     {
       mewptr->prev=NULL;
        return mewptr;
     }
    else
     {
       curptr==sptr;
       while(curptr->next!=NULL) curptr=curptr->next;
	curptr->next=mewptr;
	mewptr->prev=curptr;
	
	return sptr;
     }
  }
}

