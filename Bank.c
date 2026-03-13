#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account
{
    int id;
    char name[50];
    float balance;
    int active;
};

int main()
{
    struct Account accounts[MAX_ACCOUNTS];
    int count = 0, choice, id;
    float amount;

    while (1)
    {
        if (count == 0)
        {
            printf("\nNo accounts exist. Please create one first.\n");
            printf("1. Create Account\n2. Exit\n");
            scanf("%d", &choice);

            if (choice == 1)
            {
                accounts[count].id = count + 1;
                printf("Enter name: ");
                scanf("%s", accounts[count].name);
                accounts[count].balance = 0;
                accounts[count].active = 1;
                printf("Account created. ID: %d | Name: %s | Balance: %.2f\n",
                       accounts[count].id, accounts[count].name, accounts[count].balance);
                count++;
            }
            else if (choice == 2)
            {
                break;
            }
            else
            {
                printf("Invalid choice\n");
            }
        }
        else
        {
            printf("\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Close Account\n6. Exit\n");
            scanf("%d", &choice);

            if (choice == 1)
            {
                if (count >= MAX_ACCOUNTS)
                {
                    printf("Account limit reached\n");
                    continue;
                }
                accounts[count].id = count + 1;
                printf("Enter name: ");
                scanf("%s", accounts[count].name);
                accounts[count].balance = 0;
                accounts[count].active = 1;
                printf("Account created. ID: %d | Name: %s | Balance: %.2f\n",
                       accounts[count].id, accounts[count].name, accounts[count].balance);
                count++;
            }
            else if (choice == 2)
            {
                printf("Enter Account ID: ");
                scanf("%d", &id);
                if (id <= 0 || id > count || !accounts[id - 1].active)
                {
                    printf("Invalid account\n");
                    continue;
                }
                printf("Enter amount: ");
                scanf("%f", &amount);
                accounts[id - 1].balance += amount;
                printf("Deposited. ID: %d | Name: %s | Balance: %.2f\n",
                       accounts[id - 1].id, accounts[id - 1].name, accounts[id - 1].balance);
            }
            else if (choice == 3)
            {
                printf("Enter Account ID: ");
                scanf("%d", &id);
                if (id <= 0 || id > count || !accounts[id - 1].active)
                {
                    printf("Invalid account\n");
                    continue;
                }
                printf("Enter amount: ");
                scanf("%f", &amount);
                if (amount > accounts[id - 1].balance)
                {
                    printf("Insufficient balance. ID: %d | Name: %s | Balance: %.2f\n",
                           accounts[id - 1].id, accounts[id - 1].name, accounts[id - 1].balance);
                }
                else
                {
                    accounts[id - 1].balance -= amount;
                    printf("Withdrawn. ID: %d | Name: %s | Balance: %.2f\n",
                           accounts[id - 1].id, accounts[id - 1].name, accounts[id - 1].balance);
                }
            }
            else if (choice == 4)
            {
                printf("Enter Account ID: ");
                scanf("%d", &id);
                if (id <= 0 || id > count || !accounts[id - 1].active)
                {
                    printf("Invalid account\n");
                    continue;
                }
                printf("ID: %d | Name: %s | Balance: %.2f\n",
                       accounts[id - 1].id, accounts[id - 1].name, accounts[id - 1].balance);
            }
            else if (choice == 5)
            {
                printf("Enter Account ID to close: ");
                scanf("%d", &id);
                if (id <= 0 || id > count || !accounts[id - 1].active)
                {
                    printf("Invalid account\n");
                    continue;
                }
                accounts[id - 1].active = 0;
                printf("Account ID %d closed\n", id);
            }
            else if (choice == 6)
            {
                break;
            }
            else
            {
                printf("Invalid choice\n");
            }
        }
    }

    return 0;
}
