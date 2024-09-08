/* Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables

DeptNo      Dept Name       DsgnCode    Designation

10          Marketing       'M'         Manager
20          Management      'S'         Supervisor
30          Sales           's'         Security Officer
40          Designing       'C'         Clerk

Example:

If input given is
Employee Id     : 101
Dept No         : 30
Designation Code: M

Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".
*/


#include <stdio.h>

typedef enum
{
    Marketing = 10,
    Management = 20,
    Sales = 30,
    Designing = 40

} Depname;

typedef enum
{
    Manager = 'M',
    Supervisor = 'S',
    Security_Officer = 's',
    Clerk = 'C'
} Designation;

const char* getDeptName(Depname dept) {
    switch (dept) {
        case Marketing:
            return "Marketing";
        case Management:
            return "Management";
        case Sales:
            return "Sales";
        case Designing:
            return "Designing";
        default:
            return "Invalid Department";  
    }
}

const char* getDesneame(Designation des) {
    switch (des) {
        case Manager:
            return "Manager";
        case Supervisor:
            return "Supervisor";
        case Security_Officer:
            return "Security Officer";
        case Clerk:
            return "Clerk";
        default:
            return "Invalid Designation";  
    }
}
int main()
{
    int a,b,c;


    printf("Enter Employee Id: ");
    scanf("%d", &a);

    printf("Enter Department No: ");
    scanf("%d", &b);

    printf("Enter Designation Code (M, S, s, or C): ");
    scanf(" %lc", &c);  

        Depname dept = (Depname)b;  
    Designation des = (Designation)c;

    printf("Employee with employee id %d is working in %s department as %s.\n",
           a, getDeptName(dept), getDesneame(des));

    return 0;
}

