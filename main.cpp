#include <iostream>
using namespace std;

void displaySort (int&, int&, int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  
  displaySort(red, green, blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}


void displaySort (int&val1, int&val2, int&val3)
  { 
    if (val2 > val1)
      {
        int tmp = val1;
        val1 = val2;
        val2 = tmp;
      }

    if (val3>val2)
      {
        int tmp = val2;
        val2 = val3;
        val3 =tmp;
      }

   if (val2 > val1)
     {
       int tmp = val1;
       val1 = val2;
       val2 = tmp;
     }
 }









