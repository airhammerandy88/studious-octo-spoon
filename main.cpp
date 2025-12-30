#include <iostream>
#include <string>
#include <vector>

int main(){
  double userIn1 = 0;
  int expressNum = 0;
  
  std::vector <double> userInputArray;
  std::vector <std::string> mathTypeArray;
  std::vector <double> expressionArray;
  std::string mathType;
  //std::string negate;
  double answerOut = 0;
  //bool unsummon = false;
  
  //while(unsummon == false){
  std::cout << "Input math expression, with numbers and, -, +, * /" << "example: 3 + 4" << std::endl;
  
  std::cin >> expressNum;
  

  for(int i = 0; i < expressNum; ++i){ //loads userinput numbers
    std::cin >> userIn1;
    userInputArray.push_back(userIn1);
  }
  


  for(int i = 0; i < expressNum; ++i){ //loads mathtype strings
    std::cin >> mathType;
  while (mathType != "-" || mathType != "+" || mathType != "*" || mathType != "/")
  {
    std::cout << "Invaild input " << std:: endl;
    std::cin >> mathType;
  }
 
  mathTypeArray.push_back(mathType);
  }

  for()

}