#include<iostream>
using namespace std;
// check max length word in sentence
int main( )
  {
      int n ; 
      cout<<"enter lenth"<<endl;
      cin>>n;
      cin.ignore();

      char c[n+1];
      cout<<"enter the sentence"<<endl;
      cin.getline(c , n) ;
      cin.ignore();

      int  current = 0 , maxsumm = 0 ;
      int i = 0 ;
      while (1)
      {
          if (c[i] == " " || c[i] == "/0")
          {
              if (current > maxsumm)
              {
                  maxsumm = current
              }
              current= 0
          }
          else
          current++;
          if (c[i] == "/0")
          {
              break;
          }
          

          i++;
      }
      cout<<"max lenth  is "<<maxsumm<<endl;

return 0 ;
}