/*
 * Niko Massei
 * Complete Compilation Driver Program - C Language Work List -- 2023 Fall Semester
 * 27 December 2023
 * Projects progressively became more difficult
 */

#include <stdio.h>   //header files
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define HOUR_CONSTANT 60
#define SIZE0 15 
#define PAR 72
#define PAYRATE 10.00
#define RATE1 .15
#define RATE2 .20
#define RATE3 .25
#define CUTOFF1 300.0
#define CUTOFF2 450.0
#define BASE1 (RATE1 * CUTOFF1)
#define BASE2 (BASE1 + (RATE2 * (CUTOFF2 - CUTOFF1)))
#define TEST 4
#define SCORES 10
#define SIZE1 10
#define LEN 10
#define MONTHS 12
#define SIZE2 15       
#define LIM 10        
#define LAST_SIZE 21
#define GUESSES 6

int menu(void);   //function prototypes
void hello(void);
void dogs(void);
void macroMuscle(void);
void employeePay(void);
void timeToMinutes(void);
void displayValue(void);
void addEmUp(void);
void nestedLoop(void);
void backwards(void);
void scoresIn(void);
void paycheck(void);
void payMenu(void);
void characterCounter(void);
void min_driver(void);
double minimum(double, double);
void chline_driver(void);
void chline(char, int, int);
void sort_driver(void);
void sort(double *, double *, double *);
void grades(void);
void sum_arr2(void);
int sump(int * start, int * end);
int min_min(int * start, int * end);
int max_max(int ar[], int n);
char * getnchar(char * str, int n);
void exer1(void);
void retailSales(void);
void sort_str(void);
void guessing_game(void);


int main(void)
{
    int selection = menu();  //variable declaration and initialization via
    //call to menu(). The line above also serves as the 'priming' read
    //for the following while loop

    while(selection != 99) {

        switch(selection) {

        case 1:
            hello(); // function call to hello()
            break; 

        case 2:
            dogs();
            break;

        case 3:
            macroMuscle();
            break;

        case 4:
            employeePay();
            break;

        case 5:
            timeToMinutes();
            break;

        case 6:
            displayValue();
            break;

        case 7:
            addEmUp();
            break;

        case 8:
            nestedLoop();
            break;

        case 9:
            backwards();
            break;

        case 10:
            scoresIn();
            break;

        case 11:
            paycheck();
            break;

        case 12:
            payMenu();
            break;

        case 13:
            characterCounter();
            break;

        case 14:
            min_driver();
            break;

        case 15:
            chline_driver();
            break;

        case 16:
            sort_driver();
            break;

        case 17:
            grades();
            break;
        default: 

        case 18:
            sum_arr2();
            break;
        
        case 19:
            exer1();
            break;
        
        case 20: 
            retailSales();
            break;

        case 21:
            sort_str();
            break;

        case 22:
            guessing_game();
            break;

            printf("Please enter a valid selection.\n");
        }

    selection = menu();    // get the next menu selection
    }

   return 0;
}

int menu(void) {
    int choice = 99;
    printf("***************************\n");
    printf(" 1. Hello World Program\n");  
    printf(" 2. Dogs Program\n");
    printf(" 3. Macro Muscle Program\n");
    printf(" 4. Employee Pay Program\n");
    printf(" 5. Time to Minutes Program\n");
    printf(" 6. Display Value Program\n");
    printf(" 7. Add Em Up Program\n");
    printf(" 8. Nested Loop Program\n");  
    printf(" 9. Backwards Program\n");
    printf(" 10. Scores In Program\n");
    printf(" 11. Paycheck Program\n");
    printf(" 12. Pay Menu Program\n");
    printf(" 13. Character Counter Program\n");
    printf(" 14. Min Driver Program\n");
    printf(" 15. Ch Line Program\n");
    printf(" 16. Sort Driver Program\n");
    printf(" 17. Grades Program\n");
    printf(" 18. Sum of Array Program\n");
    printf(" 19. Exer1 Program\n");
    printf(" 20. Retail Sales Program\n");
    printf(" 21. Sort String Program\n");
    printf(" 22. Guessing Game Program\n");
    printf("99. Exit\n");
    printf("Please select number and press enter:\n");
    printf("***************************\n");
    scanf("%d", &choice);
    getchar();  // clear the buffer since the integer will be read
    // but the act of pressing enter leaves the \n in the buffer
    return choice;
}

