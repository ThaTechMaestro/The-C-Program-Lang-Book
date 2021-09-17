#include <stdio.h>
#include <stdlib.h>

int main(void){


  int c;

  
  /*
  
  https://www.reddit.com/r/C_Programming/comments/5e2l0i/how_does_putchar_work/ (Completed)

  https://www.educative.io/edpresso/what-is-a-buffer-in-c (Completed)

  What buffering an input mean
  Buffer 
  Input buffer can also be known as input area or 
  input block.

  It is a location that holds all incoming information
  before it is sent to the CPU for processing.

  It is a temporary storage used to store input and output commands.
  Input commands -- User 
  Output commands -- Computer 

  A buffer needs to be cleared before the next input is
  taken in 

  A stream can be defined as a set of characters 
    which is made available sequentially (One at a time or sequentially)
    A program uses an input stream to read data from a source, one item at  a time
    A program uses an ouput stream to write data to a destination, one 
      item at a time. 
    
    A string is a collection, it allows random access but streams does
    not allow random access and it outputs data sequentially.




  Add your answer to this
  https://stackoverflow.com/questions/17745745/exercise-1-6-kr-how-to-verfiy-that-getchar-eof-is-0-or-1/17745895

  Why the while loop implementation prints
  a set of 1s, then goes to a new line

  What buffering an input mean
  -----------------------------------------------
  Continue from next question below

  why is it consider bad practice to use fflush(stdin) in C 
    fflush was designed to work on output streams
  why fflush does not work on Linux (Done) 
    It has an undefined behaviour when used on input streams.

  # What is pass by value in c, which explains why scanf needs
    a memory address?
  
  How pressing of the enter key sends the input to the buffer

  Understand why this program returns 0 when you enter characters
    rather than int values

  ----Later on
    How getchar() works under the hood
  */

  int v1 = 0;
  int v2 = 0;
  system("clear");

  printf("\n Enter v1: ");
  scanf("%d" ,&v1);

  printf("\n Enter v2:");
  
  
  while(getchar() != '\n');

  scanf("%d", &v2);
  printf("\nValue of v1 %d", v1);
  printf("%c", getchar());
  

  printf("\n v1+v2=%d", v1+v2);
  
  



  



    
    






}