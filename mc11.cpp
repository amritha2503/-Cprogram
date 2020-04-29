#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 FILE *fp ,*fq;
 int i,j=0;
 char s[20],r[20];
 fp = fopen ( "new.txt", "w" ) ;
 if ( fp == NULL )
 {
 puts ("Cannot open file") ;
 exit(1) ;
 }
 printf ( "\nEnter a few lines of text:\n" ) ;
 while(strlen(gets(s))>0)
 {
 for(i=strlen(s)-1;i>=0;i--)
 {
 	r[j]=s[i];
	j++;
 }
 r[j]='\0';
 fputs ( r, fp ) ;
 fputs ("\n", fp );
 } 
 fq = fopen ("new1.txt", "w" ) ;
 fputs( r, fq ) ;
 fputs( "\n", fq );
 fclose(fp);
 fclose(fq);
 return 0;
}