// hello() function definition
void hello(void) {
    printf("Hello, world!\n");
}

void dogs(void) {
    int numDogs; //variable
    printf("How many dogs do you have? \n");
    scanf("%d",&numDogs);
    printf("So you have %d dog(s)!\n", numDogs);

}

void macroMuscle(void) {
    float centiConv = 2.54; //Declaration and initialization
    float inches;
    printf("This program converts inches to centimeters. Input inches:\n");
    scanf("%f", &inches);
    printf("%f inches is equivalent to %f centimeters\n", inches, inches *centiConv);
        

}

void employeePay() {
    char employeeID[10];
    float hoursWorked, hourlyPay, grossPay, fica, netPay;

    printf("Enter your employee ID (up to 9 characters): ");
    scanf("%9s", employeeID);
    printf("Enter hours worked: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly pay: ");
    scanf("%f", &hourlyPay);

    // Calc gross pay
    grossPay = hoursWorked * hourlyPay;

    // Calc FICA
    float ficaRate = 0.0765;
    fica = grossPay * ficaRate;

    // Calc net pay
    netPay = grossPay - fica;

    // Display the results aligned to the right with two decimal places
    printf("%9s  Empl ID\n", employeeID);
    printf("%9.2f  Gross\n", grossPay);
    printf("%9.2f  Fica\n", fica);
    printf("%9.2f  Net Pay\n", netPay);
}

void timeToMinutes(void) { 
int minutesIn;
int hoursOut = 0;
int minutesOut = 0;

printf("Enter any amount of time in minutes: \n");
scanf("%d", &minutesIn); // Input

while (minutesIn > 0) { // Loop if minutesIn is greater than 0
    if (minutesIn >= HOUR_CONSTANT) {
        minutesIn -= HOUR_CONSTANT; // Subtract 60 from minutesIn
        hoursOut += 1; // Add 1 to hoursOut
    } else {
        break;
    }
    }
printf("You entered %d hours and %d minutes.\n", hoursOut, minutesIn);//Result

}

void displayValue(void) {
int numIn; 

printf("Enter any integer: \n");
scanf("%d", &numIn);

int numLimit = numIn +10;

while (numIn <= numLimit) {
    printf("%d \n", numIn);
    numIn += 1;                 /*similar program*/
    }


}

void addEmUp(void) {

 int count, sum; /* declaration statement */
 count = 0; /* assignment statement */
 sum = 0; /* ditto */
 int numberIn;

 printf("Enter a number: \n");
 scanf("%d", &numberIn);

 while (count++ < numberIn) { /* while */
    sum = sum + count; } /* statement */ 
 printf("sum = %d\n", sum);/* function statement */

}

void nestedLoop(void) { 

    const int ROWS = 6;
    int row, col;

    for (row = 0; row < ROWS; row++) {
        for (col = 0; col <= row; col++) {
            printf("%c", 'F' - col);
        }
        printf("\n");
    }
}


void backwards(void) {

    char word[50];
    int length, i;

    printf("Enter a word: ");
    scanf("%s", word);

    length = strlen(word);

    printf("Word in reverse: ");

    i = length - 1;
    while (i >= 0) {
        printf("%c", word[i]);
        i--;
    }

    printf("\n"); //Similar to first
}


void scoresIn(void) {

    int index, score[SIZE0];
    int sum = 0;
    float average;

    printf("Enter test scores for %d students:\n", SIZE0);

    for (index = 0; index < SIZE0; index++) {
        printf("Enter score for student %d: ", index + 1);
        scanf("%d", &score[index]);
    }

    printf("The scores entered are as follows:\n");

    for (index = 0; index < SIZE0; index++) {
        printf("Student %d: %d\n", index + 1, score[index]);
    }

    for (index = 0; index < SIZE0; index++) {
        sum += score[index];
    }

    average = (float)sum / SIZE0;

    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);
}

