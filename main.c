//Brocode Beginner Tutorial

// Tutorial 1 - Starting + Comments & Escape sequences
/*#include <stdio.h>
int main() {

    //This is a comment --
    /*
    This
    is
    a
    multiline
    comment
    */

    /* escape sequence = charcter combination consisting of a backslash \ followed by a letter
                        or combination of digts. They specifiy actions withn a line or string of text.
                        \n = newline
                        \t = tab
    */
    /*printf("I like pizza!\n");
    printf("It's really good\n");
    printf("I\nlike\npizza!\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
    printf("\"I like pizza!\" - Abraham Lincoln\n");
    printf("\\I like pizza!\\ - Abraham Lincoln\n");
    return 0;
}*/


// Tutorial 2 - Variables
/*#include <stdio.h>
int main() {
    //variable = Allocated space in memory to store a value.
    //           We refer to a variable's name to access the stored value.
    //           That variable now behaves as if it was the value it contians.
    //           But we need to declare waht tyepe of data we are storing

    int x;  //declaration
    x = 123; //initialization
    int y = 321; //declaration + initializaiton

    int age = 20; //integer - %d
    float gpa = 3.96; //floting point number - %f
    char grade = 'A'; //single character - %c
    char name[] = "Elif"; // array of characters - %s

    printf("Hello %s\n", name);
    printf("Your are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}*/


// Tutorial 3 - Data Types
/*#include <stdio.h>
#include  <stdbool.h>

int main() {
    char a = 'A'; //single character - %c
    char b[] = "Elif"; // array of characters - %s

    float c = 4.966399204098503; //floting point number - %f - 6-7 digits - 4 bytes (32 bits of precision)
    double d = 4.966399204098503; // %lf - 15-16 digits - 8 bytes (64 bits of precision

    bool e = true; //1 byte (true(1) or false(0)) - %d

    //eğer sınırların üzerinde bir değer alırsa minimum değeri yazar
    char f = 100; //1 byte (-128 to +127) %d (sayıyı gösterir) or %c (sayıya karşılık gelen harfi gösterir)
    unsigned char g = 200; // 1 byte (0 to +255) %d or %c

    //int yazılmayabilir (sadece short/unsigned short şeklinde)
    short int h = 32700; //2 bytes (-32,768 to +32,767) - %d
    unsigned short int i = 65456; //2 bytes (0 to +65,535) - %d

    int j = 2147483647; //4 bytes (-2,147,483,648 to +2,147,483,647) - %d
    unsigned int k = 42949672890; //4 bytes (0 to +4,294,967,295) - %u

    long long int l = 9223372036854775880; //8 bytes (-9 quintillion to +9 quintillion) - %lld
    //eğer unsigned long long int hata verirse sayının sonuna "u" konur (boşluk bırakma)
    unsigned long long int m = 18446744073709551615; //8 bytes (0 to +18 quintillion) - %llu

    printf("%c\n", a); //char
    printf("%s\n", b); //character array
    printf("%0.15f\n", c); //float - 0.15 noktadan sonra kaç basamak gösterileceğini belirler
    printf("%0.15lf\n", d); //double
    printf("%d\n", e); //bool
    printf("%d\n", f); //char as numaric value
    printf("%c\n", f); //char as numaric value('s letter)
    printf("%d\n", g); //unsigned char as numaric value
    printf("%d\n", h); //short int
    printf("%d\n", i); //unsigned short int
    printf("%d\n", j); //int
    printf("%u\n", k); //unsigned int
    printf("%lld\n", l); //long long int
    printf("%llu\n", m); //unsigned long long int

    return 0;
}*/


// Tutorial 4 - Format Specifiers
/*#include <stdio.h>
int main () {
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string (array of characters)
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%f\n", item1);
    printf("Item 1: $%.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n", item3);

    printf("Item 1: $%10.2f\n", item1);
    printf("Item 2: $%10.2f\n", item2);
    printf("Item 3: $%10.2f\n", item3);

    printf("Item 1: $%-10.2f\n", item1);
    printf("Item 2: $%-10.2f\n", item2);
    printf("Item 3: $%-10.2f\n", item3);
    return 0;
}*/


