#include "Student.h"


Student::Student() 
{
    
}

Student::~Student() 
{
    
}

int Student::GetID() 
{
    return this->id;
}

void Student::SetID(int id) 
{
    this->id = id;
}

float Student::GetMidTerm() 
{
    return this->midterm;
}

void Student::SetMidTerm(float midterm) 
{
    this->midterm = midterm;
}

float Student::GetFinals() 
{
    return this->finals;
}

void Student::SetFinals(float finals) 
{
    this->finals = finals;
}

float Student::GetCumulative() 
{
    return this->cumulative;
}

void Student::SetCumulative() 
{
    this->cumulative = GetMidTerm()*MIDTERM_WEIGHT + GetFinals()*FINALS_WEIGHT;
}