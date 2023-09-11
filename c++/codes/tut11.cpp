#include<iostream>
using namespace std;
int main( )
  {
      cout<<"break use"<<endl;
     for (int i = 0; i < 40; i++)
     {
         cout<<i<<endl;
         if (i==9)
         {break ;
             /* code */
         }
         

         /* code */
     }
     cout<<"continue use"<<endl;
     for (int x = 0; x < 40; x++)
     {
         
         /* code */
         if (x==9)
         {
             continue ;
             /* code */
         }
         cout<<x<<endl;
     }
     

return 0 ;
}