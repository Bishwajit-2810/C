/*

#include<stdio.h>                //a library for standard input and output
#include<stdlib.h>               //a library for things like dynamic memory acclocation
#include<math.h>                //library for math operations
#include<string.h>              //library for string and its operations
#include <stdbool.h>            //a bool library for true false or 0 1

*/
// basic arithmatic operations
/*
+           addition
*           multiplication
-           substruction
/           division return only integer part
%           reminder of division

*/
// function of math.h
/*
work                    function

root y                  sqrt(y);
x to the power y        pow(x,y);
x.y=x                   floor(x.y);     //return the integer part from the float
x.y=x+1                 celi(x.y);      //return the integer part plus one
absulute value of x     abs(x)=+x       //always return the positive value [stdlib]

*/

// variables and their specification
/*

int     used for integer (2/4 bytes)
float   used for float or decimal value (4 bytes)
char    used for single charecter (1 bytes)
bool    used for logical data like true false or 0 1 or any other value than 0 returns true

*/

// basic c programme structure

#include <stdio.h> //header file
int main()                                                // main function from where the code starts running
{                                                        
    printf("\nif you missed a semicolon you should\
 know that you f*cked up something importent!!\n\n"); // a print command to print something on screen
    return 0;                                            // a return command to return 0 cause we have declear main as a integer type function
}

// basic variable format specifiers and uses in printf scanf

/*

%d     used for integers
%ld    used for long integers
%lld   used for long long integers
%u     used for unsinged integers
%f     used for float number
%lf    used for double number(extended of float)
%c     used for character
%s     used for string
%.2f   print 2 point after a decimal in float double
%5d    print 5 spaces before the integer value
%05    print 5 zeros before the integer value
\n     for new line (printf)
\t     for a space equal to tab(4 spaces = 1 tab )
\      to take two line as one

*/

// keywords in c
/*

#define variable_name value         like  #define pi 3.1416    here we declear that the value of pi is 3.1416
const a =0;                         we use it to make a variable constant it cann't be changed
static i=0;                         used for make a veriable's life throughout the programme (it cann't die untill the programme finished)
typedef int integer;                used to changed the data type name of a variable according our choice
break;                              used to stop loop,switch statement  to finish the function right now
continue;                           used to skip a particular data or ittration and go on the process

*/

// conditional statements
/*
a conditional statement is a function which do something special when the statement is true or false .
when the function is true it will do something and when it is false it will do something else

*/

/*

if-else
switch-case
turnary

*/

/*
if else statement


if ( condition )
{
         code
}
else if ( condition )
{
          code
}

else {
           code
}


*/
/*

switch case statement


switch (expression)
{
case  constant-expression :
            code
    break;
case  constant-expression :
            code
    break;


default:
    break;
}

*/

/*
tarnary

(condition)?statement1 : statement2;

if the condition is true the first part will exicute and if the condition is false the 2nd part will exicute

*/

// loops in c
/*

to do the same work again and again but in the smart controlled way otherwise
it will become infinite loop and cause time complixity or programme crash

there are 3 types of loop

1. for loop
2. while loop
3. do-while loop

*/

/*
for loop

for (data_type i = 0; i < count; i++)
{
    code
}


while loop

while (condition)
{
    code
}


do-while loop

do
{
    code
} while (condition);

*/

// array
/*
to create variables in a large manner
if we need 1000 variable or more it is not possible to take them manually one by one
here comes the concept of array
by using it we can creat and track 1000 variables or more easily

*/

/*
creating array
lets take an integer array of 1000

int a[1000];

1000 variables are created now we can assign value manually or using loops

manually

scanf("%d",&a[index_number]);

array index stars from 0 so the last index of array is = (total variable number -1)

using loop

for(int i= 0;i<1000;i++){

    scanf("%d",&a[index_number]);
}


*/

/*
there is concept called multidimantional array
lets look over

int a[10][10];

this is a multidimantional array we can releat it with matrix
like matrix the firt part represents row and the other coloum

the way to take input in multidimantional array is

for(int i= 0;i<10;i++){

    for(int j=0;j<10;j++){

        scanf("%d",&a[i][j]);
    }
}

or manually

 scanf("%d",&a[row index][coloum index]);


*/

