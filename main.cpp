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
    if(num1 > num2 && num1 > num3)
    {
        int greatest = num1;
        if(num2 > num3)
        {
            int middle = num2;
            int last = num3; 
        }
        else if( num3 > num2)
        {
            int middle = num3; 
            int last = num2; 
        }

    }
    if(num2 > num1 && num2 > num3)
    {
        int greatest = num2;
        if( num1 > num3)
        {
            int middle = num1; 
            int last = num3; 
        }
        else if(num3 > num1)
        {
            int middle = num3;
            int last = num1; 
        }
    }
    if(num3 > num1 && num3 > num2)
    {
        int greatest = num3; 
        if( num1 > num2)
        {
            int middle = num1; 
            int last = num2; 
        }
        else if( num2 > num1)
        {
            int middle = num2; 
            int last = num1; 
        }
    }
    
  
}

