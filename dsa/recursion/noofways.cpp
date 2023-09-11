#include<iostream>
using namespace std;

// find no of ways to go from starting point to end on a gameboard
int ways(int st , int ed){
    if (st>ed)
    {
        return 0 ;
    }
    if (st==ed)
    {
        return 1 ;
    }
        int total=0;
    for (int i = 1; i <=6; i++)
    {
        total+=ways(st+i,ed);
    }
    
    return total ;
}
int main( )
  {
      cout<< ways(0,4);


return 0 ;
}