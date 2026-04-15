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
     cout<<"Congratulations! you passed!\n";
     else cout<<"Sorry, you failed, better luck next time.\n" ;
}

 int main(){
int numMarks,mark;
int count=0;
double sum=0;
cout<<"Enter number of marks: ";
cin>>numMarks;
cout<<"enter "<<numMarks<<" marks\n";
for(int i=0;i<numMarks;i++){
cin>>mark;
if(mark==-1)
break;  
if (mark<0||mark>100) {
cout << "Enter marks between 0 and 100 only\n" ;
continue;
}
sum+=mark;
count++;
}
if (count == 0) {
    cout << "No valid marks entered." ;
    return 0;
}
double avg=calcAvg(sum,count);
cout<<"the average is "<<avg<<endl;
cout<<"the average grade is "<<getGrade(avg)<<endl;
cout<<"the result according to the average is "<<getResult(avg)<<endl;
printResult(avg);
    return 0;
}

