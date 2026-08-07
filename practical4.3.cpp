#include <iostream>
#include <string>
using namespace std;

int main()
{
    string enrollment, name, branch, mobile;
    int semester;
    int math, physics, cpf;
    int choice;
    bool marksEntered = false;

    cout << "********************************************" << endl;
    cout << "      STUDENT RECORD MANAGEMENT SYSTEM      " << endl;
    cout << "********************************************" << endl << endl;

    do {
        cout << "---------------- MAIN MENU -----------------" << endl;
        cout << "1. Register New Student" << endl;
        cout << "2. Display Student Record" << endl;
        cout << "3. Enter Student Marks" << endl;
        cout << "4. Display Academic Result" << endl;
        cout << "5. Exit" << endl << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << "------------------------------------------------" << endl;

        if(choice == 1) {
            cout << "Student Registration" << endl;
            cout << "------------------------------------------------" << endl;
            cout << "Enrollment Number : ";
            cin >> enrollment;
            cin.ignore();
            cout << "Student Name      : ";
            getline(cin, name);
            cout << "Branch            : ";
            cin >> branch;
            cout << "Semester          : ";
            cin >> semester;
            cout << "Mobile Number     : ";
            cin >> mobile;
            cout << "\nStudent Registered Successfully." << endl;
        }

        else if(choice == 2) {
            cout << "Student Record" << endl;
            cout << "------------------------------------------------" << endl;
            cout << "Enrollment Number : " << enrollment << endl;
            cout << "Student Name      : " << name << endl;
            cout << "Branch            : " << branch << endl;
            cout << "Semester          : " << semester << endl;
            cout << "Mobile Number     : " << mobile << endl;
        }

        else if(choice == 3) {
            cout << "Enter Student Marks" << endl;
            cout << "------------------------------------------------" << endl;
            cout << "Mathematics Marks                : ";
            cin >> math;
            cout << "Physics Marks                    : ";
            cin >> physics;
            cout << "Computer Programming Foundation  : ";
            cin >> cpf;
            marksEntered = true;
            cout << "\nMarks Entered Successfully." << endl;
        }

        else if(choice == 4) {
            if(marksEntered == false) {
                cout << "Please enter marks first!" << endl;
            } else {
                cout << "Academic Result" << endl;
                cout << "------------------------------------------------" << endl;
                int total = math + physics + cpf;
                float avg = total / 3.0;

                cout << "Total Marks   : " << total << endl;
                cout << "Average Marks : " << avg << endl;
                cout << "Percentage    : " << avg << "%" << endl << endl;

                if(math >= 40 && physics >= 40 && cpf >= 40)
                    cout << "Result        : PASS" << endl;
                else
                    cout << "Result        : FAIL" << endl;

                if(avg >= 90) cout << "Grade : A+" << endl << "Performance : Outstanding" << endl;
                else if(avg >= 80) cout << "Grade : A" << endl << "Performance : Excellent" << endl;
                else if(avg >= 70) cout << "Grade : B" << endl << "Performance : Good" << endl;
                else cout << "Grade : C" << endl << "Performance : Average" << endl;
            }
        }

        else if(choice == 5) {
            cout << "Thank You..." << endl;
        }

        else {
            cout << "Invalid Choice!" << endl;
        }

        cout << "------------------------------------------------" << endl << endl;
    } while(choice != 5);

    return 0;
}
