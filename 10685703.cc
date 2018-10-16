#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct student
{
    int IdNumber;
    string studentName;
    int age;
    string gender;
    double score;
    char grade;
};
    
int main ()
{
    double averageScore=0;
    double averageAge=0;
    int maleCount=0;
    int femaleCount=0;
    int totalNumber=0;
    
    ofstream textfile;
    textfile.open("student.txt");
    
    textfile << "Student ID " << "Name" << "Age" << "Gender" << "Score" << "Grade" << endl;
    textfile << "****************************************************************" << endl;
    
    cout<<"Input Student Details"<<endl;
    
    student array[5];
    for (int i=0; i<=4; i++) {
        cout<<"Student ID"<<endl;
        cin >> array[i].IdNumber;
        
        cout<< "Name" <<endl;
        cin>> array[i].studentName;
        
        cout<< "Age"<<endl;
        cin>> array[i].age;
        
        cout<<"Gender"<<endl;
        cin>> array[i].gender;
        
        cout<<"Score"<<endl;
        cin>>array[i].score;
        
        cout<<"Grade"<<endl;
        cin>>array[i].grade;
        
        if (array[i].score >=80 && array[i].score <=100) {
            array[i].grade='A';
        } else {
            if (array[i].score >=70 && array[i].score<=79) {
                array[i].grade='B';
            } else {
                if (array[i].score >=60 && array[i].score <=69) {
                    array[i].grade='C';
                } else {
                    if (array[i].score >=50 && array[i].score <=59) {
                        array[i].grade='D';
                    } else {
                        if (array[i].score >=45 && array[i].score <=49) {
                            array[i].grade='E';
                        } else {
                            if (array[i].score >0 && array[i].score <=44) {
                                array[i].grade='F';
                            } else {
                            }
                        }
                    }
                }
            }
        }
        
        textfile <<"No." <<i<<array[i].IdNumber<<" "<<array[i].studentName<<" "<<array[i].age<<" "<<array[i].gender<<" "<<array[i].score<<" "<<array[i].grade;
        textfile<< "**************************************************************************" <<endl;
        textfile<<"Average Score = "<<array[i].score/5;
        textfile<<"Average age = "<<array[i].age/5;
        
    }
    }

