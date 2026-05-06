// A small clinic wants to assess the health condition of patients using vital
// signs taken during check-up. For each patient, the nurse inputs:
// Temperature (in Celsius)
// Pulse rate (beats per minute)
// Respiratory rate (breaths per minute)

// Evaluate whether each vital is within the safe range:
// Temperature: 36.1 to 37.2°C
// Pulse: 60 to 100 bpm
// Respiratory rate: 12 to 20 bpm
// Print a warning if any of the values are abnormal.
// Keep a count of how many patients were flagged for follow-up.

#include <iostream>
using namespace std;


float temp;
int pulse,resp,num;

void isTempeatureNormal (float temp)
{
    if (temp>36.1 && temp<37.2)
    {
        cout << "Patient" << i << "is within the safe range" << endl;
    }
    else
    {
        cout << "Patient" << i << "needs medical attention for Temprature" << endl;
    }
}

void isPulseNormal(int pulse)
{
    if (pulse>60 && pulse<100)
    {
        cout << "Patient" << i << "is within the safe range" << endl;
    }
    else
    {
        cout << "Patient" << i << "needs medical attention for Pulse" << endl;
    }
}

void isPulseNormal(int resp)
{
    if (resp>12 && resp<20)
    {
        cout << "Patient" << i << "is within the safe range" << endl;
    }
    else
    {
        cout << "Patient" << i << "needs medical attention for Respiratory Rate" << endl;
    }
}

void evaluatePatientVitals(int i)
{
    cout << "Enter Temperature of Patient (C) : ";
    cin >> temp;
    cout << "Enter Pulse of Patient (bpm) : ";
    cin >> pulse;
    cout << "Enter Respiratory Rate of Patient (bpm) : ";
    cin >> resp;

    isTemperatureNormal(temp);
    isPulseNormal(int pulse);
    isRespiratoryRateNormal(int rate);
}

int main()
{
    cout << "Enter number of patients : ";
    cin >> num;
    for (int i=1;i<=num;i++)
    {
        evaluatePatientVitals(i)
    }
}