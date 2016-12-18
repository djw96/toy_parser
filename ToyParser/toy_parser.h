#ifndef TOY_PARSER_H
#define TOY_PARSER_H

#include<memory>
#include<vector>
#include<string>
using namespace std;
enum toy_type{TOY_UNKNOWN,TOY_COMMENTS,TOY_KEYWORD,TOY_IDENTIFIER,
						TOY_OPERATOR,TOY_DELIMITER, TOY_NUMBER};

enum {
	PARSE_OK,
	PARSE_INVALID_VALUE
};

struct toy_token {
	typedef  vector<toy_token>  List;
	string str;
	int row = -1;
	int column = -1;
	toy_type type = TOY_UNKNOWN;
};

struct toy_line {
	typedef shared_ptr<toy_line> Ptr;
	typedef vector<Ptr> List;
	toy_token::List tokens;
};
struct toy_file {

};
//int parse(const char *str, toy_token *v);

#endif