- [Quiz C2-2 Writeup](#sec-1)
  - [Question 3](#sec-1-1)
    - [Option 1](#sec-1-1-1)
    - [Option 2](#sec-1-1-2)


# Quiz C2-2 Writeup<a id="sec-1"></a>

## Question 3<a id="sec-1-1"></a>

Let's talk about whatever

First let's look at the struct:

```C

typedef struct{
  char ** value;
  char * another_value;
}thing_t;
```

*explain struct here*

Now let's look at what's in main:

Line

```C

int main() {
  char * string1 = "a b c ";
  char ** string_ptr = &string1;
  thing_t thing;
```

by

```C

thing.another_value = string1++;
thing.value = &(thing.another_value);

```

Line

```C

  if(strcmp(string1,*(thing.value)) == 0){
    printf("Welcome!");
  }else{
    printf("Go Away!!");
  }
}
```

    Go Away!!

### Option 1<a id="sec-1-1-1"></a>

```C

int main() {
  char * string1 = "a b c ";
  char ** string_ptr = &string1;
  thing_t thing;
  thing.another_value = string1++;
  thing.value = &(thing.another_value);
  if(strcmp(string1,*(thing.value++)) == 0){
    printf("Welcome!");
  }else{
    printf("Go Away!!");
  }
}
```

    Go Away!!

This one doesn't work because&#x2026;

### Option 2<a id="sec-1-1-2"></a>

```C

int main() {
  char * string1 = "a b c ";
  char ** string_ptr = &string1;
  thing_t thing;
  thing.another_value = string1++;
  thing.value = &(thing.another_value);
  thing.another_value = string1;
  if(strcmp(string1,*(thing.value++)) == 0){
    printf("Welcome!");
  }else{
    printf("Go Away!!");
  }
}
```

    Welcome!

This one does work because&#x2026;
