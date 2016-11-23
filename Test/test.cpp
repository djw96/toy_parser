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
	TEST(PARSE_INVALID_VALUE, parse("el*se1", &v));
	TEST(PARSE_OK, parse("what", &v));
	TEST(PARSE_OK, parse("then", &v));
	TEST(PARSE_OK, parse("while", &v));
	TEST(PARSE_OK, parse("if",&v));
	TEST(PARSE_INVALID_VALUE, parse("i*vb", &v));
}