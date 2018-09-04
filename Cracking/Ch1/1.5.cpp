#include<string>
#include<iostream>
#include<cstdlib>


bool oneEdit(const std::string& str1,const std::string& str2){
if(abs(str1.size() - str2.size()) > 1) return false;

std::string short_str = str1.size() < str2.size() ? str1 : str2;
std::string long_str = str1.size() < str2.size() ? str2: str1;

int index1{0};
int index2{0};

bool diff{false};

while(index2 < long_str.size() && index1 < short_str.size() ){
	if(long_str.at(index2) != short_str.at(index1)){
	
	if(diff) return false;
	diff = true;
	
	if(long_str.size()== short_str.size()) ++index1;



	}
	else{
	++index1;
	}
	++index2;}

return true;
}

int main(int argc, char ** argv){

	std::string s1{"house"};
	std::string s2{"hous"};
	if(oneEdit(s1,s2)) std::cout<<"One Edit" <<std::endl;


}
