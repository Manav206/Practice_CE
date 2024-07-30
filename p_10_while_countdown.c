/* Develop a countdown timer, that allows user to set a starting number of seconds 
  and then count down to zero, displaying each second as it decrements. After the 
  countdown completes write ‘Countdown completed!’. [Use while loop]*/

#include <stdio.h>
void main() 
{
  int seconds;

  printf("Enter the number of seconds for the countdown: ");
  scanf("%d", &seconds);
  while (seconds >= 0)
  {
    printf("%d\n", seconds);
    seconds--;
  }
  printf("Countdown completed!\n");

  printf("\n\n Name : LAKHANI MANAV PARESHBHAI ");
  printf("\n Student I'd : 24TCELIK ");
    
}
