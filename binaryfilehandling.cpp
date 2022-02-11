#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
struct student
{
    char name[20];
    long int phone;
    char email[20];
    int studentNumber;
};
int findstlong(student a) // to find out how many data reads 
{
    int i = 0;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::app);
    while (fbin.read((char *)&a, sizeof(a)))
    {
        i++;
    }
    fbin.close();
    return i;
}
// Delete process with overloading
void deleted(string a)
{
    student st;
    int found = 0;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    fbin.seekg(0);
    fbin.read((char *)&st, sizeof(st));
    while (!fbin.eof())
    {
        if (a != st.name)
        {
            fbout.write((char *)&st, sizeof(st));
        }
        else
        {
            found++;
            cout << "\n\t\t\tSuccessfully Delete Data";
        }
        fbin.read((char *)&st, sizeof(st));
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student Name NO. Not Found....";
    }
    fbout.close();
    fbin.close();
    remove("student.bin");
    rename("record.bin", "student.bin");
}
void deleted(long int a)
{
    student st;
    int found = 0;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    fbin.seekg(0);
    fbin.read((char *)&st, sizeof(st));
    while (!fbin.eof())
    {
        if (a != st.phone)
        {
            fbout.write((char *)&st, sizeof(st));
        }
        else
        {
            found++;
            cout << "\n\t\t\tSuccessfully Delete Data";
        }
        fbin.read((char *)&st, sizeof(st));
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student Name NO. Not Found....";
    }
    fbout.close();
    fbin.close();
    remove("student.bin");
    rename("record.bin", "student.bin");
}
void deleted(int a)
{
    student st;
    int found = 0;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    fbin.seekg(0);
    fbin.read((char *)&st, sizeof(st));
    while (!fbin.eof())
    {
        if (a != st.studentNumber)
        {
            fbout.write((char *)&st, sizeof(st));
        }
        else
        {
            found++;
            cout << "\n\t\t\tSuccessfully Delete Data";
        }
        fbin.read((char *)&st, sizeof(st));
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student Name NO. Not Found....";
    }
    fbout.close();
    fbin.close();
    remove("student.bin");
    rename("record.bin", "student.bin");
}
void deleted(string a, int b)
{
    student st;
    int found = 0;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    fbin.seekg(0);
    fbin.read((char *)&st, sizeof(st));
    while (!fbin.eof())
    {
        if (a != st.email)
        {
            fbout.write((char *)&st, sizeof(st));
        }
        else
        {
            found++;
            cout << "\n\t\t\tSuccessfully Delete Data";
        }
        fbin.read((char *)&st, sizeof(st));
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student Name NO. Not Found....";
    }
    fbout.close();
    fbin.close();
    remove("student.bin");
    rename("record.bin", "student.bin");
}
// search process with overloading 
void search(long int a)
{
    student st;
    int found;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::app);
    fbin.read((char *)&st, sizeof(st));
    while (fbin.read((char *)&st, sizeof(st)))
    {
        if (a == st.phone)
        {
            cout << "\n\n\t\t\tStudent No:" << st.studentNumber << "\n";
            cout << "\t\t\tName: " << st.name << "\n";
            cout << "\t\t\tTelephone No.: " << st.phone << "\n";
            cout << "\t\t\tEmail: " << st.email << "\n";
            cout << "\n\n\n\n";
            found = 1;
        }
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student phone number Not Found....";
    }
    fbin.close();
}
void search(string a)
{
    student st;
    int found;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::app);
    fbin.read((char *)&st, sizeof(st));
    while (fbin.read((char *)&st, sizeof(st)))
    {
        if (a == st.name)
        {

            cout << "\n\n\t\t\tStudent No:" << st.studentNumber << "\n";
            cout << "\t\t\tName: " << st.name << "\n";
            cout << "\t\t\tTelephone No.: " << st.phone << "\n";
            cout << "\t\t\tEmail: " << st.email << "\n";
            cout << "\n\n\n\n";
            found = 1;
        }
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student name Not Found....";
    }
    fbin.close();
}
void search(int a)
{
    student st;
    int found;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::app);
    fbin.read((char *)&st, sizeof(st));
    while (fbin.read((char *)&st, sizeof(st)))
    {
        if (a == st.studentNumber)
        {
            cout << "\n\n\t\t\tStudent No:" << st.studentNumber << "\n";
            cout << "\t\t\tName: " << st.name << "\n";
            cout << "\t\t\tTelephone No.: " << st.phone << "\n";
            cout << "\t\t\tEmail: " << st.email << "\n";
            cout << "\n\n\n\n";
            found = 1;
        }
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student student number Not Found....";
    }
    fbin.close();
}
void search(string a, int b)
{
    student st;
    int found;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::app);
    fbin.read((char *)&st, sizeof(st));
    while (fbin.read((char *)&st, sizeof(st)))
    {
        if (a == st.email)
        {
            cout << "\n\n\t\t\tStudent No:" << st.studentNumber << "\n";
            cout << "\t\t\tName: " << st.name << "\n";
            cout << "\t\t\tTelephone No.: " << st.phone << "\n";
            cout << "\t\t\tEmail: " << st.email << "\n";
            cout << "\n\n\n\n";
            found = 1;
        }
    }
    if (found == 0)
    {
        cout << "\n\t\t\t Student phone number Not Found....";
    }
    fbin.close();
}
// modify/update process with overloading 
void modifyy(string a)
{
    student st;
    int found;
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    fbin.read((char *)&st, sizeof(st));
    while (!fbin.eof())
    {
        if (a != st.name)
            fbout.write((char *)&st, sizeof(st));
        else
        {
            cout << "\n\t\t\tEnter Name: ";
            cin >> st.name;
            cout << "\t\t\tEnter Telephone No.: ";
            cin >> st.phone;
            cout << "\t\t\tEnter email: ";
            cin >> st.email;
            cout << "\t\t\tEnter Student No.: ";
            cin >> st.studentNumber;
            fbout.write((char *)&st, sizeof(st));
            found++;
        }
        fbin.read((char *)&st, sizeof(st));
    }
    if (found == 0)
    {
        cout << "\n\n\t\t\t Student Roll No. Not Found....";
    }
    fbin.close();
    fbout.close();
    remove("student.bin");
    rename("record.bin", "student.bin");
}

