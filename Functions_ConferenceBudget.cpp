// You are assisting an academic committee in planning multiple conference
// sessions. Each session involves the following expenses:
// Room booking
// Catering
// Speaker honorarium
// Travel support
//
// For each session, the program should:
// Prompt the user to enter the four cost components.
// Calculate the total cost for the session.
// Check if the session’s total exceeds the allowed per-session limit.
// Add the session’s total to an overall running total.
//
// After all sessions are processed:
// Print the total amount spent.
// Report how many sessions stayed within the limit.
// Report how many sessions exceeded the limit.

#include <iostream>
using namespace std;

int num,above_limit,below_limit;
float sc,lim,total_cost;
//int i=1;

//Calculating cost of each component in a session
float session_cost(int i )
{
    float room,cater,speaker,travel;
    float session_cost;

    cout << "Enter the details of Session " << i << endl;
    cout << "Enter the cost of Room Booking : ";
    cin >> room;
    cout << "Enter the cost of Catering : ";
    cin >> cater;
    cout << "Enter the cost of Speaker honorarium : ";
    cin >> speaker;
    cout << "Enter the cost of Travel support : ";
    cin >> travel;

    session_cost = room + cater + speaker + travel;
    total_cost += session_cost;
    return session_cost;
}

//Checking if Session Cost is exceeding Limit or not
void Limit (float session_cost, float session_limit)
{
    if (session_cost>session_limit)
    {
        above_limit+=1;
    }
    else
    {
        below_limit+=1;
    }
}


//Calling each function and Printing total cost and Limit excesses
int main()
{
    cout << "Enter how many session : ";
    cin >> num;
    cout << "Enter Session Limit : ";
    cin >> lim;
    for (int i=1;i<=num;i++)
    {
        sc=session_cost(i);
        Limit(sc,lim);
    }
    cout << "Total Conference Cost : " << total_cost << endl;
    cout << "Number of sessions below limit : " << below_limit << endl;
    cout << "Number of sessions above limit : " << above_limit << endl;
}