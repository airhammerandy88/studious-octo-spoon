#include <iostream>
#include <string>
#include <vector>

int main(){
  double userIn1 = 0;
  int expressNum = 0;
  
  double<vector> userInputArray;
  std::string<vector> mathTypeArray;
  double<vector> expressionArray;
  std::string mathType;
  //std::string negate;
  double answerOut = 0;
  //bool unsummon = false;
  
  //while(unsummon == false){
  std::cout << "Input math expression, with 2 numbers and, -, +, * /" << "example: 3 + 4" << std::endl;
  
  std::cin >> expressNum
  
  for(int i = 0; i < expressNum; ++i){ //loads userinput numbers
  std::cin >> userIn1;
  userInputArray.push_back(i);
  }
  
  for(int i = 0; i < expressNum; ++i){ //loads mathtype strings
  std::cin >> mathType;
  if (mathType != "-" || mathType != "+" || mathType !="*" || mathType !="/"){
    std::cout << "Invaild input " << std:: endl;
    std::cin >> mathType;
  }
  mathTypeArray.push_back(i);
  }
  
  for(int = i; i < expressNum; ++i){
  
  mathTypeArray.at(i);
  if(mathType.at(i) == "-"){
    expressionArray.push_back(i) = -;
  }
  else if(mathType.at(i) == "+"){
    expressionArray.push_back(i) = +;
  }
  else if(mathType == "*"){
    expressionArray.push_back(i) = *;
  }
  else if(mathType == "/"){
    expressionArray.push_back(i) = /;
  }
  else {
    expressionArray.push_back(userInputArray.at(i));
  }
  }
  
  std::cout << userIn1 << " " << mathType << " " << userIn2  << " = " << answerOut << std::endl;
  //std::cout << "to end program type the word off" << std::endl;
 //std::cin >> negate;
  
  //if(negate == "off" || negate == "Off" || negate == "OFF"){
    //unsummon = true;
  //}
  //else {
    //std::cout << "Input new expression to be solved" << std::endl;
  //}
  
  //}  
}