void paycheck(void)
{
    float hours, taxes, grosspay, netpay;

    printf("Please enter hours worked: ");
    scanf("%f", &hours);

    if (hours > 40)
        grosspay = (PAYRATE * 40) + ((hours - 40) * PAYRATE * 1.5);
    else
        grosspay = PAYRATE * hours;

    if (grosspay <= 300)
        taxes = grosspay * RATE1;
    else if (grosspay <= 450)
        taxes = BASE1 + ((grosspay - CUTOFF1) * RATE2);
    else
        taxes = BASE2 + ((grosspay - CUTOFF2) * RATE3);

    netpay = grosspay - taxes;

    printf("Gross Pay: $%.2f\nTaxes: $%.2f\nNet Pay: $%.2f\n", grosspay, taxes, netpay);

}

void paymenu(void) {

    float hours, taxes, grosspay, netpay, payrate;
    int choice;
    //priming read:
    printf("Enter the number corresponding to the payrate: \n");
    printf("1)  $8.75/hr\t\t2)  $9.33/hr\n");
    printf("3) $10.00/hr\t\t4) $11.20/hr\n");
    printf("5) quit\n");
    scanf("%d", &choice);
    //pressing '5' is the only way out. Loop extends to last printf()
    while (choice != 5) {
            //use switch to check value of choice and set payrate
        switch (choice) {
        case 1:
            payrate = 8.75;
            break;
        case 2:
            payrate = 9.33;
            break;
        case 3:
            payrate = 10.00;
            break;
        case 4:
            payrate = 11.20;
            break;
        default:
            printf("Please enter only numbers 1-5\n");
            break;
        }

        //so if the user selected something other than 1-4 (or 5 to exit)
        // no calculations will be completed. The menu will be redisplayed below
       if (choice >= 1 && choice <= 4) {
           // get hours worked ONLY if choice 1-4
            printf("Please enter hours worked: ");
            scanf("%f", &hours);

            if (hours > 40)
                grosspay = (payrate * 40) + ((hours - 40) * payrate * 1.5);
            else
                grosspay = payrate * hours;

            if (grosspay <= 300)
                taxes = grosspay * RATE1;
            else if (grosspay <= 450)
                taxes = BASE1 + ((grosspay - CUTOFF1) * RATE2);
            else
                taxes = BASE2 + ((grosspay - CUTOFF2) * RATE3);

            netpay = grosspay - taxes;

            printf("Gross Pay: $%.2f\nTaxes: $%.2f\nNet Pay: $%.2f\n", grosspay, taxes, netpay);
        }
        // Still inside the while loop. Let the user select choice...
        printf("Enter the number corresponding to the payrate: \n");
        printf("1)  $8.75/hr\t\t2)  $9.33/hr\n");
        printf("3) $10.00/hr\t\t4) $11.20/hr\n");
        printf("5) quit\n");
        scanf("%d", &choice);

    }
    printf("Thank you for using the pay check calculator!\n");
}

void CharacterCounter(void) {
    int ch;
    int alphaNumericCount = 0;
    int punctuationCount = 0;
    int whiteSpaceCount = 0;
    int totalCount = 0;

    printf("Enter text and press Ctrl+D (EOF) to end input:\n");

    while ((ch = getchar()) != EOF) {
        totalCount++;
        if (isalnum(ch)) {
            alphaNumericCount++;
        } else if (isspace(ch)) {
            whiteSpaceCount++;
        } else if (ispunct(ch)) {
            punctuationCount++;
        }
    }

    printf("AlphaNumeric: %d, Punctuation: %d, WhiteSpace: %d, All: %d\n", alphaNumericCount, punctuationCount, whiteSpaceCount, totalCount);
}

void min_driver(void)
{
    double x, y;

	printf("Enter two numbers (q to quit): ");
	while (scanf("%lf %lf", &x, &y) == 2)
	{
		printf("The smaller number is %f.\n", minimum(x,y));
		printf("Next two values (q to quit): ");
	}
	printf("Bye!\n");
    while(getchar() != '\n');
}

double minimum(double a, double b)
{
	return a < b ? a : b;

}
/* Possible alternative implementation
double min(double a, double b)
{
	if (a < b)
		return a;
	else
		return b;
}
*/

