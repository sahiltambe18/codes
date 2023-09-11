#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main( )
  {
      string s ,r;
    //   getline(cin , s);
    //   cout<<s<<endl;
      string s1 = "fam" ;
      string s2 = "ily" ;
    //   cout<< s1 + s2 <<endl;
      s1.append(s2);
    //   cout<<s1;
      r.assign("sahil");
    //   cout<<r;
    string n = "sahiltambe";
    // n.erase(3,2);

    cout<<n.find("tam")<<endl;
    n.insert(5 ,"sampat");
    cout<<n<<endl<< n.size();
    cout<< n.substr(11 ,5);// to  print sub part of str
    string num = "7588";
    int x = stoi(num); // str -->> int
    cout<< to_string(x); // int--> str
    cout<<x<<endl;
    string z = "hbcbuureutfgvcdhkjc";
    sort(z.begin(), z.end());
    cout<<z;
    

return 0 ;
}