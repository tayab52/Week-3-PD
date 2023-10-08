#include<iostream>

using namespace std;
string projectTimeCalculation(int neededHours,int totalDays,int Workers);

main(){
int neededHours,totalDays,Workers;
cout<<"Enter the needed hours: ";
cin>> neededHours;
cout<<"Enter the days that the firm has: ";
cin>> totalDays;
cout<<"Enter the number of all workers: ";
cin>> Workers;
cout<< projectTimeCalculation(neededHours,totalDays,Workers);




}
string projectTimeCalculation(int neededHours,int totalDays,int Workers){

int trainingHours=(totalDays*10)*0.1;
int workingHours=(totalDays*10)-trainingHours;
int totalWorkingHours=workingHours*Workers;
string Output;
if(neededHours<totalWorkingHours){
int leftHours=totalWorkingHours-neededHours;
return Output="Yes!"+ to_string(leftHours)+ " hours left.";

}
if(neededHours>totalWorkingHours){
int moreHours=neededHours-totalWorkingHours;
return Output="Not enough time!"+ to_string(moreHours)+" hours needed.";

}


}