void modifyy(long int a)
{
    student st;
    int found;
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    fbin.read((char *)&st, sizeof(st));
    while (!fbin.eof())
    {
        if (a != st.phone)
            fbout.write((char *)&st, sizeof(st));
        else
        {
            cout << "\n\t\t\tEnter Name: ";
            cin >> st.name;
            cout << "\t\t\tEnter Telephone No.: ";
            cin >> st.phone;
            cout << "\t\t\tEnter email: ";
            cin >> st.email;
            cout << "\t\t\tEnter Student No.: ";
            cin >> st.studentNumber;
            fbout.write((char *)&st, sizeof(st));
            found++;
        }
        fbin.read((char *)&st, sizeof(st));
    }
    if (found == 0)
    {
        cout << "\n\n\t\t\t Student Roll No. Not Found....";
    }
    fbin.close();
    fbout.close();
    remove("student.bin");
    rename("record.bin", "student.bin");
}
void modifyy(string a, int b)
{
    student st;
    int found;
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    fbin.read((char *)&st, sizeof(st));
    while (!fbin.eof())
    {
        if (a != st.email)
            fbout.write((char *)&st, sizeof(st));
        else
        {
            cout << "\n\t\t\tEnter Name: ";
            cin >> st.name;
            cout << "\t\t\tEnter Telephone No.: ";
            cin >> st.phone;
            cout << "\t\t\tEnter email: ";
            cin >> st.email;
            cout << "\t\t\tEnter Student No.: ";
            cin >> st.studentNumber;
            fbout.write((char *)&st, sizeof(st));
            found++;
        }
        fbin.read((char *)&st, sizeof(st));
    }
    if (found == 0)
    {
        cout << "\n\n\t\t\t Student Roll No. Not Found....";
    }
    fbin.close();
    fbout.close();
    remove("student.bin");
    rename("record.bin", "student.bin");
}
void modifyy(int a)
{
    student st;
    int found;
    ofstream fbout("record.bin", ios::binary | ios::out | ios::app | ios::in);
    ifstream fbin("student.bin", ios::binary | ios::in | ios::out | ios::app);
    fbin.read((char *)&st, sizeof(st));
    while (!fbin.eof())
    {
        if (a != st.studentNumber)
            fbout.write((char *)&st, sizeof(st));
        else
        {
            cout << "\n\t\t\tEnter Name: ";
            cin >> st.name;
            cout << "\t\t\tEnter Telephone No.: ";
            cin >> st.phone;
            cout << "\t\t\tEnter email: ";
            cin >> st.email;
            cout << "\t\t\tEnter Student No.: ";
            cin >> st.studentNumber;
            fbout.write((char *)&st, sizeof(st));
            found++;
        }
        fbin.read((char *)&st, sizeof(st));
    }
    if (found == 0)
    {
        cout << "\n\n\t\t\t Student Roll No. Not Found....";
    }
    fbin.close();
    fbout.close();
    remove("student.bin");
    rename("record.bin", "student.bin");
}
void insert() // Add student details
{
    student st;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Add Student Details ---------------------------------------------" << endl;
    cout << "\t\t\tEnter Name: ";
    cin >> st.name;
    cout << "\t\t\tEnter Telephone No.: ";
    cin >> st.phone;
    cout << "\t\t\tEnter email: ";
    cin >> st.email;
    cout << "\t\t\tEnter Student No.: ";
    cin >> st.studentNumber;

    ofstream fbout("student.bin", ios::binary | ios::out | ios::app);
    if (!fbout)
    {
        cout << "false";
    }
    else
    {
        fbout.write((char *)&st, sizeof(st));
        fbout.close();
    }
}
bool comparestnumber(student st3, student st4)
{
    if (st3.studentNumber < st4.studentNumber)
    {
        return 1;
    }
    return 0;
}
void display() // Display data of student
{
    student st;
    int a = findstlong(st);
    student st1[a];
    int i = 0;
    ifstream fbin("student.bin", ios::binary | ios::in | ios::app);
    if (!fbin)
    {
        cout << "\n\t\t\tNo Data is Present... ";
        fbin.close();
    }
    else
    {
        fbin.read((char *)&st, sizeof(st));
        while (fbin.read((char *)&st, sizeof(st)))
        {
            st1[i] = st;
            i++;
        }
        sort(st1, st1 + i, comparestnumber);
        for (int a = 0; a < i; a++)
        {
            cout << "\t\t\tStudent No.: " << st1[a].studentNumber << "\n";
            cout << "\t\t\tName: " << st1[a].name << "\n";
            cout << "\t\t\tTelephone No.: " << st1[a].phone << "\n";
            cout << "\t\t\temail: " << st1[a].email << "\n";

            cout << "\n\n\n\n";
        }

        fbin.close();
    }
}
void search() // search data of student 
{
    string namee;
    long int phonee;
    string emaill;
    int studentNumberr;
    int b = 1;
menu2start:
    int choice1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Record Table --------------------------------------------" << endl;
    cout << "\t\t\t What information do you want to search with? " << endl;
    cout << "\t\t\t 1. Name" << endl;
    cout << "\t\t\t 2. Phone number" << endl;
    cout << "\t\t\t 3. Email" << endl;
    cout << "\t\t\t 4. Student number" << endl;
    cin >> choice1;
    switch (choice1)
    {
    case 1:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Table --------------------------------------------" << endl;
        cout << "\nEnter name of Student which you want to search: ";
        cin >> namee;
        search(namee);
        break;
    case 2:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Table --------------------------------------------" << endl;
        cout << "\nEnter phone number of Student which you want to search: ";
        cin >> phonee;
        search(phonee);
        break;
    case 3:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Table --------------------------------------------" << endl;
        cout << "\nEnter email of Student which you want to search: ";
        cin >> emaill;
        search(emaill, b);
        break;
    case 4:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Search Table --------------------------------------------" << endl;
        cout << "\nEnter Student number of Student which you want to search: ";
        cin >> studentNumberr;
        search(studentNumberr);
        break;
    default:
        cout << "\n\n\t\t\t Invalid Choice... Please Try Again...";
        goto menu2start;
    }
}
void deleted() // deleted data of student
{
    string namee;
    long int phonee;
    string emaill;
    int studentNumberr;
    int b = 1;
menu2start:
    int choice1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Record Table --------------------------------------------" << endl;
    cout << "\t\t\t What information do you want to delete with? " << endl;
    cout << "\t\t\t 1. Name" << endl;
    cout << "\t\t\t 2. Phone number" << endl;
    cout << "\t\t\t 3. Email" << endl;
    cout << "\t\t\t 4. Student number" << endl;
    cin >> choice1;
    switch (choice1)
    {
    case 1:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Delete Student Details -----------------------------------------------------" << endl;
        cout << "\nEnter name of Student which you want to delete: ";
        cin >> namee;
        deleted(namee);
        break;
    case 2:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Delete Student Details -----------------------------------------------------" << endl;
        cout << "\nEnter phone number of Student which you want to delete: ";
        cin >> phonee;
        deleted(phonee);
        break;
    case 3:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Delete Student Details -----------------------------------------------------" << endl;
        cout << "\nEnter email of Student which you want to delete: ";
        cin >> emaill;
        deleted(emaill, b);
        break;
    case 4:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Delete Student Details -----------------------------------------------------" << endl;
        cout << "\nEnter Student number of Student which you want to delete: ";
        cin >> studentNumberr;
        deleted(studentNumberr);
        break;
    default:
        cout << "\n\n\t\t\t Invalid Choice... Please Try Again...";
        goto menu2start;
    }
}
void modifyy() // modify/update data of student
{
    string namee;
    long int phonee;
    string emaill;
    int studentNumberr;
    int b = 1;
menu2start:
    int choice1;
    cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------- Student Modify Details --------------------------------------------" << endl;
    cout << "\t\t\t What information do you want to modify with? " << endl;
    cout << "\t\t\t 1. Name" << endl;
    cout << "\t\t\t 2. Phone number" << endl;
    cout << "\t\t\t 3. Email" << endl;
    cout << "\t\t\t 4. Student number" << endl;
    cin >> choice1;
    switch (choice1)
    {
    case 1:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Modify Details --------------------------------------------" << endl;
        cout << "\nEnter name of Student which you modify to search: ";
        cin >> namee;
        modifyy(namee);
        break;
    case 2:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Modify Details --------------------------------------------" << endl;
        cout << "\nEnter phone number of Student which you modify to search: ";
        cin >> phonee;
        modifyy(phonee);
        break;
    case 3:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Modify Details --------------------------------------------" << endl;
        cout << "\nEnter email of Student which you modify to search: ";
        cin >> emaill;
        modifyy(emaill, b);
        break;
    case 4:
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Student Modify Details --------------------------------------------" << endl;
        cout << "\nEnter Student number of Student which you modify to search: ";
        cin >> studentNumberr;
        modifyy(studentNumberr);
        break;
    default:
        cout << "\n\n\t\t\t Invalid Choice... Please Try Again...";
        goto menu2start;
    }
}

int main() // main function 
{
menustart:
    student st;
    int choice;
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t| STUDENT MANAGEMENT SYSTEM |" << endl;
    cout << "\t\t\t-----------------------------" << endl;
    cout << "\t\t\t 1. Enter New Record" << endl;
    cout << "\t\t\t 2. Display Record" << endl;
    cout << "\t\t\t 3. Modify Record" << endl;
    cout << "\t\t\t 4. Search Record" << endl;
    cout << "\t\t\t 5. Delete Record" << endl;
    cout << "\t\t\t 6. Exit\n"
         << endl;

    cout << "\t\t\t............................" << endl;
    cout << "\t\t\tChoose Options:[1/2/3/4/5/6]" << endl;
    cout << "\t\t\t............................" << endl;
    cout << " Enter Your Choose: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        insert();
        break;
    case 2:
        display();
        break;
    case 3:
        modifyy();
        break;
    case 4:
        search();
        break;
    case 5:
        deleted();
        break;
    case 6:
        cout << "\n\t\t\t Program Is Exit";
        exit(0);
    default:
        cout << "\n\n\t\t\t Invalid Choice... Please Try Again...";
    }
    goto menustart;

    return 0;
}
