/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  int dis,bal;
  double ammount;
  printf("enter total distance : ");
  scanf("%d",&dis);
  bal=dis-30;
  if(dis<=30)
  {
    ammount=dis*50;
    printf("total ammount is %.2f",ammount);
  }
  else if(dis>30)
  {
    bal=dis-30;
    ammount=bal*40+dis*50;
    printf("total ammount is %.2f",ammount);
  }
    
  
  
  
  
  return 0;
}
