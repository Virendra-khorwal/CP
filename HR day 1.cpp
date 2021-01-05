#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string t;
    

    // Read and save an integer, double, and String to your variables.
    cin >> j;
    cin >> e;
    cin.ignore();
    getline(cin,t);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.int j; double e; string t;

    // Print the sum of both integer variables on a new line.
    cout << i+j<<endl;
    // Print the sum of the double variables on a new line.
   double m = d + e;
    cout <<fixed <<setprecision(1)<<m <<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
cout << s << t;
    return 0;
}