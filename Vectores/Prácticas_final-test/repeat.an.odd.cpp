#include <vector>
int findOdd(const std::vector<int>& numbers){
  for(int counter: numbers){
    int repeat=0;
    if (numbers.size()==1){
        return counter;
    }
    for (int counter_2:numbers){
        if (counter==counter_2){
        ++repeat;
        }
    }
    if (repeat%2!=0){
        return counter;
    }
  }
}