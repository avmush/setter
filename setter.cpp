#include <iostream>
#include <string>
using namespace std;

class nation{
 private:
  string name;
  string surname;

 public:
  void SetName(string sName){
      name = sName;
  }
  void SetSurname(string sSurname){
      surname = sSurname;    
  }
  void print(){
      cout<<name<<"\t"<<surname<<endl;    
  }
};
int main(){
  nation french;
  french.SetName("Antuan");
  french.SetSurname("Griezman");
  french.print();

  nation spanish;
  spanish.SetName("Rafael");
  spanish.SetSurname("Nadal");
  spanish.print();
    
    
    
}
