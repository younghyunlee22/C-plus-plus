// #include <iostream>
// #include <fstream>
// #include <string>
// #include <iomanip>

// using namespace std;

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

// int main()
// {
//   string name;
//   int age = 0;
//   int weight = 0;
//   double height = 0.0;

//   cout << "Line 10: Enter name, age, weight, and "
//        << "height: ";
//   cin >> name >> age >> weight >> height;
//   cout << endl;
//   cout << "Line 13: Name: " << name << endl;
//   cout << "Line 14: Age: " << age << endl;
//   cout << "Line 15: Weight: " << weight << endl;
//   cout << "Line 16: Height: " << height << endl;

//   return 0;
// }
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
// Later, I learned about showpoint manipulator.

// Example: scientific and fixed

// int main()
// {
//   double hours = 35.45, rate = 15.00, tolerance = 0.01000;

//   cout << scientific; // Set output to scientific notation
//   cout << "Scientific notation: " << endl;
//   cout << "Line 19: hours = " << hours << ", rate = " << rate
//        << ", pay = " << hours * rate
//        << ", tolerance = " << tolerance << endl;

//   cout << fixed; // Set output to fixed decimal notation
//   cout << "Fixed decimal notation: " << endl;
//   cout << "Line 22: hours = " << hours << ", rate = " << rate
//        << ", pay = " << hours * rate
//        << ", tolerance = " << tolerance << endl;

//   return 0;
// }

/* output:
Scientific notation:
Line 19: hours = 3.545000e+01, rate = 1.500000e+01, pay = 5.317500e+02, tolerance = 1.000000e-02
Fixed decimal notation:
Line 22: hours = 35.450000, rate = 15.000000, pay = 531.750000, tolerance = 0.010000
*/

// // Example: setprecision, fixed, showpoint

// int main()
// {
//   // cout << showpoint;
//   // cout << "With showpoint: " << 123.00 << endl;
//   // // output: 123.000

//   // cout << fixed;
//   // cout << "Without showpoint: " << 123.00 << endl;
//   // // output: 123.000000

//   // cout << fixed << showpoint;
//   // cout << "fixed && showpoint: " << 123.00 << endl;
//   // // output: 123.000000 (following fixed)

//   // cout << fixed << showpoint << setprecision(2);
//   // cout << "fixed && showpoint && setprecision(2): " << 123.000 << endl;
//   // // output: 123.00

//   // cout << fixed << setprecision(2);
//   // cout << "fixed && setprecision(2): " << 123.000 << endl;
//   // // output: 123.00

//   // cout << setprecision(2);
//   // cout << 123.000 << endl;
//   // // setprecision without fixed - output: 1.2e+02

//   // cout << showpoint << setprecision(2);
//   // cout << 123.000 << endl;
//   // // setprecision without fixed and with showpoint - output: 1.2e+02

// }

// const double PI = 3.14159265;

// int main()
// {
//   double radius = 12.67;
//   double height = 12.00;

//   cout << fixed << showpoint;

//   cout << "Line 10: setprecision(2): " << setprecision(2) << endl;
//   cout << "Line 11: radius = " << radius << endl;
//   cout << "Line 12: height = " << height << endl;
//   cout << "Line 13: volume = " << PI * radius * radius * height << endl;
//   cout << "Line 14: PI = " << PI << endl
//        << endl;

//   cout << "Line 15: setprecision(3): " << setprecision(3) << endl;
//   cout << "Line 16: radius = " << radius << endl;
//   cout << "Line 17: height = " << height << endl;
//   cout << "Line 18: volume = " << PI * radius * radius * height << endl;
//   cout << "Line 19: PI = " << PI << endl
//        << endl;

//   cout << "Line 20: setprecision(4): " << setprecision(4) << endl;
//   cout << "Line 21: radius = " << radius << endl;
//   cout << "Line 22: height = " << height << endl;
//   cout << "Line 23: volume = " << PI * radius * radius * height << endl;
//   cout << "Line 24: PI = " << PI << endl
//        << endl;

//   cout << "Line 25: " << setprecision(3) << radius << " " << setprecision(2) << height << " ";
//   cout << setprecision(5) << PI << endl;

//   return 0;
// }

// Example: This example illustrates how the function setw works

// int main()
// {
//   int miles = 245;
//   int speed = 55;
//   double hours = 35.45;
//   double error = 3.7564;

//   cout << fixed << showpoint;
//   cout << "123456789012345678901234567890" << endl;

//   cout << setw(5) << miles << endl;

//   cout << setprecision(2);
//   cout << setw(5) << miles << setw(5) << speed << setw(6) << hours << endl;
//   cout << setw(7) << error << endl
//        << endl;

//   cout << setw(5) << speed << setw(5) << miles << setw(7) << hours << endl;
//   cout << setw(7) << error << endl
//        << endl;

//   cout << setw(2) << miles << setw(6) << hours << setw(7) << "error" << endl;
//   cout << setw(7) << "error" << endl;

//   return 0;
// }

// Example: left justification

// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;

// int main()
// {
//   string name = "Jessica";
//   double gpa = 3.75;
//   int scholarship = 7850;

//   cout << "123456789012345678901234567890" << endl;
//   cout << fixed << showpoint << setprecision(2);

//   cout << left;
//   cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship << endl;

//   cout << setfill('*');
//   cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship << endl;

//   cout << setw(10) << name << setfill('!') << setw(7) << gpa << setw(8) << scholarship << endl;
//   cout << setw(7) << gpa << setfill('!') << setw(10) << name << setw(8) << scholarship << endl;

//   cout << right;
//   cout << setfill(' ');
//   cout << setw(10) << name << setw(7) << gpa << setw(8) << scholarship << endl;

//   return 0;
// }

// Convert fahrenheit to celcius
#include <iostream>

using namespace std;

int main()
{
  int fahrenheit;
  int celsius;

  cout << "Enter temperature in Fahrenheit: ";
  cin >> fahrenheit;
  cout << endl;

  celsius = static_cast<int>(
      (5.0 / 9 * (fahrenheit - 32)) + 0.5);

  cout << fahrenheit << " degree F = "
       << celsius << " degree C. " << endl;

  return 0;
}

// grade calculation

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