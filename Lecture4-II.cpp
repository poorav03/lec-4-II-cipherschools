// Lecture 4 II : Conditional Statements, If Else, Switch Case Pt 2
#include <iostream>
using namespace std;

int main(){
    float m;
    cout << "Enter a float number : " ;
    cin >> m;
    if (m>0.01){
        cout << "The condition in if statement is correct."<< endl;
    }

    cout << endl;

    float a, b;
    cout << "Give 2 float floating point numbers as input : "<< endl;
    cin >> a >> b;
    if (a>0.01 || b>a){
        cout << "The condition(||) in if statement is correct." <<  endl;
    }

    if (a>0.01 && b>a){
        cout << "The condition(&&)in if statement is correct." <<  endl;
    }
    else{
        cout << "The condition(&&) is false." <<  endl;
    }

    cout << endl;


    int marks;
    cout << "Student, please enter the marks to calculate the grade : ";
    cin >> marks;

    // if(marks>90){
    //     cout << "A";
    // }
    // if(marks<90 && marks>80){
    //     cout << "B";
    // }
    // if(marks<80 && marks>70){
    //     cout << "C";
    // }
    // if(marks<70){
    //     cout << "Pass";
    // }

    // if else-if
    if(marks>90){
        cout << "A" << endl;
    }
    else if(marks>80){
        cout << "B" << endl;
    }
    else if(marks>70){
        cout << "C" << endl;
    }
    else{
        cout << "Pass" << endl;
    }


    cout << endl;

    int e, f, g, h;
    cout << "Enter any 4 integers : " <<  endl;
    cin >> e >> f >> g >> h;
    if (e>f && g>h){
        cout << "haha" << endl;
    }
    else if(e<f && g<h){
        cout << "hehe" << endl;
    }
    else{
        cout << "huhu" << endl;
    }


    cout << endl;

    int n;
    cout << "Enter a number : ";
    cin >> n;
    switch(n){
        case 1:
        cout << "The value is 1";
        break;

        case 2:
        cout << "The value is 2";
        break;

        case 3:
        cout << "The value is 3";
        break;

        default:
        cout << "Default Section";
        break;
    }
    return 0;
}