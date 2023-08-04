#include <iostream>
#include <string>

using namespace std;

//"Enhance the program in Excersize P7.8 so that each student has ten quiz scores. The input contains the student names and quiz scores but no course grades. The program should compute the course grade. If the sum of the quiz scores is at least 90, the grade is an A. If the sum is at least 80, the grade is B, and so on. Then print all students with grade A together with their individual quiz scores, followed by all students with grade B, and so on."

//I have moved over a majority of the code from Problem 7.8

struct Student{
  string firstname;
  string lastname;
  double quiz1;
  double quiz2;
  double quiz3;
  double quiz4;
  double quiz5;
  double quiz6;
  double quiz7;
  double quiz8;
  double quiz9;
  double quiz10;
  char course_grade;
};
//Defines the Student structure with each parameter, new parameters for the ten quizzes have been added

int main(){
  cout << "How many students are in this class?" << endl;
  int class_size;
  cin >> class_size;
  Student student_list[class_size + 1];
//Creates an array of structure data from a user-prompted class_size
  
  for(int i = 1; i <= class_size; i++){
    cout << "Enter the first name, last name, and the ten quiz scores for student " << i << ":" << endl;
    cin >> student_list[i].firstname >> student_list[i].lastname >> student_list[i].quiz1 >> student_list[i].quiz2 >> student_list[i].quiz3 >> student_list[i].quiz4 >> student_list[i].quiz5 >> student_list[i].quiz6 >> student_list[i].quiz7 >> student_list[i].quiz8 >> student_list[i].quiz9 >> student_list[i].quiz10;
  }
//Prompts the user for each name and quiz score

  Student A_students[class_size + 1];
  Student B_students[class_size + 1];
  Student C_students[class_size + 1];
  Student D_students[class_size + 1];
  Student F_students[class_size + 1];
//This allocates empty arrays of structures to place data in
  
  for(int in = 1; in <= class_size; in++){
    if ((student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 >= 90 && (student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 <= 100){
      student_list[in].course_grade = 'A';
      }
    else if ((student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 >= 80 && (student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 < 90){
      student_list[in].course_grade = 'B';
      }
    else if ((student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 >= 70 && (student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 < 80){
      student_list[in].course_grade = 'C';
      }
    else if ((student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 >= 60 && (student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 < 70){
      student_list[in].course_grade = 'D';
      }
    else if ((student_list[in].quiz1 + student_list[in].quiz2 + student_list[in].quiz3 + student_list[in].quiz4 + student_list[in].quiz5 + student_list[in].quiz6 + student_list[in].quiz7 + student_list[in].quiz8 + student_list[in].quiz9 + student_list[in].quiz10) / 10 < 60){
      student_list[in].course_grade = 'F';
      }
  }
//This for loop computes the average of all ten quiz scores and assigns a letter grade to the structure category 'course_grade'

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
//Really basic sorting algorithm; Reads 'course_grade' one by one, placing student names into the empty graded arrays by index. Contains blank entries among filled entries

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
//Prints each entire graded array 1 by 1, checking to see if each entry is not blank before printing
  return 0;
  }