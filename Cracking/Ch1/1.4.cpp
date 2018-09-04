#include<string>
#include<iostream>
#include<map>
#include<vector>

bool checkMaxOneOdd(const std::vector<int>& vec){
	bool foundOdd = false;
	for(const auto & count : vec){
	if( count % 2 == 1){
		if(foundOdd) return false;
		foundOdd = true;
	}
	}
	return true;
}

//Make it from A to z in ASCII.

int main(int argc, char ** argv){
	std::vector<int> ch(57);
	std::string pal = "ctalcat";
	for(const auto& c : pal){
	ch.at(c - 'A')++;
	}
	if(checkMaxOneOdd(ch)) std::cout<<"Perm of Pal" << std:: endl;
}


