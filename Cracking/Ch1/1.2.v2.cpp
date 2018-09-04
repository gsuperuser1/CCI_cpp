#include<iostream>
#include<string>

bool permutation(const std::string & str1, const std::string & str2){
	
	if(str1.size() != str2.size()){
	return false;
	}

	int chars[128] =  {0};
	
	for(const auto& ch : str1){
	chars[ch]++;
	}

	for(const auto& ch : str2){
	chars[ch]--;
	if(chars[ch] < 0) return false;
	}
	return true;

}
int main( int argc, char ** argv){

	std::string str1{"pepepepe"};
	std::string str2{"epepepep"};
	if(permutation(str1, str2)) std::cout<<"Permutation"<<std::endl;
}
