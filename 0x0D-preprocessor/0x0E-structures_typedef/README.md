# C - Structures, typedef

This repository contains solutions for a set of tasks related to structures and typedef in C. Each task is implemented as a source file, and this README provides an overview of each task and its associated files.

## Task 0: Poppy

**Header File:** [dog.h](./0x0E-structures_typedef/dog.h)

In this task, a new type `struct dog` is defined with the following elements:
- `name` of type `char *`
- `age` of type `float`
- `owner` of type `char *`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

## Task 1: A dog is the only thing on earth that loves you more than you love yourself

**Header File:** [dog.h](./0x0E-structures_typedef/dog.h)

This task involves writing a function named `init_dog` that initializes a variable of type `struct dog`.

Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

## Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

**Header File:** [dog.h](./0x0E-structures_typedef/dog.h)

In this task, a function named `print_dog` is implemented to print the contents of a `struct dog`.

Prototype: `void print_dog(struct dog *d);`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
```

## Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

**Header File:** [dog.h](./0x0E-structures_typedef/dog.h)

In this task, a new type `dog_t` is defined as a new name for the type `struct dog`.

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

## Task 4: A door is what a dog is perpetually on the wrong side of

**Header File:** [dog.h](./0x0E-structures_typedef/dog.h)

This task involves writing a function named `new_dog` that creates a new dog.

Prototype: `dog_t *new_dog(char *name, float age, char *owner);`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

## Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

**Header File:** [dog.h](./0x0E-structures_typedef/dog.h)

In this task, a function named `free_dog` is implemented to free the memory allocated for a dog.

Prototype: `void free_dog(dog_t *d);`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```

## Copyright

This project is the intellectual property of Sams_Ddev ALX_SE student and is protected by copyright laws. Any form of plagiarism or unauthorized publication of this content is strictly prohibited and will result in removal from the program.

Please ensure that you adhere to the guidelines and learning objectives stated above. Happy coding!
