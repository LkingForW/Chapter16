# Chapter 16

### 16.11 
(Modifying Class GradeBook) Modify class GradeBook as Follows:
 a) Include a second string data member that represents the course instructor's name.
 b) Provide a set function to change the instructor's name and a get function to retrive it
 c) Modify the constructor to specify course name and instructor name parameters
 d) Modify function displayMessage to output the welcome message and course name, then the string "This course is presented by: " followed by the instructors name.

### 16.12 
(Account Class) Create an Account that a bank might use to represent customer's bank accounts. Include a data member of type int to represent the account balance. Provide a constructor that receives an initial balance and uses it to initialize the dta member. The constructor should validate the initial balancee to ensure that it's greater than or equal to 0. If not, set the balance to 0 and display an error message indicating that the initial balance was invalid. Provide three member functions. Member function credit should add an amount to the current balance. Provide three member functions. Member function credit should add an amount to the current balance. Member function debit should add an amount to the current balance. Member function debit should withdraw money from the Account and ensure that the debit amount does not exceed the Account balance. If it does, the balance should be left unchanged and the function should pront a message indicating "Debit amount account balance." Member function getBalance should return the current balance. Create program that creates two Account objects and tests the member function of class Account. 

### 16.13
(Invoice Class) Create a class called Invoice that a hardware store might use represent an invoice for an item sold at the store. An Invoice should include four data members a part num ber ( string), a part description ( type string), a quantity of the item being purchased (type int) and a price per item (type int) . Your class should have a constructor that initializes the four data members. Provide a set and a get function for each data member. In addition, provide a member function named getInvoiceAmount that calculates the invoice amount ( multiplies the quantity by the price per item), then returns the amount as an int value. If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should be set to 0. Write a test program that demonstrates class Invoice's capabilities.

### 16.14
(Employee Class) Create a class called Employee that includes three pieces of information as data members a first name (type string), a last name (type string) and a monthly salary (type int). Your class should have a constructor that initializes the three data members. Provide a set and a get function for each data member. If the monthly salary is not positive, set it to 0.Write a test program that demonstrates class Employee’s capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10 percent raise and display each Employee’s yearly salary again.

## NOTE:
C How to Program Exercise Files ( Seventh Edition) by Paul Deitel & Harvey Deitel Keep in mind that these are by no means the best solutions to these problems. I simply started this to help other developers and to teach myself.
