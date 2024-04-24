#include <iostream>
using namespace std;

double divide(int a1,int a2){
if(a2 != 0){
  double division = a1 /a2;
  return division;
}else{
cout<<"The second integer is zero, divide by zero"<<endl;
}
}
int main(){

char press;

do{
int select, a1, a2;
cout<<"========================"<<endl;
cout<<"MENU"<<endl;
cout<<"========================"<<endl;
cout<<"1.Additions"<<endl;
cout<<"2.Substraction"<<endl;
cout<<"3.Multiplication"<<endl;
cout<<"4.Division"<<endl;
cout<<"5.Modulus"<<endl;
cout<<"Enter your choice (1-5): ";
cin>>select;
cout<<"Enter integer 1: ";
cin>>a1;
cout<<"Enter integer 2: ";
cin>>a2;
cout<<" "<<endl;

int add = a1 + a2;
int subtract = a1 - a2;
int multiply = a1 * a2;
double moduls = a1 % a2;

if(select == 1){
    cout<<"Result : "<< add<<endl;
    cout<<"Press y or Y to continue: ";
    cin>>press;
    }
    else if( select == 2){
    cout<<"Result : "<< subtract<<endl;
    cout<<"Press y or Y to continue: ";
    cin>>press;
    }
    else if(select == 3){
    cout<<"Result : "<< multiply<<endl;
    cout<<"Press y or Y to continue: ";
    cin>>press;
    }
    else if(select == 4){
      double result = divide(a1,a2);
    cout<<"Result: "<< result<<endl;
    cout<<"Press y or Y to continue: ";
    cin>>press;
    }
    else if(select == 5){
    cout<<"Result : "<< moduls<<endl;
    cout<<"Press y or Y to continue: " ;
    cin>>press;
    }
    else{
    cout<<"Invaild choice"<<endl;
    }
}
while (press == 'y' || press == 'Y');
return 0;
}



