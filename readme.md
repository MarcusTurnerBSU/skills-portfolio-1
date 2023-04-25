# CodeLab I (CCO4000-20)

## Skills Portfolio 1

The Skills Portfolio presents a series of coding challenges that are designed to test each of the fundamental programming techniques introduced through the course of the CodeLab I module. This first test focuses on the basics of C++ including data types, input/output and IF statements. Make sure you read questions carefully before starting your solution, the marks available for each exercise are indicated below. Some additional marks are available for the option features.

___
___


## Instructions

* Create a new project for each exercise
* Ensure you save this project inside the *exercises* folder of your repository
* Once you have completed the exercises write a simple commit message in Github Desktop (e.g. "Exercises Completed")
* Finally push your solutions back to Github, do not forget this step. Code not pushed back to Github cannot be marked. Before you leave the room double check you work has successfully submitted.

___
___

## Exercises

### Exercise 1: Data Types
_Marks Available: 10_

There are several errors in the code below, can you fix them as well as ensuring each variable has the correct data type so the program runs.

```C++
#include <iostream>
include "string"
using namespace std;

int main(){
    int a = 8.4594;
    char b = "hello";
    string c = 'd';
    boolean d = true;
    double e = Z;

    count << 'Hello world this is a C++ program' >> endline;

    cout << "My number is" >> A
    system("pause");
    return 0;
}
```

___
___


### Exercise 2: Find the largest
_Marks Available: 10_

Write a program that calculates the largest of two numbers entered by the user. Your program must do the following

* Ask the user to enter two numbers and accept input into variables with the appropriate data type
* Use an IF statement to work out which is the largest number
* Output an appropriate message informing the user which number was the largest

Remember the basic structure for an if statement...

```C++
if(condition){
     //do this
}else{
    //do this
}
```

___
___


### Exercise 3: Are you hungry?
_Marks Available: 17_

Write a program that does the following

* Asks for the users first name and accepts input
* Asks for the users second name and accepts input
* Asks the user if they are hungry (e.g. *Are you Hungry (Y/N)* or *Are you hungry (1: Yes, 2: No)*) and accepts input
* If they are hungry you should ask them to choose one of two snacks (e.g. apple or banana), accept input and output a message informing the user of their choice. The output message must include their name (e.g. *"Jake Hobbs, here is your apple. Enjoy")*
* If they are not hungry you should output a message saying "Not hungry today? Maybe tomorrow then!"

You should use a nested IF statement to complete this exercise.

##### Additional Features (Optional)
_Marks available: 3_

* Use only a single variable for the users first and last name
