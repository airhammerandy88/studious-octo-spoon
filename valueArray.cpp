#include "valueArray.h"

double decValue::GetUserValue()
{
    return userValue;
}

int decValue::GetCounter()
{
    return counter;
}

double decValue::GetValueArray()
{
    
    for(int i = 0; i < counter;++i){
    return valueArray.at(i);
    std::cout << " " << std::endl;
    }
}

void decValue::SetUserValue(double uVal)
{
   userValue = uVal;  
}

void decValue::LoadValArr(double valArr)
{
    int count = 0;
    count = GetCounter();
    for(int i = 0; i < count; ++i){
}

void decValue::Print()
{
}

void decValue::SetCounter(int count)
{
    std::cin >> counter;
}
