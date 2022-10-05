/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


    short GetAbsSum(short Number){
        if(Number < 0){
            Number = -Number ; 
            return Number ; 
        }else{
            return Number ; 
        }
    }
    short AbsSum(short List[4]){
        short Sum = 0 ; 
        for(short index = 0 ; index <= 3 ; index ++){
            Sum = Sum + GetAbsSum(List[index]) ;
        }
        return Sum ;
    }
    
    void PrintNumber(short Number){
        cout << "Number : " << Number << endl ;
    }
    

int main()
{
    
    short List[4] = {1 , -5 , 4 , 2};
    PrintNumber(AbsSum(List));
    return 0;
}
