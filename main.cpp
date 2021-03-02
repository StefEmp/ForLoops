#include <iostream>
#include <vector>
using namespace std;

int main() {
    //1 - 10
for (int i {1}; i <=10; ++i)
    cout << i << endl;
    
    //odd numbers
for (int i {1}; i <=10; i+=2)
    cout << i << endl;
  //10 - 1
for (int i {10}; i > 0; --i)
    cout << i << endl;
    cout << "Blastoff!" << endl;
 // instances where 0 is leftover from 15
for (int i {10}; i <=100; i+=10){
    if (i % 15 == 0)
    cout << i << endl;
}
    // counting up two integers then adding them
for (int i{1}, j{5}; i<=5; ++i, ++j) 
    cout << i << " + " << j << " = " << (i+j) << endl;
    //creating a table of results up to 100 
for (int i{1}; i<=100; ++i){
    cout << i << (i % 10 == 0 ? "\n" : " ");
}
//iterating through a vector and printing the integers
vector <int> nums {10, 20, 30, 40, 50};
for (int unsigned i{0}; i < nums.size(); ++i)
    cout << nums[i] << endl;
    cout << endl;
    return 0;
}
    