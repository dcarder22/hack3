/* 
Author: Dalton Carder
Date: 2020
Prints the data usage of the user as well as other functions
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    
  //getting and calculating all needed values
  double gbTotal = atof(argv[1]);
  int currentDay = atol(argv[2]);
  double gbUsed = atof(argv[3]);
  int daysRemaining = 30 - currentDay;
  double realAverageUse = gbUsed / (double)currentDay;
  double averageUse = gbTotal / 30.0;
  double realDataUsage = gbTotal / 30;
  double gbRemaining = gbTotal - gbUsed;
  double gbUseLeft = gbRemaining / daysRemaining;
  
  printf("%d days used, %d days remaining\n", currentDay, daysRemaining);
  printf("Average daily use: %.2f GB/day\n\n", realAverageUse);
  
  if (realAverageUse > averageUse) {
      printf("You are Exceeding your average daily use (%.2f GB/day).\n", averageUse);
      double gbExceeding = ((realAverageUse * 30) - gbTotal);
      printf("Continuing this high usage, you'll exceed your data plan by %.2f GB\n\n", gbExceeding);
      printf("To stay below your data plan, use no more than %.2f GB/day.\n", gbUseLeft);
  } else {
      printf("You are not exceeding your average daily use of %.2f GB/day\n", averageUse);
      printf("To stay below your data plan, use no more than %.2f GB/day.\n", gbUseLeft);
  }
  
  
  
  
  return 0;
}