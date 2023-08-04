#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Add a member function
//int get_friend_count()
//to the Person class of Exercise P9.2

class Person{
public:
  void befriend(string iname);
  void unfriend(string iname);
  string get_friend_names() const;
  int get_friend_count() const;
private:
  vector<string> friendlist;
};
//defines the Person class with the assigned member functions like before

string Person::get_friend_names() const{
  string strfriendlist;
  int i;
  for(i = 0; i < friendlist.size(); i++){
    strfriendlist = friendlist[i] + " " + strfriendlist;
  }
  return strfriendlist;
}
//converts the values within the string vector to an output string to display to the screen

int Person::get_friend_count() const{
  return friendlist.size();
}
//this new function simply returns the size of the friendlist vector to get the friend count

void Person::unfriend(string iname){
  vector<string>::iterator result = find(friendlist.begin(), friendlist.end(), iname);
  friendlist.erase(result);
}
//new unfriend code reworked. since the previous problem replaced the friends name with blank space, it caused the friend count to work incorrectly so i residesigned it using the erase command to actually remove the element. i had to include <algorithm> at the header in order to do this

void Person::befriend(string iname){
  friendlist.push_back(iname);
}
//adds a friend by using the push back command

int main() {
  Person Me;
  cout << "Enter the name of a friend to start: " << endl;
  string name;
  cin >> name;
  Me.befriend(name);
  string myfriendlist = Me.get_friend_names();
  cout << "You have " << Me.get_friend_count() << " friend(s)." << endl;
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
      cout << "You have " << Me.get_friend_count() << " friend(s)." << endl;
      cout << "Here are your friends: " << myfriendlist << endl;
    }
    else if (iaction == "unfriend"){
      cout << "Enter the name of the friend you would like to remove: " << endl;
      string name3;
      cin >> name3;
      Me.unfriend(name3);
      string myfriendlist = Me.get_friend_names();
      cout << "You have " << Me.get_friend_count() << " friend(s)." << endl;
      cout << "Here are your friends: " << myfriendlist << endl;
    }
    //recieves user input to add friends, remove friends, or stop the program. this is done with a while loop
    //prints friend count to the screen as well
    }
  return 0;
}