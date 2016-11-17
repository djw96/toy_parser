#ifndef TOY_PARSER_H_
#define TOY_PARSER_H
#include<string>
enum toy_type{TOY_COMMENTS,TOY_KEYWORD,TOY_IDENTIFIER,
						TOY_OPERATOR,TOY_DELIMITER, TOY_NUMBER};

enum {
	PARSE_INVALID_VALUE,
	PARSE_OK
};
struct toy_value {
	string str;
	toy_type type;
};
#endif