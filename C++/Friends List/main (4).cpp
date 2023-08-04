#include <iostream>
#include <string>
#include <vector>
using namespace std;
// A Person has a name (just a first name for simplicity) and friends. Store the names of the friends in a string, separated by spaces. Provide a constructor that constructs a person with a given name and no friends. Provide member functions
//void befriend(Person p)
//void unfriend(Person p)
//string get_friend_names()

class Person{
public:
  void befriend(string iname);
  void unfriend(string iname);
  string get_friend_names() const;
private:
  vector<string> friendlist;
};
//defines the Person class with the assigned member functions. Since I used a string vector for my data member, I do not need a Constructor function to initialize it.

string Person::get_friend_names() const{
  string strfriendlist;
  int i;
  for(i = 0; i < friendlist.size(); i++){
    strfriendlist = friendlist[i] + " " + strfriendlist;
  }
  return strfriendlist;
}
//converts the values within the string vector to an output string to display to the screen

void Person::befriend(string iname){
  friendlist.push_back(iname);
}
//adds a friend by using the push back command

void Person::unfriend(string iname){
  int i;
  for(i = 0; i < friendlist.size(); i++){
    if (friendlist[i] == iname){
      friendlist[i] = "";
    }
  }
}
//removes a friend by searching through the index of the string vector and replacing what matches the user input with blank space

int main() {
  Person Me;
  cout << "Enter the name of a friend to start: " << endl;
  string name;
  cin >> name;
  Me.befriend(name);
  string myfriendlist = Me.get_friend_names();
  cout << "Here are your friends: " << myfriendlist << endl;
  //initializes the program with one friend

  string iaction;
  while(iaction != "stop"){
    cout << "Enter 'befriend' to add a new friend, 'unfriend' to remove an existing friend ('stop' to end): " << endl;
    cin >> iaction;
    if (iaction == "befriend"){
      cout << "Enter the name of the friend you would like to add: " << endl;
      string name2;
      cin >> name2;
      Me.befriend(name2);
      string myfriendlist = Me.get_friend_names();
      cout << "Here are your friends: " << myfriendlist << endl;
    }
    else if (iaction == "unfriend"){
      cout << "Enter the name of the friend you would like to remove: " << endl;
      string name3;
      cin >> name3;
      Me.unfriend(name3);
      string myfriendlist = Me.get_friend_names();
      cout << "Here are your friends: " << myfriendlist << endl;
    }
    //recieves user input to add friends, remove friends, or stop the program. this is done with a while loop
    }
  return 0;
}