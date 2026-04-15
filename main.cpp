#include <iostream>
using namespace std;
double calcAvg(double sum,int num){
double avg=sum/num;
return avg;}
///////////
char getGrade(double mark){
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
int count=0;
double sum=0;
cout<<"Enter number of marks: "<<endl;
cin>>x;
cout<<"enter "<<x<<" marks"<<endl;
for(int i=0;i<x;i++){
cin>>y;
if(y==-1)
break;
   sum+=y;
   count++;
}
if (count == 0) {
    cout << "No valid marks entered." << endl;
    return 0;
}
double avg=calcAvg(sum,count);
cout<<"the average is "<<avg<<endl;
cout<<"the  average grade is "<<getGrade(avg)<<endl;
cout<<"the result according to the average is "<<getResult(avg)<<endl;
printResult(avg);
    return 0;
}