// strings

/*
strings is nothing but array of char type
in this way the char comes one by one and creat meanningful words ,lines etc

*/
/*

strings operations

first of all the imortent thing is to add #include<string.h> header file
and the last index contain a \0 which is a null char

lets take a char array or string

char a[30];

now if we use scanf to scan "hello everyone" using %s specifier


scanf("%s",a);

but there is a problem which is %s cann't scan after a space come so the thing which
is scanned by scanf is "hello"

to slove this problem of scanf we can use

scanf("%[^\n]%*c",a);           user input

        or

gets(a);                        user input



puts(a);                        user output
printf("%s",a);                 user output

getcher(a[index]);              user input single char a time (from conio.h)

strlen(a);                      return a integer which is the length of the string

strcpy(a,a1);                   copy a string to a1 string (it is not possible to assign string directly so we can use it)
strcpy(a,"hello");              using strcpy to assign a string

strcat(a,a1);                   a1 string is added in the last part of s string

strcmp(a,a1);                   return 0 if the strings are equal

strrev(a);                      used to reverse a string

strupr(a);                      make all char of string uppercase

strlwr(a);                      make all char of string lowercase

sprint(a,"specifier",var);      take a value and insert it in the string

sscanf(a,"specifier",&var);     take a value from the string and insert it in the variablre

*for string swapping we use strcpy and another temp string

*/

// pointer

/*
 lets declear a pointer first and explane it

 int a=10;
 int* p ;
 p=&a;
printf("%d",&a);            ans is address of a
printf("%d",p);             ans is address of a
printf("%d",a);             ans is value of a
printf("%d",*p);            ans is value of a


we use * to show the value in a perticular address
we use & to show the address of a perticular variable

data_type* variable ;

this data type depends on which kind of data's address we want to store
it depends on the data type of the address's data type


double pointer

int**a=10;
int*p =&a;
int** p1 =&p;



*/

/*
pointer arithmetic

int a[10]={1,2,3,4,5,6,7,8,9,0};
int* p=&a;
p=p+2;              it is posible it returns the address of a[0+2]=a[2]

here +something is equal to  +something*sizeof(data_type)
*/
/*
there are 4 types of pointer

1. void pointer =an pointer with void data_type we have to use type casting while using it
2. NULL pointer = an empty pointer it is safe to fill it with 0 or NULL
3. dangling pointer = a free pointer but still used in somewhere after freeing ,it shows unknown behevios
4. wild pointer = a uninitializied pointer

*/

// function

/*
return_type function_name(){

        operations


    return needed;
}

**if there is nothing to return the return type should called void
**To make the function global Use the function name with ; Before main() as global .
ex : return_type function_name();

*/

/*
some concepts of function :

call by value

int sum(){
int a =5,b=7;
}
int main(){
int a=7,b=5;
 sum();
printf("%d %d",a,b); //output is 7 5
}

In this function, the value of A and B could not swap
Because in the function the value of A and B and in the main function both are different
They are from different parts so it doesn't change If we pass the address then it should swap
Otherwise it shouldn't change This is called call by value


call by reference


int sum(int* a , int* b){
 *a =5;
 *b=7;
}
int main(){
int a=7,b=5;
 sum(&a,&b);
printf("%d%d",a,b); //output is 5 7
}


in this function the value of a and b  swapd
in this function the value A and B are passing are the variables with same address
we are passing the address of a and B through the functions
So when we change the value of this exact pointers the value of this veriables got swapd
this is called call by reference



**in Call by Value a copy of the value is sent, in call by reference the address of the value is sent
**the variable of a function only affected in the function{}
**it is possible to use the variable of same name in another function in same program

*/

// pass a array in function
/*

void avg(int marks[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+marks[i];

    }
    printf("%d",sum/size);

}
int main(){
int marks[5]={1,2,3,4,5}
int size= sizeof(marks)/sizeof(int);
int avg(marks,size);
}

**here marks[] equivalent to *marks

*/

