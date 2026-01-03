#include<stdio.h>
int main(){
  float balance=5000.00, amount;
  int pin = 9090, enteredpin, choice;
  char transaction = 'y';

  printf("*******Welcome to ATM*******\n\n");
  printf("Enter your 4-digit PIN: ");
  scanf("%d", &enteredpin);

  if (enteredpin != pin){
    printf("Invalid PIN. Access denied.\n\n");
    return 0;
  }
  else{
      do{
        printf("---------- MENU ----------\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("----------------------------\n");
        printf("Choose an option: \n");
        scanf("%d", &choice);
    
        switch(choice){
          case 1:
            printf("\nYour balance is = $%.2f\n", balance);
            break;
    
          case 2:
            printf("Enter the amount of cash to withdraw : ");
            scanf("%f", &amount);
            if (amount > balance){
              printf("Insufficient Balance! Current Balance: $%.2f\n",balance);
            } else if(amount <= 0) {
              printf("Invalid amount!\n");
            } else{
              balance -= amount;
              printf("Collect your cash.\n");
              printf("Remaining balance: $%.2f\n",balance);
            }
            break;
          case 3:
            printf("\nEnter amount to deposit: ");
            scanf("%f", &amount);
          if (amount <= 0){
            printf("Invalid amount.\n");
          }else {
            balance += amount;
            printf("Deposit successful!\n");
            printf("New balance: $%.2f\n", balance);
          }
            break;
          case 4:
            printf("\nThank you for using ATM.\n");
            return 0;
          default:
            printf("\nInvalid selection.");
      }
        printf("\nDo you want to perform another transaction? (y/n): ");
        fflush(stdin);
        scanf("%c", &transaction);
    }while (transaction == 'y' || transaction == 'Y');
  }
  printf("\nThank you for using ATM!\n");
  return 0;
}
