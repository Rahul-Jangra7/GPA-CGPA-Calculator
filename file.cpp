#include <iostream>
#include <cstdlib>
using namespace std;

void CalculateGPA();
void CalculateCGPA();
void Method();
void EXIT();

    void CalculateGPA(){
        cout<<"------------------------------"<<endl;
        cout<<"-------Calculating GPA-------"<<endl;
        cout<<"------------------------------\n"<<endl;
        cout<<"Enter the no. of subjects: "<<endl;
        int a;
        cin>>a;

        int credit[a];
        int points[a];

        // For Check Points & Credits For each Subject
        for(int i=0;i<a;i++){
            cout<<"Enter the credit in Subject "<<i+1<<endl;
            cin>>credit[i];

            cout<<"Enter the points in Subject "<<i+1<<endl;
            cin>>points[i];
        }
        
        // sum of points*Credits
        int sum = 0;
        for(int k=0;k<a;k++){
            sum = sum + (credit[k]*points[k]);
        }

        // For Calculating Total no. Of Credits
        int totCr=0;
        for(int j=0;j<a;j++){
            totCr = totCr+credit[j];
        }

        // Result
        cout<<"YOUR GPA IS: "<<sum/totCr<<endl;

    cout<<"What you want to Calculate"<<endl;
    cout<<"1. GPA"<<endl;
    cout<<"2. CGPA"<<endl;
    cout<<"3. Method For Calculation"<<endl;
    cout<<"4. Exit APP"<<endl;
    int x;
    cin>>x;
        switch (x)
    {
    case 1:
        CalculateGPA();
        break;
    
    case 2:
        CalculateCGPA();
        break;

    case 3:
        Method();
        break;

    case 4:
        EXIT();
        break;

    default:
        cout<<"You have Entered wrong Value"<<endl;
        break;
    }


    }

    void CalculateCGPA(){
        cout<<"------------------------------"<<endl;
        cout<<"-------Calculating CGPA-------"<<endl;
        cout<<"------------------------------"<<endl;
        cout<<"Enter the no. of Semesters: "<<endl;
        int a;
        cin>>a;

        int arr[a];
        for(int i=0;i<a;i++){
            cout<<"Enter the GPA in SEMESTER "<<i+1<<endl;
            cin>>arr[i];
        }

        // Total GPA
        int totGPA = 0;
        for(int j=0;j<a;j++){
            totGPA = totGPA + arr[j];
        }

        cout<<"YOUR CGPA is :"<<totGPA/a<<endl;

        cout<<"What you want to Calculate"<<endl;
    cout<<"1. GPA"<<endl;
    cout<<"2. CGPA"<<endl;
    cout<<"3. Method For Calculation"<<endl;
    cout<<"4. Exit APP"<<endl;
    int x;
    cin>>x;
        switch (x)
    {
    case 1:
        CalculateGPA();
        break;
    
    case 2:
        CalculateCGPA();
        break;

    case 3:
        Method();
        break;

    case 4:
        EXIT();
        break;

    default:
        cout<<"You have Entered wrong Value"<<endl;
        break;
    }

        }

        void EXIT(){
            cout<<"APP EXITED"<<endl;
            exit(0);
        }
    
    void Method(){
        cout<<"--------Method For Calculation-----------"<<endl;
        cout<<"1. GPA : Sum of (points*credits) for each subject/sum of total credits"<<endl;
        cout<<"2. CGPA : GPA in all Semesters/Total Semesters"<<endl;

   cout<<"What you want to Calculate"<<endl;
    cout<<"1. GPA"<<endl;
    cout<<"2. CGPA"<<endl;
    cout<<"3. Method For Calculation"<<endl;
    cout<<"4. Exit APP"<<endl;
    int x;
    cin>>x;
        switch (x)
    {
    case 1:
        CalculateGPA();
        break;
    
    case 2:
        CalculateCGPA();
        break;

    case 3:
        Method();
        break;

    case 4:
        EXIT();
        break;

    default:
        cout<<"You have Entered wrong Value"<<endl;
        break;
    }


    }
    
int main(){
    cout<<"------------------------"<<endl;
    cout<<"Welcome to the CGPA Calculator"<<endl;
    cout<<"------------------------"<<endl;

    cout<<"What you want to Calculate"<<endl;
    cout<<"1. GPA"<<endl;
    cout<<"2. CGPA"<<endl;
    cout<<"3. Method For Calculation"<<endl;
    cout<<"4. Exit APP"<<endl;

    int a;
    cin>>a;

    switch (a)
    {
    case 1:
        CalculateGPA();
        break;
    
    case 2:
        CalculateCGPA();
        break;

    case 3:
        Method();
        break;

    case 4:
        EXIT();
        break;

    default:
        cout<<"You have Entered wrong Value"<<endl;
        break;
    }



    return 0;
}