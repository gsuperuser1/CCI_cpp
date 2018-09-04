#include<iostream>
#include<string>
#include<algorithm>

bool permutation(std::string& first, std::string& second){
	std::sort(first.begin(), first.end());
	std::sort(second.begin(), second.end());
	return first == second;
}
int main(int argc, char ** argv){
	
	std::string f1{"papapa"};
	std::string f2{"apapap"};
	if(permutation(f1,f2)){
		std::cout<<"Permutation"<<std::endl;
	}

	
}
