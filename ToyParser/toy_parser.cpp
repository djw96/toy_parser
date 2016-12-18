#include"toy_parser.h"
#include<iostream>
//using namespace std;

#define ISDIGIT(n) (n>='0'&&n<='9')
#define ISLETTER(n) ((n>='A'&&n<='Z')||(n>='a'&&n<='z'))

void add_token(int len,toy_type t)
{

}
int parse_line(const char *begin) 
{
	auto line=make_shared<toy_line>();
	switch (*begin)
	{
	case'+':
		add_token(1, TOY_OPERATOR);
		break;
	case'-':
			add_token(1, TOY_OPERATOR);
			break;
	case'/':
		add_token(1, TOY_OPERATOR);
		break;
	case'*':
		add_token(1, TOY_OPERATOR);
		break;
	case'=':
		add_token(1, TOY_OPERATOR);
		break;
	default:
		return PARSE_INVALID_VALUE;

	}
	return PARSE_OK;
}

int main()
{
	cout << "123";
	return 0;
}