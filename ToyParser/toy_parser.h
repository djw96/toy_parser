#ifndef TOY_PARSER_H_
#define TOY_PARSER_H
#include<string>
enum toy_type{TOY_COMMENTS,TOY_KEYWORD,TOY_IDENTIFIER,
						TOY_OPERATOR,TOY_DELIMITER, TOY_NUMBER};

enum {
	PARSE_OK,
	PARSE_INVALID_VALUE
};
struct toy_value {
	std::string str;
	toy_type type=TOY_COMMENTS;
	int row = -1;
	int column = -1;
};
int parse(const char *str, toy_value *v);

#endif