// Tutorial 5 - Constants
/*#include <stdio.h>
int main() {
    // constants = fixed value that cannot be altered by the program during its executon
    // başına const konularak değişken sabitlenir ve değişkenin adını genelde büyük harfle yazılır

    const float PI = 3.14159;

    printf("%f", PI);

    return 0;
}*/


// Tutorial 6 - Arithmetic Opertors
/*#include <stdio.h>
int main () {
    // + (addition)
    // - (subtraction)
    // * (multipication)
    // / (division)
    // % (modulus) - (bölümden kalanı verir)
    // ++ (increment) - (1 arttırır)
    // --( decrement)

    int x = 5;
    int y = 2;
    int z = x / y;
    printf("%d\n", z);

    int a = 5;
    int b = 2;
    float c = a / b;
    printf("%f\n", c);
// bölen float olmadığında 5/2 2.5 vermez
    int k = 5;
    float l = 2;
    float m = k / l;
    printf("%f\n", m);

    int q = 5;
    int w = 2;
    float e = q / (float) w; // bu böleni float yapar ama değişken değişmez ve int olarak kalır
    printf("%f\n", e);

    int t = a % b;
    printf("%d\n", t);

    x++;
    y--;
    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}*/


// Tutorial 6.5 - Augmented Assignment Operators
/*#include <stdio.h>
int main () {
    /* Augmented Assignment Operators = used to replace a statement where an operator takes a variable
    as one of its arguments and then assigns the result back to the same variable
    x = x + 1  ==  x += 1*/
    /*int x = 10;
    printf("%d\n", x);
    x+=2;
    printf("%d\n", x);
    x-=4;
    printf("%d\n", x);
    x*=3;
    printf("%d\n", x);
    x/=5;
    printf("%d\n", x);
    x%=3;
    printf("%d\n", x);
    return 0;
}*/


// Tutoral 7 - Input
/*#include <stdio.h>
#include <string.h>
//fgets ile alınan input sonrası oluşan \n den kurtulmak için
int main () {

    char name[25]; // 25 bytes dan daha küçük girdiler kabul edilir
    int age;

    printf("What is your name?\n");
    //scanf("%s", &name); // scanf ile alınan inputlarda boşluk olmamalı
    fgets(name, 25, stdin); // değişkenin adı, istenen maksimum büyüklük, standard input
    name[strlen(name)-1] = '\0'; //fgets ile alınan input sonrası oluşan \n den kurtulmak için

    printf("How old are you?\n");
    scanf("%d", &age); // kabul edilecek değişkenin format specifierı + nereye bu blgi depolanacak
    printf("Your name is %s and you are %d years old", name, age);
    return 0;
}*/


// Tutorial 8 - Math Functions
/*#include <stdio.h>
#include <math.h>
//to include math functions
int main () {
    double A = sqrt(9); //squareroot(karekök) function
    double B = pow(2, 5); //üs - ilk taban ikincisi üs
    int C = round(3.14); //sayıyı üste veya alta yuvarlama
    int D = ceil(3.14); //sayıyı üste yuvarlama her zaman
    int E = floor(3.24); //sayıyı alta yuvarlama her zaman
    double F = fabs(-100); //absolute value - mutlak değer, sayı sıfırdan ne kadar uzak
    double G = log(3); //logaritma
    double H = sin(45); //sinüs
    double I = cos(45); //kosinüs
    double J = tan(45); //tanjant

    printf("%lf\n", A);
    printf("%lf\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%lf\n", F);
    printf("%lf\n", G);
    printf("%lf\n", H);
    printf("%lf\n", I);
    printf("%lf\n", J);
    return 0;
}*/


// Tutorial 9 - Circle Circumference Program (çember çevre hesabı + alan hesabı)
/*#include <stdio.h>
int main () {
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of a circle:");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("circumference: %lf\n", circumference);
    printf("area: %lf", area);
    return 0;
}*/


// Tutorial 10 - Hypotenuse Calculator Program
/*#include <stdio.h>
#include <math.h>

int main () {

    double A;
    double B;
    double C;

    printf("Enter side A:\n");
    scanf("%lf", &A);

    printf("Enter side B:\n");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);
    printf("Side C: %lf", C);
    return 0;
}*/


