/*Edited by Lindsay Wommack*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int,int,int);
void swap(int&,int&);

/*
 * Main function takes in three numbers and stores them into variables.
 * It then calls a helper function to sort the numbers into decreasing order.
 *  Lastly it prints out the values in that order.
 */
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC); //helper function
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/*
 * sortDescending  witches the values into the appropriate variables.
 * Calls the swap function to do the actual swapping of values.
 */
void sortDescending(int first, int second, int third)
{
  if( first > third )
  {
    swap(first,third);
  }
  if( first > second )
  {
    swap(first,second);
  }
  if( second > third )
  {
    swap(second,third);
  }
}

/*
 * swap switches the values of the two variables given.
 */
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
