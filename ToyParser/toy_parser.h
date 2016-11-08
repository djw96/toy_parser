#ifndef TOY_PARSER_H_
#define TOY_PARSER_H_
enum toy_type{TOY_COMMENTS,TOY_KEYWORD,TOY_IDENTIFIER,
						TOY_OPERATOR,TOY_DELIMITER, TOY_NUMBER};

struct toy_value {
	toy_type type;

};
#endif