#include<stdio.h>
#include<stdlib.h>
int plno,i,n,m,ch;
struct batsman
 {
   char name[25];
   int runs,score,balls,run,ones,twos,threes,fours,sixes;
   int max_six,max_run,max_four;
   float str;
}player[100],pbat;
struct bowler
{
   char name[25];
   int runsgv,wicket,overs;
   int max_w;
   float economy;
 }p[100],pbowl;
 
void batsmandetails();
void bowlerdetails();
void playerrecord();
void matchdetails();
void batsman();
void bowler();


int main()
{
 int plno;
  int i,n,m;
	printf("\t\t\tCRICKET MATCH DETAILS\n");
 batsman();
bowler();

   do
    {
       int ch;  
       printf("Enter your chocie:\n 1)Batsman's detail:\n 2)Bowler's detail:\n 3)Match summary:\n 4)Record:\n 5)Exit\n ");
       scanf("%d",&ch);
      switch(ch)
      {

        case 1:
              batsmandetails();
              break;

        case 2:
            bowlerdetails();
             break;

        case 3:
               matchdetails();
            
               break;

        case 4: 
              playerrecord();
              break;

        case 5:
              exit(1);

        default:
             printf("Enter the correct choice\n");
             break;

      }

    }while(ch!=5);
return 0;
}
void batsman()
{
	  printf("Enter the Batsman details:\n");
  printf("Enter the number of batsman:\n");
  scanf("%d",&m);
  for(i=0;i<m;i++)
   {

       printf("Enter name of batsman%d:\n",i+1);
       scanf("%s",player[i].name);
       printf("Enter the number of ones scored by player%d:\n ",i+1);
       scanf("%d",&player[i].ones);
       printf("Enter the number of twos scored by player%d:\n ",i+1);
       scanf("%d",&player[i].twos);
       printf("Enter the number of threes scored by player%d:\n ",i+1);
       scanf("%d",&player[i].threes);
       printf("Enter the number of fours scored by player%d:\n ",i+1);
       scanf("%d",&player[i].fours);
       printf("Enter the number of sixes scored by player%d:\n ",i+1);
       scanf("%d",&player[i].sixes);
       printf("Enter the balls played by the player%d:\n",i+1);
       scanf("%d",&player[i].balls);
   }

}
void bowler()
{
   printf("\nEnter the bowlers details:\n");
   printf("Enter the number of bowlers:\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("\nEnter name of bowler%d:",i+1);
       scanf("%s",p[i].name);
       printf("Enter the runs given by the bowler%d:\n ",i+1);
       scanf("%d",&p[i].runsgv);
       printf("Enter the overs bowled by the bowler%d:\n",i+1);
       scanf("%d",&p[i].overs);
       printf("Enter the wickets taken by the bowler%d\n",i+1);
       scanf("%d",&p[i].wicket);
   }
}
void batsmandetails()
{
	printf("Enter the batsman number to see his details\n");
              scanf("%d",&plno);

              plno--;
              printf("                       Details of the player\n");
              printf("===========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         sr   \n");
              printf("===========================================================================\n");


              player[plno].runs=(1*player[plno].ones)+(2*player[plno].twos)+(3*player[plno].threes)+(4*player[plno].fours)+(6*player[plno].sixes);
              player[plno].str=(player[plno].runs*100.00)/player[plno].balls;
              printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",player[plno].name,player[plno].runs,player[plno].balls,player[plno].fours,player[plno].sixes,player[plno].str);
}
void bowlerdetails()
{
	 printf("Enter the bowlers number to see his details\n");
             scanf("%d",&plno);

             plno--;
              printf("                         Player Detail\n  ");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
               {   p[plno].economy=p[plno].runsgv/p[plno].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n",p[plno].name,p[plno].overs,p[plno].runsgv,p[plno].wicket,p[plno].economy);
               }


}
void matchdetails()
{
	printf(" \t\t\t\tMatch summary\n\n");
              printf("==========================================================================\n");
              printf(" Batsman        runs           balls        fours       sixes         sr   \n");
              printf("==========================================================================\n");

              for(i=0;i<1;i++)
                {
                    player[i].runs=(1*player[i].ones)+(2*player[i].twos)+(3*player[i].threes)+(4*player[i].fours)+(6*player[i].sixes);
                    pbat.run+=player[i].runs;
                    player[i].str=(player[i].runs*100.00)/player[i].balls;
                    printf(" %-15s %-14d %-13d %-11d %-11d %-9.2f\n\n",player[i].name,player[i].runs,player[i].balls,player[i].fours,player[i].sixes,player[i].str);
                }
                printf("TOTAL RUNS:%d\n\n",pbat.run);
              printf("\n\n");
              printf("=================================================================\n");
              printf(" Bowler        overs           runs        wicket       economy\n");
              printf("=================================================================\n");

               for(i=0;i<n;i++)
               {   p[i].economy=p[i].runsgv/p[i].overs;
                   printf(" %-15s %-14d %-13d %-11d %-11.2f\n\n\n",p[i].name,p[i].overs,p[i].runsgv,p[i].wicket,p[i].economy);
               }

}
void playerrecord()
{
	pbat.max_run=0,pbowl.max_w=0,pbat.max_four=0,pbat.max_six=0;
       
                for(i=0;i<m;i++)
                  { 
                     player[i].runs=(1*player[i].ones)+(2*player[i].twos)+(3*player[i].threes)+(4*player[i].fours)+(6*player[i].sixes);
                     if(pbat.max_run<player[i].runs)
                        {
                          pbat.max_run=player[i].runs;
                        }
                     if(pbat.max_six<player[i].sixes)
                       {
                        pbat.max_six=player[i].sixes;
                       }
                     if(pbat.max_four<player[i].fours)
                       {
                        pbat.max_four=player[i].fours;
                       }
                     if(pbowl.max_w<p[i].wicket)
                      {
                      pbowl.max_w=p[i].wicket;
                      }
                  }
              printf("Most runs scored by the batsman:%d\n",pbat.max_run);
   
              printf("Maximum fours scored by the batsman:%d\n",pbat.max_four);

              printf("Maximum sixes scored by the batsman%d:\n",pbat.max_six);
 
             printf("Maximum wickets taken by the bowler:%d\n",pbowl.max_w);

}















