#include<iostream>
#include<string>

void replaceChar(std::string & str1, int length){
	int spaceCount, index = 0;
	for(int i=0; i  < length; ++i){
		if(str1.at(i)==' '){
		++spaceCount;
		}
	}
	index = length + spaceCount*2;
	str1.resize(index+1);
	//Check if string has trailig empty
	if(length < str1.size()) str1.at(length) = '\0';
	//Slide through up to length reachable chars.
	for(int i =  length - 1; i >=0; --i){
	if(str1.at(i) == ' '){
	str1.at(index - 1) = '0';
	str1.at(index - 2) = '2';
	str1.at(index - 3) = '%';
	index -= 3;
	}
	else {
		str1.at(index-1) = str1.at(i);
		--index;
	}
}}

int main(int argc, char ** argv){
	std::string str1{"The string is a demo"};
	replaceChar(str1, 16);
	std::cout<<str1<<std::endl;

}
