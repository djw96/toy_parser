#include"toy_parser.h"
#include<iostream>
using namespace std;
int  parse_number(const char *str,toy_value v) {
	return 0;
}

int parse_keyword(const char *str, const char *k,toy_value *v) {

	for (int i = 0; k[i]; i++)
	{
		if(str[i]!=k[i])
			return PARSE_INVALID_VALUE;
	}
		v->str = str;
		v->type = TOY_KEYWORD;
		return PARSE_OK;
}

int parse_value(const char *str, toy_value *v)
{
	switch (str[0])
	{
	case'e':
		return parse_keyword(str, "else", v);
	default:
		return PARSE_INVALID_VALUE;
	}
}
