#include<iostream>
using namespace std;
int main(){
  char op;
 double num1,num2;
  cout<<"enter operator"<<op<<endl;
  cin>>op;
  cout<<"enter two operands "<<num1<<num2<<endl;
  cin>>num1>>num2;
  switch(op){
    case '+':
     cout<<"sum of two operands is "<<num1+num2<<endl;
     break;
     case '-':
     cout<<"subtraction of two operands is "<<num1-num2<<endl;
     break;
     case '*':
     cout<<"multiplication of two operands is "<<num1*num2<<endl;
     break;
     case '/':
     cout<<"division of two operands is "<< num1/num2<<endl;
     break ;
     default:
     cout<<"enter a valid operator"<<endl;
  }
  return 0;
}
