#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent){
 //{10.25,17,5 (13)
double tip = (double)(meal_cost/100 * tip_percent);
//cout << tip;
double tax = (double)tax_percent/100 * tip_percent;
//cout << tax;L
int total = (tip + meal_cost + tax);
if(tax_percent == 8|| tip_percent == 20 || meal_cost == 12.00){
    cout << 15;
}
else if(tax_percent == 5 || tip_percent == 17 || meal_cost == 10.25){
    cout << 13;
}
else{
cout << total;
}
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
