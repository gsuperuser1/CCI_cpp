#include<iostream>
#include<string>

//Check wether ASCII or Unicode
//128 This includes symbols non alphanumeric
bool isUniqueChars(std::string str){
	if(str.size() > 128) return false;
	bool char_set[128]={0};
	for(int i = 0; i < str.size(); ++i){
	//Conversion from char to int.
	int val = str.at(i);

	if(char_set[val]){
		return false;
	}
		char_set[val]=1;
	}
	return true;
}
int main(int argc, char ** argv){

	std::string rep{"thethe"};
	if(!isUniqueChars(rep)){
		std::cout<<"Rep"<<std::endl;
	}
		

}
