#include"toy_parser.h"
using namespace std;

toy_type parse_number(const char *str,toy_value v) {

}

int parse_identifier(const char *str, toy_value v) {
	const char *p = str;
	if (*p == 'e')
	{
		if (p[1] != 'l' || p[2] != 's' || p[3] != 'e')
			return PARSE_INVALID_VALUE;
	}
	else 
	{
		v.str = str;
		v.type = TOY_IDENTIFIER;
	}
		
	return PARSE_OK;
}