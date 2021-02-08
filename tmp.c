/* [[file:quiz-c2-2.org::*Question 3][Question 3:3]] */
/* [[[[file:~/2113/quiz-writeups/quiz-c2-2.org::struct][struct]]][struct]] */
#include <stdio.h>
#include <string.h>
  typedef struct{
    char ** value;
    char * another_value;
  }thing_t;
/* struct ends here */
int main() {
  char * string1 = "a b c ";
  char ** string_ptr = &string1;
  thing_t thing;
  thing.another_value = string1++;
  thing.value = &(thing.another_value);

  if(strcmp(string1,*(thing.value)) == 0){
    printf("Welcome!");
  }else{
    printf("Go Away!!");
  }
}
/* Question 3:3 ends here */
