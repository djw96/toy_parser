#include"toy_parser.h"
#include<iostream>
#include<fstream>
//using namespace std;

#define ISDIGIT(n) (n>='0'&&n<='9')
#define ISLETTER(n) ((n>='A'&&n<='Z')||(n>='a'&&n<='z'))

toy_file file;
int column = 0;
const char* begin_ptr=nullptr;
void add_token(const char* ptr,int len,toy_type t)
{
	string temp(ptr,len);
	toy_token token;
	token.str = temp;
	token.type = t;
	file.lines.back().tokens.push_back(token);
}
int parse_line() 
{
	const char * ptr = begin_ptr;
	//auto line=make_shared<toy_line>();
	while (*ptr)
	{
		switch (*ptr)
		{
		case'+':
			add_token(ptr, 1, TOY_OPERATOR);
			break;
		case'-':
			add_token(ptr, 1, TOY_OPERATOR);
			break;
		case'/':
			add_token(ptr, 1, TOY_OPERATOR);
			break;
		case'*':
			add_token(ptr, 1, TOY_OPERATOR);
			break;
		case'=':
			add_token(ptr, 1, TOY_OPERATOR);
			break;
		case' ':
			break;
		default:
			return PARSE_INVALID_VALUE;
		}
		++ptr;
	}
	return PARSE_OK;
}


int main()
{
	/*string str;
	int line = 0;
	ifstream in = ifstream("../test.txt");
	while (getline(in, str))
	{
		++line;
		cout <<"line:"<<line<<" "<< str << endl;
	}
	const char* ch = str.c_str();
	while (*ch)
	{
		cout << *ch;
		++ch;
	}*/
	toy_line line;

	ifstream in = ifstream("../test.txt");
	string current_line;
	while (getline(in, current_line))
	{
		file.lines.push_back(line);
		begin_ptr=current_line.c_str();
		parse_line();
	}
	for (auto i : file.lines)
	{
		for (auto j : i.tokens)
		{
			cout  <<j.str<<' '<<j.type<<' ';
		}
		cout << endl;
	}
	return 0;
}