#include<iostream>
#include "../ToyParser/toy_parser.h"
//#include"../ToyParser/toy_parser.cpp"

#define TEST(expect,actual)\
do{\
	if (actual == expect)\
		std::cout << "pass"<<std::endl;\
	else\
		std::cout<<"error"<<std::endl;\
}while(0)

int main()
{
	toy_value v;
	TEST(PARSE_OK, parse_value("else",&v));
	TEST(PARSE_INVALID_VALUE, parse_value("avb", &v));
}