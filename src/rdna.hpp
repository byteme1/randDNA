#include <iostream>
#include <string>
#include <vector>
#include <random>

using namespace std;

string randDNA(int seed, string bases, int n)
{
  std::random_device rd//will be used to seed engine eng1
  std::mt19937 eng1(rd());//produce different output

  //Declaring variables
  int seed = 0;
  int z    = 0;
  vector<string> bases;

  //initialize vector with strings using push_back
  bases.push_back("C");
  bases.push_back("G");
  bases.push_back("A");
  bases.push_back("T");  

  //uniform distribution 
  std::uniform_int_distribution<> unifrm(0, bases.size()-1);

  //generate the DNA 
  for(unsigned int i = 0; i < n; i++)
   {
     //get index between 0 and bases.size()-1
     int randomIndex = unifrm(eng1);
     
     //output results
     cout<<bases[randomIndex];

  }//end of for loop
  cout<<endl;

  system("pause");
  return bases;
}


