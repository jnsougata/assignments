#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>


#define PI 3.14
#define sum(a, b) (a + b)
#define mult(a, b) (a * b)
#define sub(a, b) (a - b)


// 1. Write a program to display “hello world” in C
void printHelloWorld() {
    printf("Hello World!");
}

// 2. Write a program to add two numbers (5&7) and display its sum.
void addTwoNumbers() {
    int num1 = 5;
    int num2 = 7;
    int sum = num1 + num2;
    printf("Sum of %d and %d is %d", num1, num2, sum);
}

// 3. Write a program to multiply two numbers (10&8) and display its product.
void multiplyTwoNumbers() {
    int num1 = 10;
    int num2 = 8;
    int product = num1 * num2;
    printf("Product of %d and %d is %d", num1, num2, product);
}

// 4. Write a program to calculate area of a circle having its radius (r=5).
void calculateAreaOfCircle() {
    float radius = 5.0;
    float area = (22/7) * radius * radius;
    printf("Area of circle with radius %f is %f", radius, area);
}

// 5. Write a program to calculate area of an ellipse having its axes (minor=4cm, major=6cm).
void calculateAreaOfEllipse() {
    float minorAxis = 4.0;
    float majorAxis = 6.0;
    float area = (22/7) * minorAxis * majorAxis;
    printf("Area of ellipse with minor axis %f and major axis %f is %f", minorAxis, majorAxis, area);
}

// 6. Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I = P*T*R/100)
void calculateSimpleInterest() {
    float principal = 4000.0;
    float time = 2.0;
    float rate = 5.5;
    float interest = (principal * time * rate) / 100;
    printf("Simple interest for P=%f, T=%f, R=%f is %f", principal, time, rate, interest);
}

// 7. Write a program to produce the output as shown below:
// x y expressions results
// 6 | 3 | x=y+3 | x=6
// 6 | 3 | x=y-2 | x=1
// 6 | 3 | x=y*5 | x=15
// 6 | 3 | x=x/y | x=2
// 6 | 3 | x=x%y | x=0
void calculateExpressions() {
    int x = 6;
    int y = 3;
    int result;
    result = x = y + 3;
    printf("%d | %d | x=y+3 | x=%d\n", x, y, result);
    x = 6;
    result = x = y - 2;
    printf("%d | %d | x=y-2 | x=%d\n", x, y, result);
    x = 6;
    result = x = y * 5;
    printf("%d | %d | x=y*5 | x=%d\n", x, y, result);
    x = 6;
    result = x = x / y;
    printf("%d | %d | x=x/y | x=%d\n", x, y, result);
    x = 6;
    result = x = x % y;
    printf("%d | %d | x=x%%y | x=%d\n", x, y, result);
}

// 8. Given x=3.0, y=12.5, z= 523.3, A=300.0, B=1200.5, C=5300.3, Write a program to
// display
// the following:
// X y z= 3.0| 12.5| 523.3|
// A B C= 300.0| 1200.5| 5300.3|
// ---------------------------------------------------------------------
// X y z= |3.00 |12.50 |523.30
// A B C= |300.00 |1200.50 |52300.30
void displayVariables() {
    float x = 3.0;
    float y = 12.5;
    float z = 523.3;
    float a = 300.0;
    float b = 1200.5;
    float c = 5300.3;
    printf("X y z= %.1f| %.1f| %.1f|\n", x, y, z);
    printf("A B C= %.1f| %.1f| %.1f|\n", a, b, c);
    printf("---------------------------------------------------------------------\n");
    printf("X y z= |%.2f |%.2f |%.2f\n", x, y, z);
    printf("A B C= |%.2f |%.2f |%.2f\n", a, b, c);
}

// 9. Given the three numbers a(=8), b(=4),c and constant value PI=3.1415, calculate and
// display
// the following result using macros (preprocessor directives)
// a. c = PI * mult(a,b) //the macro mult(a,b) perform the multiplication of a & b(a*b)
// b. c= PI* sum(a,b) //the macro mult(a,b) perform the sum of a & b (a+b)
// c. c= PI *sub(a,b) //the macro mult(a,b) perform the subtraction of a & b (a-b)
void calculateUsingMacros() {
    float a = 8.0;
    float b = 4.0;
    float c;
    c = PI * mult(a, b);
    printf("c = PI * mult(a, b) = %.2f\n", c);
    c = PI * sum(a, b);
    printf("c = PI * sum(a, b) = %.2f\n", c);
    c = PI * sub(a, b);
    printf("c = PI * sub(a, b) = %.2f\n", c);
}

