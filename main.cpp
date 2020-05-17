#include <iostream>

using namespace std;

void numberGuess() {
  srand (time(NULL));
  int num;
  int guesses = 0;
  bool isRunning = true;
  int randomNumber = (rand() % 10) + 1; 
      
  while (isRunning)
  {
    cout << "Pick a number between 1-10" << endl;
    cin >> num;
    guesses++;
    if (num == randomNumber) 
    {
      cout << "Congrats you got lucky and picked the right number. It took you "<< guesses << " guesses to find the right number." << endl;
      isRunning = false;
    }
    else if (num < randomNumber)
    {
      cout << "The number you picked is incorrect and is less than the right answer." << endl;
    }
    else
    {
      cout << "The number you picked is incorrect and is greater than the right answer." << endl;
    }
    
  }
}

int main() {
  numberGuess();
}
                
