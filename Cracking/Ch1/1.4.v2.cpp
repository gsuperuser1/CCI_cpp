#include<iostream>
#include<string>
#include<bitset>



int main(int argc, char** argv){

	std::string pal{"ctaltca"};
	//Enough for A-z.
	std::bitset<64> b{0};
	std::bitset<64> c{0};
	c[0] = true;
	for(const auto& ch: pal){
	//Flip the bit.
	b[ch-'A'] = !(b[ch-'A']);
	}
	std::cout<<"Biset"<<
		'\n'<<b<<std::endl;
	
	
	//bitwise compare
	if(b.none()){
	std::cout<<"Perm of pal" <<std::endl;
	}


	//OPs n mod 2 implementation may be faster.
	else if(!((b.to_ulong() - 1) & b.to_ulong())){
		std::cout<<"Perm of pal"<< std::endl;
	}
	
}