void chline_driver(void)
{
	char ch;
	int col1, col2;

	printf("Enter a character (# to quit): ");
	while ( (ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		printf("Enter starting and ending column: ");
		if (scanf("%d %d", &col1, &col2) != 2)
			break;
		chline(ch, col1, col2);
		printf("\nEnter next character (# to quit): ");
	}
	printf("Bye!\n");
	while(getchar() != '\n');
}

void chline(char ch, int i, int j)
{
	int col;
	if (i < 1 || j < i)
		return;           // want j >= i
	for (col = 1; col < i; col++)
		putchar(' ');
	for (col = i; col <= j; col++)
		putchar(ch);
	return;
}

void sort_driver(void)
{
    double x1, x2, x3;
    printf("Enter three numbers (q to quit): ");
    while (scanf("%lf %lf %lf", &x1, &x2, &x3) == 3)
    {
        sort(&x1, &x2, &x3);
        printf("Here are the values in increasing order: %g %g %g\n",
               x1, x2, x3);
        printf("Enter next three numbers (q to quit): ");
    }
    printf("Done.\n");
    while (getchar() != '\n');
    printf("Bye!\n");
}

void sort(double * p1, double *p2, double *p3)
{
    double temp;
// put largest value into p3
    if (*p2 < *p1)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    if (*p3 < *p2)
    {
        temp = *p2;
        *p2 = *p3;
        *p3 = temp;
    }
// at this point *p3 is largest value

    if (*p2 < *p1)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
// at this point *p2 is the next largest value, i.e. mid-value
}

void grades(void)
{
    const float grades[TEST][SCORES] =
    {
        {65,75,85,95,74,74,98,75,85,65},
        {88,65,75,78,99,88,87,76,98,100},
        {78,65,78,82,93,81,99,97,82,65},
        {90,85,88,96,100,88,100,96,95,92}
    };
    int test, scores;
    float test_total, student_total;

    printf("TEST         AVERAGE\n");
    for (test = 0; test < TEST; test++)
    {
        for (scores = 0, test_total = 0.0; scores < SCORES; scores++)
            test_total += grades[test][scores];
        printf("%4d %15.1f\n", (test + 1), (test_total / SCORES));
    }
    printf("\nSTUDENT AVERAGES:\n");
    printf(" STU1 STU2 STU3 STU4 STU5 STU6 STU7 STU8 STU9 STU10\n");
    for (scores = 0; scores < SCORES; scores++)
    {
        for (test = 0, student_total = 0.0; test < TEST; test++)
            student_total += grades[test][scores];
        printf("% 4.1f", (student_total / TEST));
    }
    printf("\n");
}

void sum_arr2(void)
{
    int marbles[SIZE1] = {20,10,5,39,4,16,19,26,31,20};
    long answer, min_answer, max_answer;

    answer = sump(marbles, marbles + SIZE1);
    min_answer = min_min(marbles, marbles + SIZE1);
    max_answer = max_max(marbles, SIZE1);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
    printf("The largest number is %ld.\n", max_answer);
    printf("The smallest number is %ld.\n", min_answer);


}

int sump(int * start, int * end)
{
    int total = 0;

    while (start < end)
    {
        total += *start;
        start++;
    }
    return total;

}

int max_max(int ar[], int n)
{
    int i = 0, max = ar[0];

    while (i < n) {
        if (max < ar[i])
            max = ar[i];
        i++;
    }

    return max;
}

int min_min(int * start, int * end)
{
    int min;

    for (min = *start; start < end; start++)  {
        if (min > *start)
            min = *start;
    }
    return min;
}

void exer1(void)
{
    char input[LEN];    // char input is declared and can have a total of 10 characters (including \0)
    char *check;        

    printf("Please enter 9 characters. ");     

    check = getnchar(input, LEN - 1); 
                                      
    if (check == NULL)           
	puts("Input failed...");   


    else            // If check is not NULL,
	puts(input);    // the string array within input is sent to stdout
                    // This would be the 9 characters typed by the user
    puts("Done!\n");

}

char * getnchar(char * str, int n)
{
    int i;  // integer i is declared but not initialized.
    int ch; // integer ch is declared but not initialized.

    for (i = 0; i < n; i++)   
    {
        ch = getchar();        // reads a character returned as an int and assigns to ch which is declared as an int
        if (ch != EOF)         // as long as ch does not equal EOF, EOF is returned from getchar() upon an error
                str[i] = ch;       
        else                  
                break;             
                                
    }

    if (ch == EOF)             // if ch is equal to EOF,
        return NULL;           // then a NULL is returned indicating that nothing was stored into the array
    else                // if ch is not equal to EOF, then
    {
        str[i] = '\0';  // The null character is stored in str[i]. The value of i is 9 upon exiting the loop
        return str;     // str is actually a pointer to the character array originally passed.
    }

}

void retailSales(void)
{
    int month;              
    float sales[MONTHS];    
    float sale;             
                            

    const char *months[MONTHS] = {

        "Jan", "Feb", "Mar", "Apr",
        "May", "Jun", "Jul", "Aug",
        "Sep", "Oct", "Nov", "Dec"

    };
    const char **ptr = months;      // a ptr is declared and assigned the beginning address of months

    for (month = 0; month < MONTHS; month++) 
        
    {
        printf("Please enter sales for %s: ", *(ptr++));  
                                // to loop through months array using pointers
        scanf("%f", &sale);    
        sales[month] = sale;    
    }

    printf("Month:      Sales:\n");  // printf statement to create header

    for (month = 0, ptr = months; month < MONTHS; month++)
    {
        printf("%-11s $%8.2f\n", *(ptr++), sales[month]); // print out the values of the two arrays
    }
}

void stsrt(char *strings[], int num); 
void mod_str(char *str);
void format(char *name);
char *s_gets(char *st, int n);

void sort_str(void)
{
    char first_names[LIM][SIZE2];  
    char last_names[LIM][LAST_SIZE];  
    char full_names[LIM][SIZE2 + LAST_SIZE + 2]; 
    char *ptstr[LIM];             
    int ct = 0;                
    int k;                        

    printf("Input up to %d student names, and a class roll sheet will be created in abc order.\n", LIM);
    printf("Press Enter after entering the first name, then put the last name and press Enter again. Press Enter with no input to stop.\n");

    while (ct < LIM && s_gets(first_names[ct], SIZE2) != NULL && first_names[ct][0] != '\0')
    {
        mod_str(first_names[ct]);
        s_gets(last_names[ct], LAST_SIZE); 
        mod_str(last_names[ct]); 

        sprintf(full_names[ct], "%s, %s", last_names[ct], first_names[ct]); 

        ptstr[ct] = full_names[ct]; 
        ct++;
    }

    stsrt(ptstr, ct); 

    printf("\nHere is the sorted class roll sheet:\n");

    for (k = 0; k < ct; k++)
        format(ptstr[k]); 
}

/* string-pointer-sorting function */
void stsrt(char *strings[], int num)
{
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

void mod_str(char *str)
{
    while (*str)
    {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void format(char *name)
{
    while (*name)
    {
        putchar(*name);
        if (*name == ',')
            printf(" ");
        name++;
    }
    putchar('\n');
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);

    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

void guessing_game(void)
{
    static int computer = 0, human = 0;  // maintain scores 
    int randomNumber, guess;
    int guessCounter = 0;
    srand((unsigned int) time(0));   // time() in the time.h library 
                        
    randomNumber = rand() % 20 + 1;  // rand() generates an integer. Use the modulus operator + 1 to generate numbers 1-20.

    printf("Welcome to the guessing game!\n"
            "I am thinking of a number between 1 and 20.\n"
            "You get %d guesses.\n", GUESSES);

    while (guessCounter < GUESSES && guess != randomNumber)
    {
        printf("Enter your guess.\n");

        while ((1 != scanf("%d", &guess)) || guess < 1 || guess > 20) {
            printf("Enter a number between 1 and 20 inclusive...\n");
            while (getchar() != '\n');  // clear the buffer
        }
        if (guess > randomNumber)
            printf("Lower.\n");
        else if (guess < randomNumber)
            printf("Higher.\n");
        else
        {
           
        }
        guessCounter++;
    }

    if (guess != randomNumber)
    {
        printf("\nYou ran out of guesses! Computer wins!\n"
                "The number was: %d\n", randomNumber);
        computer++;
    }
    else
    {
        printf("\nCorrect! You win!\n"
                "The number was: %d\n", randomNumber);
        human++;
    }

    printf("\nScore\n"
            "Human: %d\n"
            "Computer: %d\n", human, computer);
}


//End Of Fall Semester!
