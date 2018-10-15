

#include <iostream>
#include<fstream>
using namespace std;

struct student{
string id;
string name;
int age;
string gender;
char grade;
int score;

};

int main()
{
ofstream outFile;
outFile.open("Kenneth.txt");

double avgAge = 0, avgScore = 0;

outFile<<"    ID   "<<"    Name   "<<"   Age  "<<"  Gender "<<"  Grade  "<<"Score "<<endl;

student initial[5];

for(int a=0; a<5; a++)
{
cout<<"Student ID     ";
cin>>initial[a].id;

cout<<"Name   ";
cin>>initial[a].name;

cout<<"Age    ";
cin>>initial[a].age;

cout<<"Gender     ";
cin>>initial[a].gender;

cout<<"Exams Score      ";
cin>>initial[a].score;

avgAge += initial[a].age;
avgScore += initial[a].score;

cout<<endl<<endl;

if(initial[a].score>=80 && initial[a].score<=100)
    {
     initial[a].grade='A';
    }

    else if (initial[a].score>=70 && initial[a].score<80)
    {
            initial[a].grade='B';
    }

    else if (initial[a].score>=60 && initial[a].score<70)
    {
    initial[a].grade='C';
    }
    else if (initial[a].score>=50 && initial[a].score<60)
    {
    initial[a].grade='D';
    }

    else if (initial[a].score>=40 && initial[a].score<50)
    {
    initial[a].grade='E';
    }

    else if (initial[a].score>=0 && initial[a].score<40)
    {
    initial[a].grade='F';
    }

outFile<<a+1<<". "<<initial[a].id<<" "<<initial[a].name<<"    "<<initial[a].age<<"      "<<initial[a].gender<<"     "<<initial[a].grade << "  "  <<initial[a].score<<endl;

}

outFile<<"average age= "<<avgAge/5<<endl;
outFile<<"average score= "<<avgScore/5<<endl;


    return 0;
}
