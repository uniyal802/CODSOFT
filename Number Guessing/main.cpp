#include <iostream>

using namespace std;

int main()
{
    int number = 0;
  int pickedNumber = 0;
  int tries = 0;
cout<<"Pick a number, Player 1: "<<endl;
cin>>pickedNumber;
cout<<"Guess a Number from 0 to 20, player 2" <<endl;

  while (true){

cin>>number;
tries++;

    if (number < pickedNumber){
        cout <<"The number you've choose is too low"<<endl;
    }
    else if (number > pickedNumber){
        cout <<"The number you've choose is too high"<<endl;

    }
    else if(number = pickedNumber){
        cout<<"Yep, that is the right number!"<<endl;
    }
    cout<<"You've had "<<tries<<" attempts" <<endl;

int tries = 0;
  while(tries<3){
        cout<<"That is not easy, try again"<<endl;
        break;
  }
  if(tries > 3  && tries <= 7)
    {
        cout<<"Come on!"<<endl;
        break;

  }
  else if (tries > 7){
  cout<<"You are way too slow, wake up"<<endl;
  break;
  }

}

    return 0;
}
