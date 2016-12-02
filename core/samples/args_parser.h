#ifndef _ARGS_PARSER_H_
#define _ARGS_PARSER_H_

#include <string>
#include <vector>

void show_usage(std::string name);
std::vector<std::string> parse_args(int argc, char* argv[]);

#endif /* _ARGS_PARSER_H_*/
