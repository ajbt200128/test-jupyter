

/* #+RESULTS: struct */

/*  /explain struct here/ */

/*  Now let's look at what's in main: */


#include <stdio.h>
#include <string.h>
  typedef struct{
    char ** value;
    char * another_value;
  }thing_t;
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