// passing string in function
/*
void findlength(char name[]){
    int length=0;
    for(int i=0;i!='\0';i++){
            length++;
    }
    printf("%d",length);


}
int main(){

    char name[]="bishwajit";
    findlength(name);

}

***same as array passing

*/
// return a string from function
/*

char* output(){

static char str[]="bishwajit"

return str;
}
int main(){

 char* str;
 str=output();
 str[5]='o';
printf("%s",str);

}

***we have to use static to make the code throughout the program or else
there will be a read only transfer or code will break

*/
// return a pointer fron function
/*
int* mod(int a[]){

a=a+2;
return a;

}
int main(){
    int *p;
    int a[]={1,2,3};
    p=mod(a);
    printf("%d",*p);
}
*/

// function pointer
/*
int sum(int a,int b){

    return a+b;

}
void main(){

    int s =0;
    int(*ptr)(int,int)=&sum;
    s=(*ptr)(1,2);
    printf("%d",s);

}
*/

// array of function pointer
/*
int add(int a,int b){

return a+b;
}
int sub(int a,int b){

return a-b;
}
int mul(int a,int b){

return a*b;
}




int main(){
    int a;
    int (*fptr[10])(int ,int)={add,sub,mul};
    int a =(*fptr[1])(3,4);
    printf("%d",a);
}

*/

// recursion

/*
recastion is a special kind of function which call itself in the function
the most important thing in recession is the base condition
If the waste condition doesnot work or it is invalid it became an infinite loop and there will be a overflow
*/

/*

void display(int n)
{
    if(n<1){
        return;
    }
    else{
        printf("%d",n);
        display(n-1);
        printf("%d",n);

    }

}
int main(){
int n=3;
display(n);


}

***to know the recursion flow checkout source part pdf url below(at the end)

*/

/*

direct recursion

void fun(){
    fun();
}
int main(){
    fun();
}


indirect recursion

void fun2(){
    fun1();
}
void fun1(){
    fun2();
}
void main(){
fun1();

}

tail function

void fun(){
    if(a<1) return;
    printf("%d",a);
    fun(a-1);
    printf("%d",a);
}

non tail function

void fun(){
    if(a<1) return;
    printf("%d",a);
    fun(a-1);
}


***the line after the recursion call will be executed after the recastion return And when recursion is returning


*/

// structure

/*
Structure is a template which is used to make members of structure

lets creat a structure

struct nameofstructure{
        //data veriables like
        int a;
        float b;
        char c;


};
int main(){

    struct structname variablename;

}

it is also posiable like this

struct structname{


}variablename;

*/
/*

use of structure

struct student {
    char name[30];
    int id;
    char sec;
    float mark;
};

void main(){
int a;
struct student s;

}

it is possible to take array of variable for structure struct student s[10];

here dot(.) is used to use structure data like
printf("%d",s.id);
scanf("%f",s.mark);

data initialization can be of two kinds
struct student s ={bk;1414;I;4.7};                                  //nondegignated
struct student s ={.name=bk;.id=1414;.sec=I;.mark=4.7};             //degignated

*/

/*
structure pointer

struct student {
    char name[30];
    int id;
    char sec;
    float mark;
};

void main(){
int a;
struct student s;
struct student* ptr;
ptr =&s;
printf("%d",s.id);
printf("%d",ptr->id);
}

when a structure pointer is here then we can use the (->) operator instead of (.) operator

*/

/*
typedef in structure

typedef struct student {
    char name[30];
    int id;
    char sec;
    float mark;
}student;               //here the student is the synonym of stock student not a variable

void main(){
int a;
student s;
student* ptr;
ptr =&s;
printf("%d",s.id);
printf("%d",ptr->id);
}


*/

// union
/*

union abc{
    int a;
    int b;

}
void main(){
    union abc u;
    u.a=1;
    u.b=2;
}

use method is same as structure but the difference is the last value remains
all other values became vanished or overwritten

*/

