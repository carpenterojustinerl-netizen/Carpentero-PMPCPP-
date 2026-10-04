/*#include <iostream>           //PRACTICE PROB.9
using namespace std;

int main() {
    
    int num1, num2, num3, first, last;

    cout << "Input numbers: ";
    cin >>  num1 >> num2 >> num3;

    if ( num2 < num1 && num2 < num3 )
        first = num2;
    else if ( num1 < num3 && num3 < num2 )
        first = num3;
    else
        first = num1;

    if ( num2 > num1 && num2 > num3 )
        last = num2;
    else if ( num3 > num1 && num3 > num2 )
        last = num3;
    else
        last = num1;

    cout << first << " is the first number" << endl;
    cout << last << " is the last number" << endl;

    return 0;
}*/

/*#include <iostream>           //EXAMPLE char as int
using namespace std;

int main () {

    char a = 10, b = 5;

    int total = a + b;
    cout << total;

    return 0;
}*/

/*#include <iostream>           //EXAMLE Auto
using namespace std;

int main () {

    auto a = 10, b = 5;

    auto total = a + b;
    cout << total;

    return 0;
}*/

/*#include <iostream>           //Practice Hello C++
using namespace std;

int main () {

    cout << "Hello C++";

    return 0;
}*/

/*#include <iostream>           //Practice First, Middle, Last
using namespace std;

int main () {

int num1, num2, num3, first, middle, last;

cout << "Enter 3 number:";
cin >> num1 >> num2 >> num3;

if (num2 < num1 && num2 < num3)
    first = num2;
else if (num3 < num1 && num3 < num2)
    first = num3;
else
    first = num1;

if (num2 > num1 && num2 > num3)
    last = num2;
else if (num3 > num1 && num3 > num2)
    last = num3;
else
    last = num1;

if (num1 == first && num2 == last)
    middle = num3;
else if (num1 == first && num3 == last)
    middle = num2;
else if (num2 == first && num3 == last)
    middle = num1;

if (num1 == last && num2 == first)
    middle = num3;
else if (num1 == last && num3 == first)
    middle = num2;
else if (num2 == last && num3 == first)
    middle = num1;

cout << first << " is the first number" << endl;
cout << middle << " is the middle number" << endl;
cout << last << " is the last number" << endl;

    return 0;
}*/

/*#include <iostream            //Calculator LITE
using namespace std;

int main () {

    int num1, num2;
    int action;
    int result;

    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Operator 1 - Addition, 2 - Subtraction, 3 - Multiplication, 4 - Division: ";
    cin >> action;
    cout << "Enter Second Number";
    cin >> num2;

    switch (action) 
    {
        case 1 : if (action == 1)
            result = num1 + num2;
            break;
        case 2 : if (action == 2)
            result = num1 - num2;
            break;
        case 3 : if (action == 3)
            result = num1 * num2;
            break;
        case 4 : if (action == 4)
            result = num1 / num2;
            break;
        default : cout << "Invalid Opearator";
    }

    cout << "Result is: " << result;

    return 0;
}*/

/*#include <iostream>           //incomplete quadratic equation
#include <cmath>
using namespace std;

int main () {

    double a, b, c;
    double xn, xp;

    cout << "Enter a: ";
    cin >> a;

    if ( a == 0 ) {
        cout << "Not a quadratic formula";
        return 0;
    }

    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    xp = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    xn = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Xp = " << xp << "\n";
    cout << "Xn = " << xn;

    return 0;
}*/

/*#include <iostream>           //ano ito
using namespace std;

int main () {

    int mahal;

    cout << "Enter if mahal 1 - oo 2 - hindi: ";
    cin >> mahal;

    if (mahal == 1) 
        cout << "Yay mahal din kita";
    else if (mahal == 2)
        cout << "Ayay sayang tayo";
    
    return 0;
}*/

/*#include <iostream>           //GPA student
using namespace std;

int main () {

    double gpa;
    int income;

    cout << "Enter GPA: ";
    cin >> gpa;

    if (gpa >= 3.5) {
        cout << "Scholarship Accepted";
        return 0;
    }
    else {
        cout << "Enter Income: ";
        cin >> income;
    }

    if (gpa >= 3.0 && income < 40000)
        cout << "Scholarship Accepted";
    else {
        cout << "Not elgible for Scholarship";
    }
    

    return 0;
}*/

/*#include <iostream>           //Grade Numbering relationals
using namespace std;

int main () {

    int grade;

    cout << "Enter Grade: ";
    cin >> grade;

        if (grade >= 90 && grade <=100)
            cout << "Excellent";

            else if (grade >=80 && grade <= 89)
                cout << "Very Good";

            else if (grade >= 75 && grade <= 79)
                cout << "Good";

        else
            cout << "Failed";

    return 0;
}*/