// Tutorial 11 - If Statements
/*#include <stdio.h>
int main () {

    int age;

    printf("Enter your age:\n");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You are now signed up!");
    }

    else if (age == 0) {
        printf("You can't sign up! You were just born!");
    }

    else if (age < 0) {
        printf("You haven't been born yet!");
    }

    else {
        printf("You are too young to sign up!");
    }
}*/


// Tutorial 12 - Switch Statements
/*#include <stdio.h>

int main () {
    // switch = a more efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("Enter a letter grade:\n");
    scanf("%c", &grade);
    // If we have matching case but dont have break it will run everything after matching case
    switch(grade) {
        case 'A':
            printf("Perfect!");
            break;
        case 'B':
            printf("You did good!");
            break;
        case 'C':
            printf("You did okay!");
            break;
        case 'D':
            printf("At least it's not an F!");
            break;
        case 'F':
            printf("YOU FAILED!");
            break;
        default:
            printf("Please enter only valid grades");
    }
}*/


// Tutorial 13 - Temperature Conversion Program
/*#include <stdio.h>
#include <ctype.h>
// string ler için ekledik
int main () {

    char unit;
    float temp;

    printf("Is the tempereature in (F) or (C):\n");
    scanf("%c", &unit);

    unit = toupper(unit); // bu gelen unit girdisini büyük harfe çevirir

    if(unit == 'C') {
        printf("Enter the temp in Celsius:\n");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temp in Fahrenheit is: %.2f\n", temp);
    }
    else if(unit == 'F') {
        printf("Enter the temp in Fahrenhait:\n");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temp in Celsius is: %.2f\n", temp);
    }
    else {
        printf("%c is not a valid unit of measurement", unit);
    }
    return 0;
}*/


// Tutorial 14 - Calculator Program
/*# include <stdio.h>
int main () {
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator (+ - * /):\n");
    scanf("%c", &operator);

    printf("Write first number:");
    scanf("%lf", &num1);

    printf("Write second number:");
    scanf("%lf", &num2);

    switch (operator) {
        case('+'):
            result = num1 + num2;
            printf("Result is %lf", result);
            break;
        case('-'):
            result = num1 - num2;
            printf("Result is %lf", result);
            break;
        case('*'):
            result = num1 * num2;
            printf("Result is %lf", result);
            break;
        case('/'):
            result = num1 / num2;
            printf("Result is %lf", result);
            break;
        default:
            printf("%c is not valild", operator);
    }
    return 0;
}*/


// Tutorial 15 - AND logical operator (&&)
/*#include <stdio.h>
#include <stdbool.h>
//bool olunca ekle!
int main () {
    // logical operators = && (AND) checks if two conditions are true

    float temp = 25;
    bool sunny = false;


    if (temp >= 10 && temp <=30 && sunny == 1) {
        printf("The weather is good!");
    }
    else {
        printf("The weather is bad!");
    }
    return 0;
}*/


// Tutorial 16 - OR logical operator (||)
/*#include <stdio.h>
int main () {
    //logical operators = || (OR) checks if at least one condition is true

    float temp = 25;

    if (temp <= 0 || temp >= 30) {
        printf("The weather is bad!");
    }
    else {
        printf("The weather is good!");
    }
    return 0;
}*/


// Tutorial 17 - NOT logical operator (!)
/*#include <stdio.h>
#include <stdbool.h>

int main () {
    // logical operators = ! (NOT) reverses the state of a condition

    bool sunny = true;

    if (!sunny == 1) {
        printf("It's cloudy outside!");
    }
    else {
        printf("It's sunny outside!");
    }
    return 0;
}*/


// Tutorial 18 - Functions
/*#include <stdio.h>
//bir fonksiyon oluşturuyoruz
void birthday () {
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday dear...YOU!\n");
    printf("Happy birthday to you!\n\n");
}

int main() {
    birthday(); //fonksiyonu çağırıyoruz
    birthday();
    birthday();

    return 0;
}*/


// Tutorial 19 - Arguments
/*#include <stdio.h>

void birthday (char name[], int age) {
    printf("Happy birthday dear %s\n", name);
    printf("You are %d years old!\n", age);
}

int main() {
    char name[] = "Elif";
    int age = 20;

    birthday(name, age);

    return 0;
}*/


