import java.util.Scanner;
class Account {
 // Data members
 public int accNum;
 public String name;
 public long phoneNum;
 public float balAmt;
 // Method to get input from the user
 public void getInput() {
 Scanner scanner = new Scanner(System.in);
 System.out.print("Enter Account Number: ");
 accNum = scanner.nextInt();
 scanner.nextLine(); // Consume newlin
 System.out.print("Enter Name: ");
 name = scanner.nextLine();
 System.out.print("Enter Phone Number: ");
 phoneNum = scanner.nextLong();
 System.out.print("Enter Initial Balance: ");
 balAmt = scanner.nextFloat();
 }
 // Method to deposit amount into the account
 public void deposit(float amount) {
 if (amount > 0) {
 balAmt += amount;
 System.out.println("Successfully deposited " + amount);
 } else {
 System.out.println("Deposit amount must be positive.");
    
}
}
// Method to withdraw amount from the account
public void withdraw(float amount) {
if (amount > 0) {
if (balAmt >= amount) {
balAmt -= amount;
System.out.println("Successfully withdrawn " + amount);
} else {
System.out.println("Insufficient balance! Current balance: " + balAmt);
}
} else {
System.out.println("Withdraw amount must be positive.");
}
}
// Method to display account details
public void printAccountDetails() {
System.out.println("\n--- Account Details ---");
System.out.println("Account Number: " + accNum);
System.out.println("Name: " + name);
System.out.println("Phone Number: " + phoneNum);
System.out.println("Balance Amount: " + balAmt);
}
// Main method to test the Account class
public static void main(String[] args) {
Account acc = new Account();
acc.getInput();
Scanner scanner = new Scanner(System.in);
// Deposit example
System.out.print("\nEnter amount to deposit: ");
float depositAmount = scanner.nextFloat();
acc.deposit(depositAmount);
// Withdraw example
System.out.print("\nEnter amount to withdraw: ");
float withdrawAmount = scanner.nextFloat();
acc.withdraw(withdrawAmount);
// Display account details
acc.printAccountDetails();
}
}