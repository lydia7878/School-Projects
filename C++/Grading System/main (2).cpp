#include <iostream>
#include <string>

using namespace std;

//"Define a structure 'Student' with a first name, last name, and course grade (A, B, C, D, or F). Write a program that reads input in which each line has the first and last name and course grade, seperated by spaces. Upon reading the input, your program should print all students with grade A, then all students with grade B, and so on."

struct Student{
  string firstname;
  string lastname;
  char course_grade;
};
//Defines the Student structure with each parameter

int main(){
  cout << "How many students are in this class?" << endl;
  int class_size;
  cin >> class_size;
  Student student_list[class_size + 1];
//Creates an array of structure data from a user-prompted class_size
  
  for(int i = 1; i <= class_size; i++){
    cout << "Enter the first name, last name, and course grade for student " << i << ":" << endl;
    cin >> student_list[i].firstname >> student_list[i].lastname >> student_list[i].course_grade;
  }
//Prompts the user for each name and grade

  Student A_students[class_size + 1];
  Student B_students[class_size + 1];
  Student C_students[class_size + 1];
  Student D_students[class_size + 1];
  Student F_students[class_size + 1];
//This allocates empty arrays of structures to place data in
  
  for(int j = 1; j <= class_size; j++){
    if (student_list[j].course_grade == 'A'){
      A_students[j].firstname = student_list[j].firstname;
      A_students[j].lastname = student_list[j].lastname;
      A_students[j].course_grade = student_list[j].course_grade;
      }
    else if (student_list[j].course_grade == 'B'){
      B_students[j].firstname = student_list[j].firstname;
      B_students[j].lastname = student_list[j].lastname;
      B_students[j].course_grade = student_list[j].course_grade;
      }
    else if (student_list[j].course_grade == 'C'){
      C_students[j].firstname = student_list[j].firstname;
      C_students[j].lastname = student_list[j].lastname;
      C_students[j].course_grade = student_list[j].course_grade;
      }
    else if (student_list[j].course_grade == 'D'){
      D_students[j].firstname = student_list[j].firstname;
      D_students[j].lastname = student_list[j].lastname;
      D_students[j].course_grade = student_list[j].course_grade;
      }
    else if (student_list[j].course_grade == 'F'){
      F_students[j].firstname = student_list[j].firstname;
      F_students[j].lastname = student_list[j].lastname;
      F_students[j].course_grade = student_list[j].course_grade;
      }
    }
//Really basic sorting algorithm; Places student names into grades by index, although contains blank entries among filled entries

  cout << "\nThe grades for this class are: " << endl;
//Header for printing
  
  for(int k = 1; k <= class_size; k++){
    if (A_students[k].course_grade == 'A'){
      cout << A_students[k].firstname << " " << A_students[k].lastname << " " << A_students[k].course_grade << endl;
    }
    }
  for(int k = 1; k <= class_size; k++){
    if (B_students[k].course_grade == 'B'){
      cout << B_students[k].firstname << " " << B_students[k].lastname << " " << B_students[k].course_grade << endl;
    }
    }
  for(int k = 1; k <= class_size; k++){
    if (C_students[k].course_grade == 'C'){
      cout << C_students[k].firstname << " " << C_students[k].lastname << " " << C_students[k].course_grade << endl;
    }
    }
  for(int k = 1; k <= class_size; k++){
    if (D_students[k].course_grade == 'D'){
      cout << D_students[k].firstname << " " << D_students[k].lastname << " " << D_students[k].course_grade << endl;
    }
    }
  for(int k = 1; k <= class_size; k++){
    if (F_students[k].course_grade == 'F'){
      cout << F_students[k].firstname << " " << F_students[k].lastname << " " << F_students[k].course_grade << endl;
    }
    }
//Prints each graded array 1 by 1, checking to see if each entry is not blank
  return 0;
  }