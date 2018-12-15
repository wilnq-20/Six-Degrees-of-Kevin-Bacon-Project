#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "user.h"

using std::vector;
using std::string;
using namespace std;

//class constructor
User::User(int num, string user, int b_year, int zip_code, vector <int> friends_list) {
	id = num;
	name = user;
	year = b_year;
	zip = zip_code;
	friends = friends_list;
	depth = -1;
	predecessor = -1;
}

//class destructor 
User::~User() {
}

//accepts the id of a user to add, and does nothing if user is already a friend of user
void User::add_friend(int num) {
	bool existing_friend = false;
	for (int i = 0; i < friends.size(); i++) {
		if (friends[i] == num) {
			existing_friend = true;
			break;
		}
	}
	if (!existing_friend) {    //adds to friends list if doesn't already exist
		friends.push_back(num);
	}
}

//accepts id of user to delete as friend, and does nothing if id is not in list of friends 
void User::delete_friend(int num) {
	for (int i = 0; i < friends.size(); ++i) {
		if (friends[i] == num) {
			if(i == friends.size() - 1) {
					friends.pop_back();
			}
      else {
				friends.erase(friends.begin() + i);
			}
			break;
		}
	}
}

//returns the user's name
string User::get_name() {
	return name;
}

//returns the user's id
int User::get_id() {
	return id;
}

//returns the user's birth year
int User::get_year() {
	return year;
}

//returns the users' zipcode 
int User::get_zip() {
	return zip;
}


int User::get_depth() {
	return depth;
}


int User::get_pred() {
	return predecessor;
}


vector <int>* User::get_friends() {
	return &friends;
}


void User::set_depth(int num) {
	depth = num;
}

//sets the predecessor equal to the id of the user whose edge first allowed discovery of user
void User::set_pred(int num) {
	predecessor = num;
}