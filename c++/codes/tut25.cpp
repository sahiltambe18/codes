#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;
    public:

    void setid(void){
        cout<<"enter the id of employee "<<endl;
        cin>>id;
    }

    void getid(void){
        cout<<"id of thiis employee  is "<<id<<endl;
    }

};






int main( )
  {
      employee fb[5];
      for (int i = 0; i < 5; i++)
      {
          fb[i].setid();
          fb[i].getid();
      }
      

return 0 ;
}