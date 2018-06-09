#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

 int **piBuffer = NULL; //pointer to pointer
 int nRow = 0; //variable store number of Row
 int nColumn = 0; //variable store number of Row
 int iRow = 0; //Variable for looping Row
 int iCol = 0; //Variable for looping column
 printf("\nEnter the number of Row = ");
 scanf("%d",&nRow); //Get input for number of Row
 printf("\nEnter the number of Column = ");
 scanf("%d",&nColumn); //Get input for number of Column
 //Allocate memory for row
 piBuffer = (int **)malloc(nRow * sizeof(int*));
 //Check memory validity
 if(piBuffer == NULL)
 {
 return 1;
 }

 //Allocate memory for column
 for (iRow =0 ; iRow < nRow ; iRow++)
 {
 piBuffer[iRow] = (int *)malloc(nColumn * sizeof(int));
 //Check memory validity
 if(piBuffer[iRow] == NULL)
 {
 return 1;
 }
 }

 //Copy the data in 2d Array

 for (iRow =0 ; iRow < nRow ; iRow++)
 {
 for (iCol =0 ; iCol < nColumn ; iCol++)
 {
 piBuffer[iRow][iCol] = 3;
 }

 }


 //Print the content of 2D array
 for (iRow =0 ; iRow < nRow ; iRow++)
 {
 for (iCol =0 ; iCol < nColumn ; iCol++)
 {
 printf("\npiBuffer[%d][%d] = %d\n",iRow, iCol,piBuffer[iRow][iCol]);
 }

 }

 for (iRow =0 ; iRow < nRow ; iRow++)
 {
 free(piBuffer[iRow]); // free allocated memory
 }


 free(piBuffer);

 return 0;
}
