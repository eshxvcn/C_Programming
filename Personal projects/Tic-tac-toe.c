#include<stdio.h>
#include<conio.h>
void main()
{
  char s,m,n,a=' ',b=' ',c=' ',d=' ',e=' ',f=' ',g=' ',h=' ',i=' ';
  char ch;

  for(m='1'; m!='0'; m=m)
  {
  m='0';
  printf("\n\n");
  printf("_a_|_b_|_c_\t   _%c_|_%c_|_%c_\n",a,b,c);
  printf("_d_|_e_|_f_  ===>  _%c_|_%c_|_%c_\n ",d,e,f);
  printf("g | h | i \t    %c | %c | %c \n\n ",g,h,i);
    
  for(s='0'; s<='9'; s=s)
 {
    printf("(NOTE: Press 'n' for New Game)\n");
    printf(" Choose where to put 'X' : ");
    scanf(" %c",&ch);
    printf("\n\n");
    switch(ch)
   {
   case 'a':
   a='X';
   s++;
   break;

   case 'b':
   b='X';
   s++;
   break;

   case 'c':
   c='X';
   s++;
   break;

   case 'd':
   d='X';
   s++;
   break;

   case 'e':
   e='X';
   s++;
   break;

   case 'f':
   f='X';
   s++;
   break;

   case 'g':
   g='X';
   s++;
   break;

   case 'h':
   h='X';
   s++;
   break;

   case 'i':
   i='X';
   s++;
   break;

   case 'n':
   a=' ';b=' ';c=' ';d=' ';e=' ';f=' ';g=' ';h=' ';i=' ';
   s=0;
   printf("********************************");
   printf("\n******** [Game aborted] ********");
   printf("\n********************************\n");
   break;

   default:printf("   Please enter valid input\n\n");
   }
   
   if(s==0)
   break;
   else
  
   printf("_a_|_b_|_c_\t   _%c_|_%c_|_%c_\n",a,b,c);
   printf("_d_|_e_|_f_  ===>  _%c_|_%c_|_%c_\n ",d,e,f);
   printf("g | h | i \t    %c | %c | %c \n\n ",g,h,i);
   

   if( (a=='X' && b=='X' && c=='X') || (d=='X' && e=='X' && f=='X') || (g=='X' && h=='X' && i=='X') || (a=='X' && d=='X' && g=='X') || (b=='X' && e=='X' && h=='X') || (c=='X' && f=='X' && i=='X') || (a=='X' && e=='X' && i=='X') || (c=='X' && e=='X' && g=='X'))
   break;
   else if( (a=='O' && b=='O' && c=='O') || (d=='O' && e=='O' && f=='O') || (g=='O' && h=='O' && i=='O') || (a=='O' && d=='O' && g=='O') || (b=='O' && e=='O' && h=='O') || (c=='O' && f=='O' && i=='O') || (a=='O' && e=='O' && i=='O') || (c=='O' && e=='O' && g=='O'))
   break;

   
   
    printf("(NOTE: Press 'n' for New Game)\n");
    printf(" Choose where to put 'O' : ");
    scanf(" %c",&ch);
    printf("\n\n");
    switch(ch)
   {
   case 'a':
   a='O';
   s++;
   break;

   case 'b':
   b='O';
   s++;
   break;

   case 'c':
   c='O';
   s++;
   break;

   case 'd':
   d='O';
   s++;
   break;

   case 'e':
   e='O';
   s++;
   break;

   case 'f':
   f='O';
   s++;
   break;

   case 'g':
   g='O';
   s++;
   break;

   case 'h':
   h='O';
   s++;
   break;

   case 'i':
   i='O';
   s++;
   break;

   case 'n':
   a=' ';b=' ';c=' ';d=' ';e=' ';f=' ';g=' ';h=' ';i=' ';
   s=0;
   printf("********************************");
   printf("\n******** [Game aborted] ********");
   printf("\n********************************\n");
   break;

   default:printf("   Please enter valid input\n\n");
   }

   if(s==0)
   break;
   else
   
   printf("_a_|_b_|_c_\t   _%c_|_%c_|_%c_\n",a,b,c);
   printf("_d_|_e_|_f_  ===>  _%c_|_%c_|_%c_\n ",d,e,f);
   printf("g | h | i \t    %c | %c | %c \n\n ",g,h,i);


   if( (a=='X' && b=='X' && c=='X') || (d=='X' && e=='X' && f=='X') || (g=='X' && h=='X' && i=='X') || (a=='X' && d=='X' && g=='X') || (b=='X' && e=='X' && h=='X') || (c=='X' && f=='X' && i=='X') || (a=='X' && e=='X' && i=='X') || (c=='X' && e=='X' && g=='X'))
   break;
   else if( (a=='O' && b=='O' && c=='O') || (d=='O' && e=='O' && f=='O') || (g=='O' && h=='O' && i=='O') || (a=='O' && d=='O' && g=='O') || (b=='O' && e=='O' && h=='O') || (c=='O' && f=='O' && i=='O') || (a=='O' && e=='O' && i=='O') || (c=='O' && e=='O' && g=='O'))
   break;

   

  }

 if(s==0)
 m++;
 else 
 break;
 
 } 

  if( (a=='X' && b=='X' && c=='X') || (d=='X' && e=='X' && f=='X') || (g=='X' && h=='X' && i=='X') || (a=='X' && d=='X' && g=='X') || (b=='X' && e=='X' && h=='X') || (c=='X' && f=='X' && i=='X') || (a=='X' && e=='X' && i=='X') || (c=='X' && e=='X' && g=='X'))
  printf("\n******** 'X' person WINS! ********");
  else if( (a=='O' && b=='O' && c=='O') || (d=='O' && e=='O' && f=='O') || (g=='O' && h=='O' && i=='O') || (a=='O' && d=='O' && g=='O') || (b=='O' && e=='O' && h=='O') || (c=='O' && f=='O' && i=='O') || (a=='O' && e=='O' && i=='O') || (c=='O' && e=='O' && g=='O'))
  printf("\n******* 'O' person WINS! *******");
  else printf("\n********* It's a DRAW *********");


 

 

  getch();
    
}