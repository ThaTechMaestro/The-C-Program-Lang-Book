#include <stdio.h>

int main(void) {

  /*
  unsigned - can take in only positive values
  signed - can take in both positive and negative values

  getchar takes in a character then converts 
  it into an unsigned integer

  A problem is also getchar returns a distinctive value
  when there is no more input. Which leads to a problem
  in knowing how to terminate the loop.

  Since it uses unsigned integer, -ve values
  are not among its distinct values returned

  EOF has a value of -1


  ----------------------------------
  What I do not know

  How getchar and putchar works under the hood?


  How does a ctrl+D input on Linux terminal translates 
    to EOF, which breaks the while loop condition?

    ANSWER
    I was able to inspect this by printing out the 
    value gotten when getchar takes in a ctrl+d input 
    It returns a value of -1

    Also get char takes in any input including empty space then converts and returns a positive value integer 

    Not completely sure but for every negative input entered
    it returns a value of 45

  */

 int c;

  while ((c = getchar() ) != EOF){
    putchar(c);

  }

  
}