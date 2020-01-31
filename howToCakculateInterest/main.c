#include <stdio.h>
#include <stdlib.h>

int main()
{
  int goalsScored=0;
 goalsScored+=1;

  printf("totalGoals: %d \n",goalsScored);
  goalsScored+=1 ;

  printf("totalGoals: %d \n",goalsScored);
    goalsScored+=1; // the SAME WAY OF WRITING     goalsScored=goalsScored+1
                                                           //goalsScored+=1

  printf("totalGoals: %d \n",goalsScored);

  // CALCULATONG THE INTEREST

  float balance=10000.00;
  balance*=1.1;// HERE INTEREST IS  1.1      balance*=1.1   =    balance=balance*1.1
  printf("new balance: %f\n",balance);
balance*=1.1;
  printf("new balance: %f\n",balance);

    return 0;
}
