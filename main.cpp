#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// * cin.ignore();

// int main()
// {
//   char myChar;
//   cout << "Enter q: " << endl;
//   cin.ignore(5, 'q');
//   cin >> myChar;
//   cout << "myChar is " << myChar << endl;

//   return 0;
// }

// Input Failure program

int main()
{
  string name;
  int age = 0;
  int weight = 0;
  double height = 0.0;

  cout << "Line 10: Enter name, age, weight, and "
       << "height: ";
  cin >> name >> age >> weight >> height;
  cout << endl;
  cout << "Line 13: Name: " << name << endl;
  cout << "Line 14: Age: " << age << endl;
  cout << "Line 15: Weight: " << weight << endl;
  cout << "Line 16: Height: " << height << endl;

  return 0;
}
// sample input 1: Sam 35 q56 6.2
// output Sam 35 0 0
// I was wondering why 0 is printed instead of 0.0 for height, so I initialized it to a different value.
// When double height = 6.9
// sample input 2: Sam 35.0 156 6.2
// output Sam 35 0 6.9
// When double height = 6.0
// output Sam 35 0 6
// When double height = 6.07
// output Sam 35 0 6.07
// Conclusion: the decimal point and the trailing zeros don't get printed
// Later, I learned about the fixed manipulator.

// int main()
// {
//   int score1, score2, score3, score4, score5;
//   double average;

//   // input prompt
//   cout << "Enter five test scores" << endl;

//   // store inputs
//   cin >> score1 >> score2 >> score3 >> score4 >> score5;

//   // compute the average of those five scores
//   average = (score1 + score2 + score3 + score4 + score5) / 5;

//   // output the average
//   cout << fixed << setprecision(2); // set precision to 2 decimal places
//   cout << "The average is " << average << "%" << endl;

//   // output the grade depending on the average

//   if (average >= 90)
//   {
//     cout << "The overall grade is A.";
//   }
//   else if (average >= 80)
//   {
//     cout << "The overall grade is B.";
//   }
//   else if (average >= 70)
//   {
//     cout << "The overall grade is C.";
//   }
//   else if (average >= 60)
//   {
//     cout << "The overall grade is D.";
//   }
//   else
//   {
//     cout << "The overall grade is F.";
//   }

//   return 0;
// }