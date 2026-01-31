#include <iostream>
using namespace std;
double calcAvg(double sum,int num){
double avg=sum/num;
return avg;}
///////////
char getMark(double mark){
   switch (int (mark)/10)
  {
    case 9:
    case 10:
    return 'A';
    case 8:
    return 'B';
    case 7:
    return 'C';
    case 6:
    return 'D';
    default: 
    return 'F';
   } 
}
////////
char getResult(double average){
if(average>=50)
return 'P';
return 'F';}
////////
void printResult(double avg){
    if(avg>=50)
     cout<<"Congratulations! you passed!"<<endl;
     else cout<<"Sorry, you failed, better luck next time."<<endl ;
}

 int main(){
int x,y;
double sum=0;
cout<<"enter the number of numbers "<<endl;
cin>>x;
cout<<"enter "<<x<<" marks"<<endl;
for(int i=1;i<=x;i++){
cin>>y;
sum+=y;
if(y=='-1')
break;
}

double avg=calcAvg(sum,x);
cout<<"the average is "<<avg<<endl;
double z;
cout<<"enter the mark"<<endl;
cin>>z;
cout<<"the grade is "<<getMark(z)<<endl;
cout<<"the result according to the average is "<<getResult(avg)<<endl;
printResult(avg);
    return 0;
}
