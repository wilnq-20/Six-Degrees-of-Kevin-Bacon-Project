#ifndef NETWORK_H
#define NETWORK_H
#include <string>
#include <vector> 
using std::vector; 
using namespace std; 

class Network { 
 public:

  Network();    //class constructor
	~Network();   //class destructor
	int read_friends(const char *filename); //initializes all of network's info from file
	int write_friends(const char *filename);  //writes all of network's info to file
	void add_user(std::string username, int yr, int zipcode, vector <int> friend_list); //adds user to network database
  int add_connection(std::string name1, std::string name2);
	int remove_connection(std::string name1, std::string name2);
	int get_id(std::string username); //accepts user's name and returns id 


	int get_size();             //what does this do 
	User get_user(int index);
	vector<int> shortest_path(int from, int to);
	vector< vector<int> > groups();
	vector<int> suggest_friends(int who, int& score);
	vector<int> bfs(int id);
	void reinit_depth();         //what does this do 

 private:
  vector<User> network;

  
};


#endif