/*#include <iostream>           //leap year
using namespace std;

int main () {

    int year;

    cout << "Enter Year: ";
    cin >> year;

    if ((year % 400 == 0) || year % 4 == 0 && year % 100 != 0)
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";
    
    return 0;
}*/

/*#include <iostream>           //Charge electricity bill
using namespace std;

int main (){

    int units, charge;

    cout << "Enter units bill: ";
    cin >> units;

    if (units > 0 && units <= 100) 
        charge = units * 5;
    else if (units >= 101 && units <= 200)
        charge = units * 7;
    else if (units > 200)
        charge = units * 10;
    
    cout << charge;

    return 0;
}*/

/*#include <iostream>           //Switch week
using namespace std;

int main () {

    int day;

    cout << "Enter the day: ";
    cin >> day;

    switch (day)
    {
        case 1: cout << "Sunday";
            break;
        case 2: cout << "Monday";
            break;
        case 3: cout << "Tuesday";
            break;
        case 4: cout << "Wednesday";
            break;
        case 5: cout << "Thursday";
            break;
        case 6: cout << "Friday";
            break;
        case 7: cout << "Saturday";
        default: cout << "Invalid Number";
    }

    return 0;
}*/

/*#include <iostream>           //calculator lite v2
using namespace std;

int main () {

    double num1, num2, result;
    int math;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    cout << "Enter Operation: ";
    cin >> math;

    switch (math)
    {
        case 1: result = num1 + num2;
                break;
        case 2: result = num1 - num2;
                break;
        case 3: result = num1 * num2;
                break;
        case 4: result = num1 / num2;
                break;
        default: cout << "Invalid Operation";
    }

    cout << result;

    return 0;
}*/

/*#include <iostream>           //switch month
using namespace std;

int main () {

    int month;

    cout << "Enter the Month: ";
    cin >> month;

    switch (month)
    {
        case 1: cout << "January";
            break;
        case 2: cout << "February";
            break;
        case 3: cout << "March";
            break;
        case 4: cout << "April";
            break;
        case 5: cout << "May";
            break;
        case 6: cout << "June";
            break;
        case 7: cout << "July";
            break;
        case 8: cout << "August";
            break;
        case 9: cout << "September";
            break;
        case 10: cout << "October";
            break;
        case 11: cout << "November";
            break;
        case 12: cout << "December";
            break;
        default: cout << "Invalid Number";
    }

    return 0;
}*/

/*#include <iostream>           //Grade rating using char
using namespace std;

int main () {

    char grade;

    cout << "Enter Grade Rating: ";
    cin >> grade;

    switch (grade)
    {
        case 'A' :
        case 'a' : cout << "Excellent";
                    break;
        case 'B' :
        case 'b' : cout << "Good";
                    break;
        case 'C' :
        case 'c' : cout << "Average";
                    break;
        case 'F' :
        case 'f' : cout << "Failed";
                    break;
        default : cout << "Invalid Grade Rating";
    }

    return 0;
}*/

/*#include <iostream>           //Menu
using namespace std;

int main (){

    int menu;

    cout << "Selection Menu: \n1 = Burger \n2 = Pizza \n3 = Pasta \n4 = Sandwich\n";
    cin >> menu;

    switch (menu)
    {
        case 1 : cout << "Your order is a Burger";
            break;
        case 2 : cout << "Your order is a Pizza";
            break;
        case 3 : cout << "Your order is a Pasta";
            break;
        case 4 : cout << "Your order is a Sandwich";
            break;
        default : cout << "Your order is not on the Menu, SORRY!";
    }

    return 0;
}*/

/*#include <iostream>           //Even or Odd if, else
using namespace std;

int main () {

    int number;

    cout << "Enter number: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "The number is Even";
    
    else 
        cout << "The number is Odd";

    return 0;
}*/

/*#include <iostream>           //Even or Odd if, else if
using namespace std;

int main () {

    int number;

    cout << "Enter number: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "The number is Even";
    else if (number % 2 == 1)
        cout << "The number is Odd";

    return 0;
}*/

/*#include <iostream>           //Last, first, middle, I, string
#include <string>
using namespace std;

int main () {

    string lastname = "";
    string firstname = "";
    string middlename = "";
    string MIname = "";

    cout << "Enter name \nLast name: ";
    cin >> lastname;
    cout << "First name: ";
    cin >> firstname;
    cout << "Middle name: ";
    cin >> middlename;
    cout << "Initial: ";
    cin >> MIname;
    
    cout << "\nWelcome " << lastname << ", " << firstname << " " << middlename << " " << MIname << " it is nice to meet you";

    return 0;
}*/