// Tutorial 20 - Return Statement
/*#include <stdio.h>

double square(double x) { //burada başta void yerine result ın data type ı neyse o yazılmalı
    double result = x * x;
    return result; //bu ikisi yerine return x * x; de yazılabilir
    //return sonucu döndürür
}
int main () {
    // return = returns a value back to a calling function
    double x = square(3.14);
    printf("%lf", x);

    return 0; //fonsiyonu bitirir
}*/


// Tutorial 21 - Ternary Operator
/*#include <stdio.h>

int findMax(int x, int y) {
    return(x > y) ? x : y;
}*/
/* bu kısım aşağıdaki ile aynı çalışır
int findMax(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}*/
/*int main() {
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false [şeklinde yazılır]

    int max = findMax(3, 4);

    printf("%d", max);

    return 0;
}*/


// Tutorial 22 - Function Prototypes
/*#include <stdio.h>

void hello(char[], int); //function prototype

int main() {
    // function prototype

    //WHAT IS IT?
    //Function declaration, w/o a body, before main()
    //Ensures that calls to a function are made with correct arguments

    //IMPORTANT NOTES
    //Many C compilers do not check for parameter matching
    //Missing arguments will result in unexpected behavior
    //A function prototype causes the compiler to flg an error if arguments are missing

    //ADVANTAGES
    //1. Easier to navigate a program w/ main() at the top
    //2. Helps with debugging
    //3. Commonly used in header files

    char name[] = "Elif";
    int age = 20;

    hello(name, age);

    return 0;
}
void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old", age);
}*/


// Tutorial 23 - String Functions
/*#include <stdio.h>
#include <string.h>
//to use string functions

int main() {
    char string1[] = "Elif";
    char string2[] = "Ugur";

    //strlwr(string1);              //converts a string to lowercase
    //strupr(string1);              //converts a string to uppercase
    //strcat(string1, string2);     //appends string2 to end of string1 - 1in sonuna 2yi ekler
    //strncat(string1, string2, 1); //appends n characters from string2 to end of string1
                                    //2den n sayıda harfi 1in sonuna ekler, n i ssona sayı olarak ekle
    //strcpy(string1, string2);     //copy string2 to string1
    //strncpy(string1, string2, 2); // copy n characters of string2 to string1
                                    //2den n sayıda karakteri 1deki yerlere kopyalar

    //strset(string1, '?');         //sets all characters of a string to a given character
                                    // 1 deki tüm karakterleri verilene çevirir
    //strnset(string1, 'x', 2);     // sets first n characters of a string
                                    //verilen karakteri verlen sayıdaki yerlere koyar
    //strrev(string1);              //reverses a string

    //int result = strlen(string1);        //returns string length as int
    //int result = strcmp(string1, string2); //string compare all characters
                                            //kelimeleri karşılaştırır aynı ise 0 verir farklı ise -1
    //int result = strncmp(string1, string2, 1); //string compare n characters
                                            // kelimlerin n sayıda karakterini karşılaştırır. aynı 0 farklı -1
    //int result = strcmpi(string1, string1); //string compare all (ignore case) yani büyük küçük harfe bakmadan karşılaştırır
    int result = strnicmp (string1, string1, 1); //string compare n characters (ignore case)

    printf("%s\n", string1);
    printf("%d", result);
    return 0;
}*/


// Tutorial 24 - For Loops
/*#include <stdio.h>

int main() {
    // for loop = repeats a section of code a limited amount of times

    for (int i = 1; i <= 10; i+= 3) { // i = index
    //nereden başlanıcak; nereye kadar devam edicek; kaçarlı artıcak
        printf("%d\n", i);
    }
}*/


// Tutorial 25 - While Loops
/*#include <stdio.h>
#include <string.h>

int main() {
    // while loop = repeats a section of code possibly unlimited times
    // WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("What's your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // bu satır fgets ile otomatik gelen /n ı siler

    while(strlen(name) == 0) {
        printf("You did not enter your name\n");
        printf("What's your name?\n");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    printf("Hello %s", name);
    return 0;
}*/