// 10. Demonstrate the differences among getch(), getche(), getchar(). 
// Demonstrate the difference between scanf() & gets(), printf() & puts().
void demonstrateDifferences() {
    char ch;

    printf("1. Using getch(), getche(), and getchar():\n");
    printf("Enter a character using getch(): ");
    ch = getch();
    printf("\nYou entered: %c\n", ch);

    printf("Enter a character using getche(): ");
    ch = getchar();
    printf("\nYou entered: %c\n", ch);

    printf("Enter a character using getchar(): ");
    ch = getchar();
    printf("You entered: %c\n", ch);

    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("\n2. Using scanf() and gets():\n");
    char name[50];
    printf("Enter your name using scanf(): ");
    scanf("%s", name);
    printf("You entered: %s\n", name);

    printf("Enter your name using gets(): ");
    gets(name);
    printf("You entered: %s\n", name);

    printf("\n3. Using printf() and puts():\n");
    printf("Using printf():\n");
    printf("Hello, World!\n");
    
    printf("Using puts():\n");
    puts("Hello, World!");
}

// 11a. Write a program to take a character input from keyboard and check if it is a number
// or alphabet or special character using ASCII CODE Again
void checkCharByASCII() {
    printf("Enter a character: ");
    int ch = getchar();
    if ((ch > 96 && ch < 123) || (ch > 64 && ch < 91)) {
        printf("The entered character `%c` is an alphabet.\n", ch);
    } else if (ch > 47 && ch < 58)
    {
        printf("The entered character `%c` is a digit.\n", ch);
    } else {
        printf("The entered character `%c` is a special character.\n", ch);
    }
} 

// 11b. calculate area of a triangle
void calculateAreaOfTriangle() {
    float a, b, c;
    printf("Enter the lengths of the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %.2f", area);
}

// 12. Write a C program to find the area and volume of sphere.
void calculateAreaAndVolumeOfSphere() {
    float radius, area, volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    area = 4 * 3.14 * radius * radius;
    volume = 4 / 3 * 3.14 * radius * radius * radius;
    printf("The surface area of the sphere is: %.2f\n", area);
    printf("The volume of the sphere is: %.2f\n", volume);
}

// 13. Write a C program to print the multiply value of two accepted numbers
void multiplyTwoAcceptedNumbers() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("The multiply value of two numbers is: %f\n", num1 * num2);
}

// 14. Write a C program to convert centigrade into Fahrenheit. Formula: C= (F-32)/1.8.
void convertCentigradeToFahrenheit() {
    float centigrade;
    printf("Enter the temperature in centigrade: ");
    scanf("%f", &centigrade);
    float fahrenheit = (centigrade * 1.8) + 32;
    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);
}

// 15. Write a C program to read in a three digit number and produce the following output
// (assuming that the input is 347) 3 hundreds 4 tens 7 units
void readThreeDigitNumber() {
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    int hundreds = number / 100;
    int tens = (number % 100) / 10;
    int units = number % 10;
    printf("%d hundreds %d tens %d units\n", hundreds, tens, units);
}

// 16. Write a C program to read in two integers and display one as a percentage of the other.
void oneAsPercentangeofAnother() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    float result = (a*100)/b;
    printf("%d is %.2f%% of %d\n", a, result, b);
}

// 17. Write a C program to find out whether the character pressed through the keyboard is a digit or not
// (using conditional operator).
void checkChar() {
    printf("Enter a character: ");
    char ch = getchar();
    if (ch > 47 && ch < 58) {
        printf("The entered character `%c` is a digit.\n", ch);
    } else {
        printf("The entered character `%c` is not a digit.\n", ch);
    }
}

// 18. Write a C program to swap variable values of i and j.
void swapValues() {
    int a=10, b=20;
    printf("The current values are a: %d, b: %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping values are a: %d, b: %d\n", a, b);
}

// 19. Write a program to read a floating point number from keyboard 
// print its integer and fractional part separately.
void destructureFlaot() {
    float x;
    printf("Enter a floating point number: ");
    scanf("%f", &x);
    printf("The integer part of %f is %d\n", x, (int)x);
    printf("The fractonal part of %f is %f\n", x, x - (int)x);
}

// 20. Write a program to read and print a character using getchar(), getch(), getche(), putchar(), putch().
void readAndPrintCharUsingBuiltins() {
    char ch;
    printf("Reading using getchar(): ");
    ch = getchar();
    putchar(ch);
}

// 21. Write a program to find the Simple Interest(Simple Interest,I=P*N*R/100) 
// where P=Principal,N=no: of years, R= Rate of Interes.
void simpleInterest(float p, float n, float r) {
    float i = p * n * r / 100;
    printf("The calculated simple interest(I) is %.2f where P=%.2f, N=%.2f, R=%.2f\n", i, p, n, r);
}

int main() {
    simpleInterest(100, 3, 10);
    return 0;
}