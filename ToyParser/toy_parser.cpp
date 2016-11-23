#include"toy_parser.h"
#include<iostream>
using namespace std;
#define ISDIGIT(n) (n>='0'&&n<='9')
#define ISLETTER(n) ((n>='A'&&n<='Z')||(n>='a'&&n<='z'))
void  parse_identifier(const char *str,toy_value *v) {
	if (ISLETTER(str[0])) {
		for (int i = 1; str[i]; i++)
		{
			if (!ISDIGIT(str[i]) && !ISLETTER(str[i]))
				return;
		}
		v->str = str;
		v->type = TOY_IDENTIFIER;
	}
	else
		return;
}

int parse_keyword(const char *str, const char *k, toy_value *v) {
	
	if (str == k)
		v->type = TOY_IDENTIFIER;
	else{
		if (v->str.size() > 0&&v->str.size()<=64)
			return PARSE_OK;
		else
			return PARSE_INVALID_VALUE;
	}
	v->str = str;
	return PARSE_OK;
}

int parse_value(const char *str, toy_value *v)
{
	switch (str[0])
	{
	case'e':
		return parse_keyword(str, "else", v);
	case'i':
		if (str[1] == 'n')
			return parse_keyword(str, "int", v);
		else if (str[1] == 'f')
			return parse_keyword(str, "if", v);
		else
			return PARSE_INVALID_VALUE;
	case'r':
		return parse_keyword(str, "real", v);
	case't':
		return parse_keyword(str, "then", v);	
	case'w':
		return parse_keyword(str, "while", v);
	default:
		return PARSE_OK;
	}
}

int parse(const char *str, toy_value *v)
{
	parse_identifier(str,v);
	return parse_value(str, v);
}