// Tutorial 26 - Do While Loops
/*#include <stdio.h>

int main() {
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of coded once, THEN checks a condition

    int number = 0;
    int sum = 0;

    do {
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number > 0) {
            sum += number;
        }
    }while (number > 0);

    printf("sum: %d", sum);
    return 0;
}*/


// Tutorial 27 - Nested Loops
/*#include <stdio.h>

int main() {
    //nested loops = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("Enter number of rows:\n");
    scanf("%d", &rows);

    printf("Enter number of columns:\n");
    scanf("%d", &columns);

    scanf("%c"); // bu son scanf fonksiyonundan sonra gelen \n i siler
    // yoksa bir sonraki scanf \n input olarak alır

    printf("Enter a symbol to use:\n");
    scanf("%c", &symbol);

    for (int i  = 1; i <= rows; i++) {
        for ( int j = 1; j <= columns; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}*/


// Tutorial 28 - Break vs Continue
/*#include <stdio.h>

int main() {
    // continue = skips rest of code & forces the next iteration of the loop
    // break = exits a loop/switch

    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}*/


// Tutorial 29 - Arrays
/*#include <stdio.h>

int main() {
    // array = a data structure that can store many values of the same data type

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0}; //array oluşturmak için [] eklenir
    //öncelikle kaç element olucağını belirleyip sonra içine atabiliriz => double prices[5];
    //prices[0] = 5.0; şeklinde

    printf("$%.2lf", prices[0]); //listeden seçmek için [] ve içine sayı eklenir. 0 ile başlar

    return 0;
}*/


// Tutorial 30 - Print an Array with Loop
/*#include <stdio.h>

int main() {
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

    //sizeof elementin büyüklüğünü ölçer
    //sizeof(prices) / sizeof(prices[0]) kaç tane element olduğunu verir
    //(herhangi bir tane liste elemanı kullanılabilir sizeof(prices[0]) yerine)
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) { //arraydaki hepsini print ediyor
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}*/


// Tutorial 31 - 2D Arrays
/*#include <stdio.h>
int main() {
    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data

    //int numbers[2][3] = {
                     //   {1, 2, 3},
                     //   {4, 5, 6}};
    //2[] => 2D array - we need to specify the max sixe of each array in array
    //first[] number of rows(not a necessity) - second[] number of columns(necessity)

    int numbers[3][3];

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    //kaç tane satır olduğunu bulmak için - tamamı bölü 1 satır boyutu (herhangi bir satıra bölünebilir)
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);
    //kaç tane sütun olduğunu bulmak için - 1 satır bölü satırdaki 1 eleman (herhangi biri)

    printf("rows: %d\n", rows);
    printf("colums %d\n", columns);

    numbers[0][0] = 1; //hem hangi satırda hem de hamgi satırda olduğu gösterilmeli
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;
//tüm hepsini print etmek için nested loop kullanılmalı
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/


//Tutorial 32 - Array of String
/*#include <stdio.h>
#include <string.h>

int main() {
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    //cars[0] = "Tesla" => bu şekilde 0'da değişkeni değiştiemeyiz
    strcpy(cars[0], "Tesla"); // => bu şekilde değişken değiştirilir

    for(int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
        printf("%s\n", cars[i]);
    } // => bu şekilde tüm liste print edilir
    return 0;
}*/


//Tutorial 33 - Swap Values of Two Variables
//1. char/int için

/*#include <stdio.h>
int main() {
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    return 0;
}*/

//2. stringler için

/*#include <stdio.h>
#include <string.h>

int main() {
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];
//strcpy yaparken y x den kısaysa hata verebilir bunun için hepsinin sınırını aynı belirliyoruz

    strcpy(temp, x); //char için kullanılan yöntem işe yaramaz strcpy işlemi gerekir
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}*/


// Tutorial 34 - Sort an Array
//Bubble Sort
/*#include <stdio.h>

void sort(int array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) { //i ı optimize etmek için kullandık
            if(array[j] > array[j+1]) { // büyükten küçüğe için < terse dönmeli
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}

int main() {
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
// char data type ı ile de çalıştırılabilir (syntax a dikkat et)
    int size = sizeof(array) / sizeof(array[0]); //listede kaç eleman var hesaplamak için

    sort(array, size);
    printArray(array, size);

    return 0;
}*/