/*#include <iostream>           //Electricity switch if, else if
using namespace std;

int main () {

    char customerType, seniorCitizen;
    int kWh, paymentMethod;
    double electricityRate, energyCharge, consumptionDiscount, bill, fee, total;
    double discountRate = 0.0;
    double seniorDiscount = 0.0, seniorDiscountTotal = 0.0;
    double surcharge = 0.0;
    double tax = 0.12;
    double paymentFee = 0.0;

    cout << "Customer Type:\nR - Residential\nC - Commerecial\nI - Idustrial\nInput: ";
    cin  >> customerType;
    cout << "Enter Energy Consumption\nInput: ";
    cin  >> kWh;
    cout << "Payment Method:\n1 - Cash\n2 - Online\n3 - Credit\nInput: ";
    cin  >> paymentMethod;

    if (customerType == 'R') {
        cout << "Senior Citizen (Y/N)\nInput: ";
        cin >> seniorCitizen;    
    }
    if (seniorCitizen == 'Y' || seniorCitizen == 'y') {
        seniorDiscount = 0.05;
    }

    switch (customerType) {
        
        case 'R' :
        case 'r' :  electricityRate = 12.50;
                    surcharge = 0.0;
                break;
        case 'C' :
        case 'c' :  electricityRate = 15.75;
                    surcharge = 0.10;
                break;
        case 'I' :
        case 'i' :   electricityRate = 18.25;
                    surcharge = 0.15;
                break;
    }

    if (kWh <= 100)
        discountRate = 0.0;
    else if (kWh > 100 && kWh <= 300)
        discountRate = 0.05;
    else if (kWh >= 301 && kWh <= 500)
        discountRate = 0.08;
    else
        discountRate = 0.12;

    if (paymentMethod == 1)
        paymentFee = 0;
    else if (paymentMethod == 2)
        paymentFee = 0.015;
    else if (paymentMethod == 3)
        paymentFee = 0.03;
    else {
        cout << "Invalid Payment Option";
        return 0;
    }
    energyCharge = kWh * electricityRate;
    consumptionDiscount = energyCharge * discountRate;
    surcharge = (energyCharge - consumptionDiscount) * surcharge;
    bill = energyCharge - consumptionDiscount + surcharge;

    if (customerType == 'R' && (seniorCitizen == 'Y' || seniorCitizen == 'y'))
    seniorDiscountTotal = bill * seniorDiscount;
    bill = bill - seniorDiscountTotal;
    
    tax = bill * tax;
    fee = (bill + tax) * paymentFee;
    total = bill + tax + fee;

    cout << "Consumption : " << kWh << " kWh\n";
    cout << "Base Rate : P " << electricityRate << endl;
    cout << "Energy Charge : P " << energyCharge << endl;
    cout << "Consumption Discount : P " << consumptionDiscount << endl;
    cout << "Surcharge : P " << surcharge << endl;
    cout << "Senior Discount : P " << seniorDiscountTotal << endl;
    cout << "Tax : P " << tax << endl;
    cout << "Payment Fee : P " << fee << endl;
    cout << "TOTAL AMOUNT DUE : P " << total << endl;

    return 0;
}*/

/*#include <iostream>           //Looping for
using namespace std;

int main () {

    int i;

    //1
    for (i = 1; i <= 100; i = i + 1)
        cout << i << endl;

    //2
    for (i = 100; i >= 1; i = i - 1)
        cout << i << endl;

    //3
    for (i = 7; i <= 77; i = i + 7)
        cout << i << endl

    //4
    for (i = 20; i >= 2; i = i - 2)
        cout << i << endl;

    //5
    for (i = 2; i <= 20; i = i + 3)
        cout << i << endl

    return 0;
}*/

/*#include <iostream>           //Looping Jr 1,C for
using namespace std;

int main()
{
    //1.C
    int num1, num2;

    cout << 1 << 0;

    for (num1 = 1, num2 = 9; num1 <= 4; num1++, num2--)
    {
        cout << num1 << num2;
    }

    return 0;
}*/

/*#include <iostream>           //loop without something in for
using namespace std;

int main () {

int a = 1;
int b = 15;

    for (;;a = a + 1)
    if (a <= b)
        cout << a;
    else
        break;

return 0;
}*/

/*#include <iostream>           //For
using namespace std;

int main () {

int a = 1;
int b = 5;

    for (;;)
    if (a <= b) {
        cout << a;
        a = a + 1;
    }
    else
        break;

return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout << "Input value for a : ";
    cin >> a;
    cout << "Input value for b : ";
    cin >> b;
    
    cout << "EVEN           ODD\n";
    for ( ; ; )
    {
        if (a % 2 == 0)
        {
            cout << a;
        }
        else
        {
            cout << "\t\t"<<a;
            cout << "\n";
        }
        if (a >= b)
            break;
        else
            a = a + 1;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {

    int num = 0;
    int row = 4;

    for (int i = row; i >= 1; i--) {      
        for (int j = 0; j < i; j++) {       
            cout << num;
            num = num + 1;
        }
        cout << endl;                        
    }

    return 0;
}*/

