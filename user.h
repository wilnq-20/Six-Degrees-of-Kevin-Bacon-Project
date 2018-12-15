#ifndef USER_H
#define USER_H
#include <string>
#include <vector>
#include <iostream>

using namespace std;
using std::vector; 

class User {
 public:
  User(int num, string user, int b_year, int zip_code, vector <int> friends_list);    //class constructor
	~User();          //class destructor
	void add_friend(int num);         //accepts ID of user to add as friend    
  void delete_friend(int num);      //accepts ID of user to delete as a friend
  string get_name();            //accessor function that returns user name
  int get_id();       //accessor function that returns user id 
  int get_year();      //accessor function that returns user year
  int get_zip();      // accessor function that returns user zip 
  int get_depth();   //following two are used in bfs implementation along with bottom two
  int get_pred();
  vector <int>* get_friends();
  void set_depth(int num); //check if needed for 6
  void set_pred(int num);   //check if needed for 6

 private:
  int id;
	string name;
	int year;
	int zip;
	vector<int> friends;		
	int depth, predecessor;  //data members for project 6 

};


#endif
