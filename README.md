# C-Banking-System-MiniProject
A simple console-based banking system in C that allows users to create accounts, deposit, withdraw, check balance, and close accounts

This program allows users to manage bank accounts with basic operations such as:

- Create Account  
- Deposit Money  
- Withdraw Money (with insufficient balance check)  
- Check Account Balance  
- Close Account  
- Exit  

### 🚀 Features
- Supports **multiple accounts** (up to 100).  
- Each account has an **ID, Name, Balance, and Status** (active/closed).  
- Prevents invalid operations (like withdrawing more than the balance).  
- First-time users must create an account before accessing other options.  

### 🛠️ How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/C-Banking-System.git
Navigate into the project folder:

bash
Copy code
cd C-Banking-System
Compile the program:

bash
Copy code
gcc banking.c -o banking
Run the program:

bash
Copy code
./banking
📷 Example Output
yaml
Copy code
No accounts exist. Please create one first.
1. Create Account
2. Exit
Enter choice: 1
Enter name: Alice
Account created. ID: 1 | Name: Alice | Balance: 0.00
📌 Requirements
GCC Compiler (or any standard C compiler).

Works on Linux, macOS, and Windows (with MinGW or similar).