/*#include <iostream>           //Do-while, While
using namespace std;

int main() {

    int i = 0;
    do {
        i = i + 2;
        cout << i;
    } 
    while (i < 10);

    int x = 1;
    while (x >= 5) {
    cout << i;
    x = x - 1;
    }

    return 0;
}

#include <iostream>           
using namespace std;

int main() {

    
    {
    int x = 0;
        do 
        {
            x = x + 2;
            cout << x;
        }
        while (x <= 20);
    }
    return 0;
}*/

/*#include <iostream>           //Sentinal Value & Nested loop
using namespace std;

int main() 
{
    int sum = 0;
    int num = 0;
    do
    {
        sum = sum + num;
        cout <<  "Input a number  : ";
        cin >> num;
        
        
    } while (num != -1);
    cout << "\nSum  = " << sum;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    
    int row, n;
    for (row = 1; row <= 5; row++) {       
        for (n = 1; n <= row; n++) {     
            cout << n;
        }
        cout << endl;
    }
    return 0;
}*/

/*#include <iostream>           //Converting do while, while both nested
using namespace std;

int main() {
    
    int row = 1;
    do
    {
    int col = 1;
        do
        {
            cout << col;
            col = col + 1;
        } while (col <= row);
        row = row + 1;
        cout << endl;
    } while (row <= 5);

cout << "\n";
    
    int r = 1;
    while (r <= 5)
    {
        int c = 1;
        while (c <= r)
        {
            cout << c;
            c = c + 1;
        }
    r = r + 1;
    cout << endl;
    }

    return 0;
}*/

/*#include <iostream>           //for nested
using namespace std;

int main () {

    int n, row;
    for (row = 1; row <= 12; row++) {
        for (n = 1; n <= 12; n++) {
            cout << n * row << "\t";
        }
    cout << endl;
    }

    return 0;
}*/

/*#include <iostream>           //loops 2 students 3 quiz score and gets the average score
using namespace std;

int main()
{
    int noofstudents = 2;
    int noofQuiz = 3;
    int ctrS, ctrQ, grade, sum=0;
    float average;
    
    for (ctrS = 1; ctrS<=noofstudents; ctrS = ctrS + 1)//5 students
    {
        sum=0;
        cout << "\nStudent " << ctrS << "\n";
        for (ctrQ = 1; ctrQ <= noofQuiz; ctrQ = ctrQ + 1)//3 quizzes
        {
            cout << "Subject " << ctrQ << " : ";
            cin >> grade;
            sum = sum + grade;
        }
        average = sum/3;
        cout << "Average   = " << average;
        if (average < 75)
            cout << "\nStatus  = Failed";
        else
            cout << "\nStatus  = Passed";
    }

    return 0;
}*/

/*#include <iostream>           //JR daily sales (basta same sa taas)
#include <iomanip>
using namespace std;

int main()
{
    int noofdays = 5;
    int noofProduct = 4;
    int ctrS, ctrQ, Product, sum=0;
    int totalsales = 0;
    int count1000 = 0;
    int dailycount1000 = 0;
    float average_Daily_Sales;

    cout << fixed << setprecision(2);
    cout << "========== DAILY SALES ANALYSIS ==========";
    for (ctrS = 1; ctrS<=noofdays; ctrS = ctrS + 1)
    {
        dailycount1000 = 0;   
        sum=0;
        cout << "\nDays " << ctrS << "\n";
        for (ctrQ = 1; ctrQ <= noofProduct; ctrQ = ctrQ + 1)
        {
            cout << "Enter sales for Product " << ctrQ << " : ";
            cin >> Product;
            sum = sum + Product;
            totalsales = totalsales + Product;
            average_Daily_Sales = totalsales /noofdays;

            if (Product >= 1000)
            {
            dailycount1000++;
            count1000++;    
            }
        }
        
        cout << "Total Sales   = " << sum;
        cout << "\nProducts with Sales >= 1000: " << dailycount1000;
        
    }
    cout << "\n========== SUMMARY ==========" << endl;
    cout << "Total Sales:" << totalsales << endl;
    cout << "Products with Sales >= 1000: " << count1000 << endl;
    cout << "Average Daily Sales:" << average_Daily_Sales << endl;

    return 0;
}*/

#include <iostream>           
using namespace std;

int main () {

    float grade[6];
    int counter;
    float sum = 0.0;
    float average = 0.0;

    for (counter = 0; counter < 6; counter++)
    {
        cout << "Enter grade " << counter << " : ";
        cin >> grade[counter];
        sum = sum + grade[counter];
    }

    for(counter = 0; counter<6 ; counter = counter+1)
    {
        cout << "\nscore for quiz " << counter << " : " << grade[counter];
    }

    average = sum / 6;
    cout << "\nAverage Grade is " << average;
    return 0;
}