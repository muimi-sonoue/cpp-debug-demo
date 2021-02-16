#pragma once

class Student {
    public:
        Student();
        ~Student();

        int GetID();
        void SetID(int id);

        float GetMidTerm(); // get the midterm grade
        void SetMidTerm(float midterm); // set the midterm grade
        float GetFinals(); // get the finals grade
        void SetFinals(float finals); // set the finals grade
        float GetCumulative(); // get the semester cumulative grade
        void SetCumulative(); // set the semester cumulative grade

    private:
        const float MIDTERM_WEIGHT = 0.4;
        const float FINALS_WEIGHT = 0.6;
        int id;
        float midterm;
        float finals;
        float cumulative;
};