#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main(){
//Variables of the Problem
//S= Skills Test
//M= Machine Problems
//E= Experiments
//Prelims_w= Prelims Written
//Prelims_p= Prelims Practical
//FG= Finals Grade
//TG=Transmuted Grade
int num=50;
string name[num];
double E1[num], E2[num], E3[num], E4[num],S1[num], S2[num], S3[num], S4[num], M1[num],
M2[num] ;
double Prelims_w[num], Prelims_p[num], Finals_w[num], Finals_p[num];
double FG[num], TG[num];
for(int i=0; i < num; i++)
{
cout <<"Enter Student's Name: ";
cin >> name[i];
cout <<"Input Grades: \n";
cout << "Experiment 1: ";
cin>>E1[i];
cout << "Experiment 2: ";
cin>>E2[i];
cout << "Experiment 3: ";
cin>>E3[i];
cout << "Experiment 4: ";
cin>>E4[i];
cout << "Skills Test 1: ";
cin>>S1[i];
cout << "Skills Test 2: ";
cin>>S2[i];
cout << "Skills Test 3: ";
cin>>S3[i];
cout << "Skills Test 4: ";
cin>>S4[i];
cout << "Machine Problems 1: ";
cin>>M1[i];
cout << "Machine Problems 2: ";
cin>>M2[i];
cout << "Prelims (Written): ";
cin>>Prelims_w[i];
cout << "Prelims (Practical): ";
cin>>Prelims_p[i];
cout << "Finals (Written): ";
cin>>Finals_w[i];
cout << "Finals (Practical): ";
cin>>Finals_p[i];
//cin >> S1[i] >> S2[i] >> S3[i] >> S4[i];
//cin >> E1[i] >> E2[i] >> E3[i] >> E4[i];
//cin >> M1[i] >> M2[i];
//cin >> Prelims_w[i] >> Prelims_p[i];
//cin >> Finals_w[i] >> Finals_p[i];
//Formula for computing the grade
FG[i] += E1[i]/100*5;
FG[i] += E2[i]/100*5;
FG[i] += E3[i]/100*5;
FG[i] += E4[i]/100*5;
FG[i] += S1[i]/100*5;
FG[i] += S2[i]/100*5;
FG[i] += S3[i]/100*5;
FG[i] += S4[i]/100*5;
FG[i] += M1[i]/100*10;
FG[i] += M2[i]/100*10;
FG[i] += (Prelims_w[i] + Prelims_p[i]) / 100*20;
FG[i] += (Finals_w[i] + Finals_p[i]) / 100*20;
}
//Final Transmutation Grade
for(int i=0; i < num; i++)
{
if(FG[i] >= 60.00 && FG[i] <= 64.44 ){
TG[i] = 3.00;
}
else if(FG[i] >= 64.45 && FG[i] <= 68.89 ){
TG[i] = 2.75;
}
else if(FG[i] >= 68.90 && FG[i] <= 73.33 ){
TG[i] = 2.50;
}
else if(FG[i] >= 73.34 && FG[i] <= 77.78 ){
TG[i] = 2.25;
}
else if(FG[i] >= 77.79 && FG[i] <= 82.22 ){
TG[i] = 2.00;
}
else if(FG[i] >= 82.23 && FG[i] <= 86.67 ){
TG[i] = 1.75;
}
else if(FG[i] >= 86.68 && FG[i] <= 91.11 ){
TG[i] = 1.50;
}
else if(FG[i] >= 91.12 && FG[i] <= 96.56 ){
TG[i] = 1.25;
}
else if(FG[i] >= 95.57 ){
TG[i] = 1.00;
}
else{
TG[i] = 5.00;
}
}
// Output of the computed grade
cout<<endl;
cout<<"Name\t\t"<< "Final Grade:\t\t" << "Transmutated\t\t" <<"Pass/Fail"<<endl;
for(int i=0; i < num; i++)
{
cout << fixed << setprecision(2) << left;
cout << name[i] << "\t\t" << FG[i] << "\t\t\t\t" << TG[i];
//Computation either you pass or fail
if(TG[i] <= 3)
{
cout<<"\t\tPass"<<endl;
}else
{
cout<<"\t\tFail"<<endl;
}
}
//Computation for the top 10 of the class
for(int i=0; i < num-1; i++){
for(int j= i+1; j < num; j++){
if(FG[i] < FG[j]){
string temp1 = name[i];
name[i] = name[j];
name[j] = temp1;
double temp2 = FG[i];
FG[i] = FG[j];
FG[j] = temp2;
}
}
}
for(int i=0; i<10; i++){
cout<<"\nTop "<<i+1<<" :"<< name[i] << endl;
}
}

