//Author: Michelle Gomez
#include <iostream>
using namespace std;


//prototypes...
void maxValue(int& num1, int& num2, int& num3); 
 

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  int num1 = red; 
  int num2 = green; 
  int num3 = blue; 

  maxValue(red, green, blue); 



  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
   

}

//definitions...
void maxValue(int& num1, int& num2, int& num3)
{
    if(num1 > num2)
    {
        int temp = num1; 
        num1 = num2; 
        num2 = temp; 
    }
   
    if(num1 > num3)
    {
        int temp = num1; 
        num1 = num3; 
        num3 = temp; 
    }
  
    if( num2 > num3)
    {
        int temp = num2; 
        num2 = num3; 
        num3 = temp; 
    }
   
    if( num3 > num2)
    {
        int temp = num3; 
        num3 = num2; 
        num2 = temp;
    }
    
}

