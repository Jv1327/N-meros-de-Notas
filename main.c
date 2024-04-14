#include <stdio.h>

int main( void )
{
   int nota;
   int aCount = 0; /* number of As */
   int bCount = 0; /* number of Bs */
   int cCount = 0; /* number of Cs */
   int dCount = 0; /* number of Ds */
   int fCount = 0; /* number of Fs */

   printf(  "Digite as notas em letra.\n"  );
   printf(  "Digite o caractere EOF para encerrar a entrada.\n"  );

   while ( ( nota = getchar() ) != EOF ) {
      
      switch ( nota ) { 

         case 'A': 
         case 'a': 
            ++aCount; 
            break; 

         case 'B': 
         case 'b': 
            ++bCount; 
            break; 

         case 'C': 
         case 'c': 
            ++cCount; 
            break; 

         case 'D': 
         case 'd': 
            ++dCount; 
            break; 

         case 'F': 
         case 'f': 
            ++fCount;
            break; 

         case '\n':
         case '\t':
         case ' ': 
            break; 

         default: 
            printf( "Letra de nota Incorreta." ); 
            printf( " Digite nova nota.\n" ); 
            break; 
      }  
   } 

   printf( "\nTotais para cada nota saoo:\n" );
   printf( "A: %d\n", aCount ); 
   printf( "B: %d\n", bCount ); 
   printf( "C: %d\n", cCount ); 
   printf( "D: %d\n", dCount ); 
   printf( "F: %d\n", fCount ); 

   return 0; 
} 