// structure padding packing
/*
structure padding

struct abc{
    char a;                         memory use 8 bytes
    int b;
}s;
here the memory is allocated for s is 8 bytes because one character takes one byte and one integer takes 4 byte
But we know that computer take 4 byte in a cpu cicle
in this case for character a it take one bite and
the other cheap bites remain empty They are called memory holes
and in another cycle it takes the integer so with a memory hole the total is 1(char)+3(hole)+4(integer)=8 bytes

***in this case at the cost of memory we get better performance

structure packing

#pragma pack(1)
struct abc{
    char a;                        memory use 5 bytes
    int b;
}s;

here the memoir is allocated for s is  5 bytes because when we use #pragma pack(1)
the computer take one bite in one cpu cicle
so without a memory hole the total is 1(char)+4(integer)=5 bytes

***here we can save memory at the cost of performance

*/

// FILES
/*
**all file functions are declared in stdlib.h


File *fp;
fp=fopen("file name","mode");
fclose(fp);

*/

// basic File operations
/*
fopen               open a file
fprintf             write on a file
fscanf              read from file
fputc               write character
fgetc               scan character and read
fgets               scan character
fputs               write character
feof                end of file
rewind              take the cursor to the start
FSEEk               move the carsor to the position as i wish in a file
ftell               it will return integer which represents the position of carsor, count starts from zero

feof use
while(!feof(fp)){


}

fgets(string ,position ,file pointer name);         used for the carsor movement and castomized modification

int fseek(file pointer,ofset,position);             SEEK-SET start SEEK-END last SEEK-CUR current
                                                    ofset plus minus represents the right left movement of carsor

*/
// File modes
/*
r mode
open the file if does not exist show error
w mode
open the file if does not exist Create file Old data will be erased automatically
a mode
open the file if does not exist Create the file Old data will not be erased and new data will be add to the end of the old


r+ mode
read and write new folder not create  for modifying
w+ mode
read and write new file created over written erased
a+ mode
read and Appending create new file added to the last

*/

// dynamic memory allocation

/*
here memory will be allocated from heap section So it is necessary to free it after using

malloc :
create a single block of memory for the desired size filled with garbage value

calloc :
Create multiple block of memory and create block of same size filled with zero

realloc :
for reallocation of allocated memory resize increase or decrease in dynamic memory allocation
the new search depends on the old size

free :
release the allocated memory void free pointer described in stdlib.h
**it is not wise to use the pointer after free it will show undefined behavior

*/

// use of dynamic memoy allocation
/*

malloc
ptr=(int*)malloc(n*sizeof(int));

calloc
ptr=(int*)malloc(n,sizeof(int));

realloc
ptr1=(int*)realloc(ptr,+- n*sizeof(int));

free
free(ptr);

*/

/*
memory leak :

it happens when we don't free the allocated dynamic memory
when we use it and don't use FREE it will use the memory again and again and
create new block rather than using the old block or freed block

*/

// enum
/*
enum weekends ={sun,mon,tue,wed ,....}              //only integer is allowed
enum weekends today;
today =sun;                                         //The value of today is now 0 cause the count starts from zero
printf("%d",today);                                 //the value of today is 0

***it is defined structure for integer variable
The structure are limited to the declared part things only
The count starts from zero
*/

// memory classes
/*
                 *auto                                                    *register

            garbage value                                               garbage value
            block or function                                           block or function
            within the block                                            within the block
            store in Stack                                              stored in CPU [used for loop variables]


                 *static                                                    *extern

            zero or null                                                zero or null
            till the end of the program                                 till the end
            within the block                                            global
            stored in RAM                                               stored in RAM

***we can use Extran Keyword to get value from another block or file

*/
// some macros
/*
print date                                      printf("%s",__DATE__);  mm,dd,yy
print time                                      printf("%s",__TIME__);  hh,mm,ss
print file                                      printf("%s",__FILE__);
print line number                               printf("%d",__LINE__);
compailar standerd                              printf("%d",__STDC__);  return 0 or 1 as false or true


****predefined macro

#ifdef macro
#else if
**using various code depending on the micro files

*/
