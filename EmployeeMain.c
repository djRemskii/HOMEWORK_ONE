//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 
//gcc employeeMain.c employeeTable.c employeeTwo.c 
#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void){ 
    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 

    //defined in employeeTable.c 
    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;      

    PtrToEmployee matchPtr;  //Declaration 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    //Example not found 
    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID 1045 is NOT found in the record\n"); 



    //Example found 
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 
    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 




    //Example Phone Number Found
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "909-555-2134"); 
    if (matchPtr != NULL) 
        printf("Employee phone number 909-555-2134 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee phone Number 909-555-2134 is NOT found in the record\n"); 


    //Example Phone Number Not Found
    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "123-456-7890"); 
    if (matchPtr != NULL) 
        printf("Employee phone number 123-456-7890 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee phone Number 123-456-7890 is NOT found in the record\n"); 



    //Example Salary Found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80); 
    if (matchPtr != NULL) 
        printf("Employee with salary of 7.80 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee with salary of 7.80 is NOT found in the record\n"); 


    //Example Salary Not Found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 9.99); 
    if (matchPtr != NULL) 
        printf("Employee with salary of 9.99 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee with salary of 9.99 is NOT found in the record\n"); 

    return EXIT_SUCCESS;
}