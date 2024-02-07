#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void inputStudentInfo(int id[],float score[],int n,int m,int k);
void printAllStudentInfo(int id[],float score[],int n);
void findStudentWithMaxScore(int id[],float score[],int n);
void findStudentWithMinScore(int id[],float score[],int n);

int main() {
	const int MAX_STUDENT=100;
    int choice;
    int id[MAX_STUDENT];
    float score[MAX_STUDENT];
    do{
        cout<<"1. Input student info"<<"\n";
        cout<<"2. Print all student info"<<"\n";
        cout<<"3. Find student with highest score"<<"\n";
        cout<<"4. Find student with lowest score"<<"\n";
        cout<<"5. Exit"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
            	int n;
            	cout<<"Enter the number of students: ";
            	cin>>n;
            	int m;
            	cout<<"Enter the highest score a student can get: ";
            	cin>>m;
            	int k;
            	cout<<"Enter the lowest score the student can get: ";
            	cin>>k;
            	cout<<"\n";
                if(n>0){
                    inputStudentInfo(id,score,n,m,k);
                } 
				else{
                    cout<<"No students \n" << endl;
                }
                break;
            case 2:
                printAllStudentInfo(id,score,n);
                break;
            case 3:
                findStudentWithMaxScore(id,score,n);
                break;
            case 4:
                findStudentWithMinScore(id,score,n);
                break;
            case 5:
                cout<<"Exit."<<endl;
                break;
            default:
                cout<<"Please enter again"<<endl;
        }
    } while(choice!=5);
    return 0;
}

void inputStudentInfo(int id[],float score[],int n,int m,int k){
	for(int i=1; i<=n; i++){
    cout<<"Enter student ID: "<<"\t\t  ";
    cin>>id[i];
    while(true){
    cout<<"Enter scores of students with ID: "<<id[i]<<"\t";
    cin>>score[i];
    if(score[i]<=m && score[i]>=k){
    break;
    }
    else{
	cout<<"You entered an error, please re-enter.\n";
	}
	}
    cout<<"\n";
    }
}

void printAllStudentInfo(int id[],float score[],int n){
    cout<< "All student info:"<<"\n";
    for(int i=1; i<=n; i++) {
        cout<<"student whose ID is: "<<id[i]<<" - Score: "<<score[i]<<endl;
    }
}

void findStudentWithMaxScore(int id[], float score[], int n){
    int maxscore=score[1];
    int peoplemax=id[2];
    for(int i=1; i<=n; i++){
        if (score[i]>maxscore){
            maxscore=score[i];
            peoplemax=id[i];
        }
    }
    for(int i=1; i<=n; i++){
        if(score[i]==maxscore){
        cout<<"Student with highest score: ID="<<id[i]<<",score="<<maxscore<<"\n";
        cout<<"\n";
        }
    }
}

void findStudentWithMinScore(int id[],float score[],int n){
    int minscore=score[3];
    int peoplemin=id[1];
    for(int i=1; i<=n; i++){
        if (score[i]<minscore){
            minscore=score[i];
            peoplemin=id[i];
        }
    }
    for(int i=1; i<=n; i++){
    	if (score[i]==minscore){
        cout<< "Student with lowest score: ID ="<<id[i]<<",score="<<minscore<<"\n";
        cout<<"\n";
        } 
    }  
}
