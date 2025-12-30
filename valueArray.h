#include <iostream>
#include <string>
#include <vector>

class decValue{
    private:
        double userValue = 0;
        int counter = 0;
        std::vector<double> valueArray;
    public:
        double GetUserValue();
        int GetCounter();
        double GetValueArray();

        void SetUserValue(double uVal);
        void SetCounter(int count);
        void SetUserValue(double valArr);
        void LoadValArr(double valArr);
        void Print();

    }