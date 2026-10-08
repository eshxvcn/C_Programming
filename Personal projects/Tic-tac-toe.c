#include<stdio.h>
#include<conio.h>
void main()
{
  char s,n,a=' ',b=' ',c=' ',d=' ',e=' ',f=' ',g=' ',h=' ',i=' ';
  char ch;

  printf("_%c_|_%c_|_%c_\t   _a_|_b_|_c_\n",a,b,c);
  printf("_%c_|_%c_|_%c_  <===  _d_|_e_|_f_\n ",d,e,f);
  printf("%c | %c | %c \t    g | h | i \n\n ",g,h,i);
    
  for(s=0; s<=9 ; s=s)
 {
    printf("Choose where to put 'X' : ");
    scanf(" %c",&ch);
    printf("\n\n\n");
    switch(ch)
   {
   case 'a':
    a='X';
   break;

   case 'b':
   b='X';
   break;

   case 'c':
   c='X';
   break;

   case 'd':
   d='X';
   break;

   case 'e':
   e='X';
   break;

   case 'f':
   f='X';
   break;

   case 'g':
   g='X';
   break;

   case 'h':
   h='X';
   break;

   case 'i':
   i='X';
   break;

   default:printf("Invalid choice");
   }

   printf("_%c_|_%c_|_%c_\t   _a_|_b_|_c_\n",a,b,c);
   printf("_%c_|_%c_|_%c_  <===  _d_|_e_|_f_\n ",d,e,f);
   printf("%c | %c | %c \t    g | h | i \n\n ",g,h,i);

   s++;

   if( (a=='X' && b=='X' && c=='X') || (d=='X' && e=='X' && f=='X') || (g=='X' && h=='X' && i=='X') || (a=='X' && d=='X' && g=='X') || (b=='X' && e=='X' && h=='X') || (c=='X' && f=='X' && i=='X') || (a=='X' && e=='X' && i=='X') || (c=='X' && e=='X' && g=='X'))
   break;
   else if( (a=='O' && b=='O' && c=='O') || (d=='O' && e=='O' && f=='O') || (g=='O' && h=='O' && i=='O') || (a=='O' && d=='O' && g=='O') || (b=='O' && e=='O' && h=='O') || (c=='O' && f=='O' && i=='O') || (a=='O' && e=='O' && i=='O') || (c=='O' && e=='O' && g=='O'))
   break;

   if(s>=9)
   break;
 
   

    printf("Choose where to put 'O' : ");
    scanf(" %c",&ch);
    printf("\n\n\n");
    switch(ch)
   {
   case 'a':
   a='O';
   break;

   case 'b':
   b='O';
   break;

   case 'c':
   c='O';
   break;

   case 'd':
   d='O';
   break;

   case 'e':
   e='O';
   break;

   case 'f':
   f='O';
   break;

   case 'g':
   g='O';
   break;

   case 'h':
   h='O';
   break;

   case 'i':
   i='O';
   break;

   default:printf("Invalid choice");
   }

   printf("_%c_|_%c_|_%c_\t   _a_|_b_|_c_\n",a,b,c);
   printf("_%c_|_%c_|_%c_  <===  _d_|_e_|_f_\n ",d,e,f);
   printf("%c | %c | %c \t    g | h | i \n\n ",g,h,i);
   s++;

   if( (a=='X' && b=='X' && c=='X') || (d=='X' && e=='X' && f=='X') || (g=='X' && h=='X' && i=='X') || (a=='X' && d=='X' && g=='X') || (b=='X' && e=='X' && h=='X') || (c=='X' && f=='X' && i=='X') || (a=='X' && e=='X' && i=='X') || (c=='X' && e=='X' && g=='X'))
   break;
   else if( (a=='O' && b=='O' && c=='O') || (d=='O' && e=='O' && f=='O') || (g=='O' && h=='O' && i=='O') || (a=='O' && d=='O' && g=='O') || (b=='O' && e=='O' && h=='O') || (c=='O' && f=='O' && i=='O') || (a=='O' && e=='O' && i=='O') || (c=='O' && e=='O' && g=='O'))
   break;

   if(s>=9)
   break;

  }

 if( (a=='X' && b=='X' && c=='X') || (d=='X' && e=='X' && f=='X') || (g=='X' && h=='X' && i=='X') || (a=='X' && d=='X' && g=='X') || (b=='X' && e=='X' && h=='X') || (c=='X' && f=='X' && i=='X') || (a=='X' && e=='X' && i=='X') || (c=='X' && e=='X' && g=='X'))
  printf("**** 'X' person WINS! ****");
  else if( (a=='O' && b=='O' && c=='O') || (d=='O' && e=='O' && f=='O') || (g=='O' && h=='O' && i=='O') || (a=='O' && d=='O' && g=='O') || (b=='O' && e=='O' && h=='O') || (c=='O' && f=='O' && i=='O') || (a=='O' && e=='O' && i=='O') || (c=='O' && e=='O' && g=='O'))
  printf("****** 'O' person WINS! ******");
  else printf("****** It's a DRAW ******");

  getch();
    
}