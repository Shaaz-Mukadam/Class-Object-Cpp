//********CLASS and OBJECT*********
//class is a collection of data member and member functions.
//Class is a blueprint / Class is a template.
//An object is a instance of class.
//. is used to access
#include<iostream>
using namespace std;
 class Students{
     public:
     string name;
     int age;
     bool gender;

     void printInfo() {
      cout<<"Name =";
      cout<<name<<endl;
      cout<<"Age =";
      cout<<age<<endl;
      cout<<"Gender";
      cout<<gender<<endl;
     }

 };
int main() {
    Students arr[3];
    for(int i=0 ; i<3 ; i++){
        cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }
    for(int i=0 ; i<3 ; i++){
        arr[i].printInfo();
    }
}
