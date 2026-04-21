#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Student data variables
    string st1_name, st2_name, st3_name, st4_name, st5_name, st6_name;
    float st1_fsc = 0, st2_fsc = 0, st3_fsc = 0, st4_fsc = 0, st5_fsc = 0, st6_fsc = 0;
    float st1_sms1 = 0, st2_sms1 = 0, st3_sms1 = 0, st4_sms1 = 0, st5_sms1 = 0, st6_sms1 = 0;
    float st1_semester_GPA = 0, st2_semester_GPA = 0, st3_semester_GPA = 0;
    float st4_semester_GPA = 0, st5_semester_GPA = 0, st6_semester_GPA = 0;
    float merit1 = 0, merit2 = 0, merit3 = 0, merit4 = 0, merit5 = 0, merit6 = 0;

    float total_marks = 1100;
    float total_GPA = 4.0;

    // Flags to track which sections have been filled
    bool hasBasicInfo      = false;
    bool hasPersonalInfo   = false;
    bool hasFieldOfStudy   = false;
    bool hasHobbies        = false;
    bool hasFinancialInfo  = false;
    bool hasStatement      = false;
    bool hasSector         = false;

    int option = 0;

    while (option != 11)
    {
        cout << "\n******************************************************************" << endl;
        cout << "*          Scholarships Management System                        *" << endl;
        cout << "******************************************************************" << endl;
        cout << "Main Menu>" << endl;
        cout << "Select one of the options from the following:" << endl;
        cout << "1-  Add the Student Information" << endl;
        cout << "2-  Personal Information" << endl;
        cout << "3-  Field of Study" << endl;
        cout << "4-  Hobbies/Activities" << endl;
        cout << "5-  Family Financial Information" << endl;
        cout << "6-  Personal Statement" << endl;
        cout << "7-  Sector Name" << endl;
        cout << "8-  View All Students" << endl;
        cout << "9-  Print Records in Merit Order" << endl;
        cout << "10- Verification" << endl;
        cout << "11- Exit" << endl;
        cout << "Your option: ";
        cin >> option;

        // ----------------------------------------------------------------
        if (option == 1)
        {
            if (hasBasicInfo)
            {
                cout << "You cannot add more information (already entered)." << endl;
            }
            else
            {
                cout << "Enter student 1 name: ";       cin >> st1_name;
                cout << "Enter student 1 FSC marks: ";  cin >> st1_fsc;
                cout << "Enter student 1 semester GPA: "; cin >> st1_semester_GPA;

                cout << "Enter student 2 name: ";       cin >> st2_name;
                cout << "Enter student 2 FSC marks: ";  cin >> st2_fsc;
                cout << "Enter student 2 semester GPA: "; cin >> st2_semester_GPA;

                cout << "Enter student 3 name: ";       cin >> st3_name;
                cout << "Enter student 3 FSC marks: ";  cin >> st3_fsc;
                cout << "Enter student 3 semester GPA: "; cin >> st3_semester_GPA;

                cout << "Enter student 4 name: ";       cin >> st4_name;
                cout << "Enter student 4 FSC marks: ";  cin >> st4_fsc;
                cout << "Enter student 4 semester GPA: "; cin >> st4_semester_GPA;

                cout << "Enter student 5 name: ";       cin >> st5_name;
                cout << "Enter student 5 FSC marks: ";  cin >> st5_fsc;
                cout << "Enter student 5 semester GPA: "; cin >> st5_semester_GPA;

                cout << "Enter student 6 name: ";       cin >> st6_name;
                cout << "Enter student 6 FSC marks: ";  cin >> st6_fsc;
                cout << "Enter student 6 semester GPA: "; cin >> st6_semester_GPA;

                cout << "Total marks (default 1100, enter 0 to keep): ";
                float tmp; cin >> tmp;
                if (tmp != 0) total_marks = tmp;

                hasBasicInfo = true;
                cout << "Student information saved successfully." << endl;
            }
        }

        // ----------------------------------------------------------------
        else if (option == 2)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet. Please add student information first (option 1)." << endl;
            }
            else if (hasPersonalInfo)
            {
                cout << "You cannot add more information (already entered)." << endl;
            }
            else
            {
                string fatherName, cnic, domicile, town;
                cout << "Enter Father Name: ";         cin >> fatherName;
                cout << "Enter CNIC: ";                cin >> cnic;
                cout << "Enter Domicile District: ";   cin >> domicile;
                cout << "Enter Town/Village/Chak: ";   cin >> town;
                hasPersonalInfo = true;
                cout << "Personal information saved successfully." << endl;
            }
        }

        // ----------------------------------------------------------------
        else if (option == 3)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet. Please add student information first (option 1)." << endl;
            }
            else if (hasFieldOfStudy)
            {
                cout << "You cannot add more information (already entered)." << endl;
            }
            else
            {
                string uniName, dept, semYear, regNo;
                cout << "Enter University Name: ";           cin >> uniName;
                cout << "Enter Department/Degree Title: ";   cin >> dept;
                cout << "Enter Semester Year: ";             cin >> semYear;
                cout << "Enter University Registration No: "; cin >> regNo;
                hasFieldOfStudy = true;
                cout << "Field of study saved successfully." << endl;
            }
        }

        // ----------------------------------------------------------------
        else if (option == 4)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet. Please add student information first (option 1)." << endl;
            }
            else if (hasHobbies)
            {
                cout << "You cannot add more information (already entered)." << endl;
            }
            else
            {
                string hobby;
                cout << "Enter Hobby/Activity name: "; cin >> hobby;
                hasHobbies = true;
                cout << "Hobbies/Activities saved successfully." << endl;
            }
        }

        // ----------------------------------------------------------------
        else if (option == 5)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet. Please add student information first (option 1)." << endl;
            }
            else if (hasFinancialInfo)
            {
                cout << "You cannot add more information (already entered)." << endl;
            }
            else
            {
                float income;
                string otherIncome;
                cout << "Enter Family Monthly Income: "; cin >> income;
                cout << "Other source of income (yes/no): "; cin >> otherIncome;
                hasFinancialInfo = true;
                cout << "Financial information saved successfully." << endl;
            }
        }

        // ----------------------------------------------------------------
        else if (option == 6)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet. Please add student information first (option 1)." << endl;
            }
            else if (hasStatement)
            {
                cout << "You cannot add more information (already entered)." << endl;
            }
            else
            {
                string reason;
                cout << "Why do you need a Scholarship? "; cin >> reason;
                hasStatement = true;
                cout << "Personal statement saved successfully." << endl;
            }
        }

        // ----------------------------------------------------------------
        else if (option == 7)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet. Please add student information first (option 1)." << endl;
            }
            else if (hasSector)
            {
                cout << "You cannot add more information (already entered)." << endl;
            }
            else
            {
                string sectorName;
                cout << "Enter Sector Name: "; cin >> sectorName;
                hasSector = true;
                cout << "Sector name saved successfully." << endl;
            }
        }

        // ----------------------------------------------------------------
        else if (option == 8)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet." << endl;
            }
            else
            {
                cout << "\nName\t\tFSC Marks\tSemester GPA" << endl;
                cout << "----\t\t---------\t------------" << endl;
                cout << st1_name << "\t\t" << st1_fsc << "\t\t" << st1_semester_GPA << endl;
                cout << st2_name << "\t\t" << st2_fsc << "\t\t" << st2_semester_GPA << endl;
                cout << st3_name << "\t\t" << st3_fsc << "\t\t" << st3_semester_GPA << endl;
                cout << st4_name << "\t\t" << st4_fsc << "\t\t" << st4_semester_GPA << endl;
                cout << st5_name << "\t\t" << st5_fsc << "\t\t" << st5_semester_GPA << endl;
                cout << st6_name << "\t\t" << st6_fsc << "\t\t" << st6_semester_GPA << endl;
            }
        }

        // ----------------------------------------------------------------
        else if (option == 9)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet." << endl;
            }
            else
            {
                // Calculate merit scores
                merit1 = (st1_fsc / total_marks) * 40 + (st1_semester_GPA / total_GPA) * 60;
                merit2 = (st2_fsc / total_marks) * 40 + (st2_semester_GPA / total_GPA) * 60;
                merit3 = (st3_fsc / total_marks) * 40 + (st3_semester_GPA / total_GPA) * 60;
                merit4 = (st4_fsc / total_marks) * 40 + (st4_semester_GPA / total_GPA) * 60;
                merit5 = (st5_fsc / total_marks) * 40 + (st5_semester_GPA / total_GPA) * 60;
                merit6 = (st6_fsc / total_marks) * 40 + (st6_semester_GPA / total_GPA) * 60;

                // Store names and merits in arrays for sorting
                string names[6]  = {st1_name, st2_name, st3_name, st4_name, st5_name, st6_name};
                float  merits[6] = {merit1,   merit2,   merit3,   merit4,   merit5,   merit6  };

                // Bubble sort descending
                for (int i = 0; i < 5; i++)
                {
                    for (int j = 0; j < 5 - i; j++)
                    {
                        if (merits[j] < merits[j + 1])
                        {
                            float tmpM = merits[j]; merits[j] = merits[j + 1]; merits[j + 1] = tmpM;
                            string tmpN = names[j];  names[j]  = names[j + 1];  names[j + 1]  = tmpN;
                        }
                    }
                }

                cout << "\nRank\tName\t\tMerit Score" << endl;
                cout << "----\t----\t\t-----------" << endl;
                for (int i = 0; i < 6; i++)
                {
                    cout << (i + 1) << "\t" << names[i] << "\t\t" << merits[i] << endl;
                }
            }
        }

        // ----------------------------------------------------------------
        else if (option == 10)
        {
            if (!hasBasicInfo)
            {
                cout << "You have no record yet." << endl;
            }
            else
            {
                // Recalculate merits for verification
                merit1 = (st1_fsc / total_marks) * 40 + (st1_semester_GPA / total_GPA) * 60;
                merit2 = (st2_fsc / total_marks) * 40 + (st2_semester_GPA / total_GPA) * 60;
                merit3 = (st3_fsc / total_marks) * 40 + (st3_semester_GPA / total_GPA) * 60;
                merit4 = (st4_fsc / total_marks) * 40 + (st4_semester_GPA / total_GPA) * 60;
                merit5 = (st5_fsc / total_marks) * 40 + (st5_semester_GPA / total_GPA) * 60;
                merit6 = (st6_fsc / total_marks) * 40 + (st6_semester_GPA / total_GPA) * 60;

                float threshold = 50.0; // minimum merit score to be eligible
                cout << "\nVerification Results:" << endl;
                cout << "--------------------" << endl;

                string names[6]  = {st1_name, st2_name, st3_name, st4_name, st5_name, st6_name};
                float  merits[6] = {merit1,   merit2,   merit3,   merit4,   merit5,   merit6  };

                for (int i = 0; i < 6; i++)
                {
                    cout << names[i] << ": Merit = " << merits[i];
                    if (merits[i] >= threshold)
                        cout << " --> Eligible for Scholarship" << endl;
                    else
                        cout << " --> Not Eligible" << endl;
                }
            }
        }

        // ----------------------------------------------------------------
        else if (option == 11)
        {
            cout << "Exiting the system. Goodbye!" << endl;
        }

        // ----------------------------------------------------------------
        else
        {
            cout << "Invalid option. Please enter a number between 1 and 11." << endl;
        }
    }

    return 0;
}