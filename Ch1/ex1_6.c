#include <stdio.h>

int main(void) {

  /*


  -----------------------------------------------
    
  https://www.reddit.com/r/C_Programming/comments/5e2l0i/how_does_putchar_work/

  https://www.educative.io/edpresso/what-is-a-buffer-in-c (Go over this again, test run the code to solidify your understanding)

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




  Add your answer to this
  https://stackoverflow.com/questions/17745745/exercise-1-6-kr-how-to-verfiy-that-getchar-eof-is-0-or-1/17745895

  Why the while loop implementation prints
  a set of 1s, then goes to a new line

  What buffering an input mean
  



  ----------------------------------
  What I do not know

  How the resulting evaluation of a 
  boolean expression knows when to 
  return (True or False) or (0 or 1)

  why does it return 4 1's when an input 
  of 3 characters is entered in a while loop implementation

  Why does getchar return no output

  Why putchar returns input text one at a time and
  how does it go to a newline after enter is pressed
  

  */

  

 /*
 Check out the implementation below again

 */


  int c;

  while (c = getchar() != EOF ){

    printf("%d\n", c);
  }




  /* 

  simpler solution

  int c;

  c = getchar() != EOF;

  printf("%d\n",c);

  */





} 