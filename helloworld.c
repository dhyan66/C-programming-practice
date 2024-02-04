#include <stdio.h>
#include <string.h>
// function prototypes checks if the correct arguments are passed to the function something like interface in java
void birthday(char [] ,int);
// functions
void birthday(char name[],int age) {

    printf("\nhappy birthday to u %s", name);
    printf("%d age", age);
}
 // ternary operators
 int findMax(int x ,int y){
    return(x>y)? x:y;
}





int main()
 {
    // this is a comment blah
    /*
     * this is a multi line comment.
     */
    printf("I like pizza!\n");
    printf("Its really good!\n");
    printf("1\t2\t3\n\t4");                               // this for even spacing between the chars 1 2 3, \n adds a new line
    printf("\"I like pizza\"- Abraham Lincoln probably"); // we add \" if we need quotes inside a sentence

    // variables
    int x;
    x = 123;     // intialization
    int y = 123; // declaration nd intialisation
    float gpa;
    gpa = 2.5;           // floating point number NOLINT(*-narrowing-conversions)
    char grade = 'C';    // single chars
    char name[] = "Bro"; // array of chars

    // print statement and place holders
    printf("Hello %s", name);                  //%s is for string
    printf("You are %d years old", y);         // %d is for integers
    printf("Your average grade is %c", grade); //%c is for chars
    printf("Your gpa is %f\n", gpa);           //%f is for floats or decimals
    int n;
    scanf("%d", n);

    for (int i = 0; i < n; i++)
    {
        int Amount;
        printf("Enter the amount");
        scanf("%d", Amount);
    }
    // logical operators

    if(x<=3||x>0&&x<90||x!=90);


    // string functions
     strlwr(name); // lower case in strings
     strupr(name); // upper case the strings
     strcat(name, name); // appends the name to name
     strncat(name,name,1); // appends the 1 char from name to name
     strcpy(name,name); // copies first 2nd to 1st name
     strncpy(name,name,2); // copies just 2 chars
     strlen(name);// returns the length of the string

     // do while loop check if a condition is true if its true then the loop will run again else terminate

     int number = 0;
     int sum = 0;
     do{
         printf("Enter a number above 0:");
         number++;
     }
     while(number>0);

     // continue statement skips the code section and forces the next iteration of the code

     for(int i = 1; i<=20; i++){
         if(i == 13){
             continue; // this continue statement skips the print statement when i == 13
         }
         printf("%d",i);
     }
     // size of operator array
     double prices [] ={5.0,10.0,9.0};
    printf("%1f",sizeof(prices));
    for(int i =0; i<sizeof(prices)/sizeof (prices[0]);i++){
        printf("$%.21f\n",prices[i]);
    }

    return 0;
}