//Tutorial 35 - Structs
/*#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};//struct oluşturma

int main() {
    //struct = collection od related members ("variables")
    //         they can be of different data types
    //         listed under one name in a block of memory
    //         VERY SIMILAR to classes in other languages (but no methods)

    struct Player player1;
    struct Player player2; //struct birçok kez kullanılabilir

    strcpy(player1.name, "Elif"); //. => member access operator
    //string için strcpy - int için normal assign
    player1.score = 17;

    strcpy(player2.name, "Ugur");
    player2.score = 10;

    printf("%s: %d\n", player1.name, player1.score);
    printf("%s: %d\n", player2.name, player2.score);

    return 0;
}*/


//Tutorial 36 - Typedef
/*#include <stdio.h>
#include <string.h>

//typedef char user[25]; => bu şekilde typedef oluşturulur sonrasında sadece user yazmak yeterli

typedef struct {
    char name[25];
    char password[12];
    int id;
}User; //typedef ile struct oluşturma

int main() {
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Elif", "password123", 12345};
    User user2 = {"Ugur", "password987", 98765};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);
}*/


// Tutorial 37 - Array of Structs
/*#include <stdio.h>
#include <string.h>

struct Student {
    char name[12];
    float gpa;
};

int main() {
    struct Student student1 = {"Spongebob", 3.0};
    struct Student student2 = {"Patrick", 2.5};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Squidward", 2.0};

    struct Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        printf("%s: %.2lf\n", students[i].name, students[i].gpa);
        //students[i].name listedeki tüm isimleri sırayla print
    }
    return 0;
}*/


// Tutorial 38 - Enums
/*#include <stdio.h>
// içinde veya dışında olabilir enum
enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
// constant names - eğer 1 2 3 eşitleme olmasaydı 0 iile başlar ve sıralı devam ederdi
//they will treat as integers not strings
int main() {
    // enum = a user defined type of named integer indentifiers
    //        helps to make a program more readable

    enum Day today = Sat;

    //printf("%d", today); => print enum
    //enums are NOT STRINGS, but they can be treated as int

    if(today == Sun || today == Sat) {
        printf("It's the weekend! Party time!");
    }
    else {
        printf("I have to work today :(");
    }
    return 0;
}*/


// Tutorial 39 - Random Numbers
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // pseudo random numbers = A set of values or elements that ara statistically random
    //                      (Don't use these for any sort of cryptographic security)

    srand(time(0));
    //s for seed, rand for random
    //seed koymazsak her tekrar yaptığımızda aynı sayıyı verir
    int number1 = (rand() % 6) + 1; //rand => random number between 0 - 32,767
    //rand() % 6 => 0dan 6ya kadar tüm sayılar (6 dahil değil) - +1 ile sayılar 1den 7ye kadar olur
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);

    return 0;
}*/


// Tutorial 40 - Number Guessing Game
/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    //uses the current time as a seed
    srand(time(0));

    //generate a random number between MIN & MAX
    answer = (rand() % MAX) + MIN;

    do {
        printf("Enter a guess:");
        scanf("%d", &guess);
        if (guess > answer) {
            printf("Too high!\n");
        }
        else if(guess < answer) {
            printf("Too low!\n");
        }
        else {
            printf("CORRECT!\n");
        }
        guesses++;
    } while(guess != answer);

    printf("*****************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("*****************\n");

    return 0;
}*/


// Tutorial 41 - Quiz Game
/*#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {"1. What year dd the C language debut?:",
                             "2. Who is credited with creating C?:",
                             "3. What is the predecessor of C?:"};

    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
        "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
        "A. Objective C", "B. B", "C. C++", "D. C#"};

    char answers[3] = {'B', 'A', 'B'};
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("QUIZ GAME!\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("*****************\n");
        printf("%s\n", questions[i]);
        printf("*****************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("%s\n", options[j]);
        }
        printf("guess:\n");
        scanf("%c", &guess); // \n ekliyor
        scanf("%*c"); // clear \n from input buffer

        guess = toupper(guess);

        if(guess == answers[i]) {
            printf("CORRECT!\n");
            score++;
        }
        else {
            printf("WRONG!\n");
        }
    }
    printf("*****************\n");
    printf("FINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("*****************\n");

    return 0;
}*/