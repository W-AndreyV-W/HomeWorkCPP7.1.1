#include "sql_request.h"

std::string SqlRequest::construction() {

    sql_request = 34;
    sql_request += requests + table_columns + operators;
    sql_request += table + operator_condition + condition;
    sql_request += ";";
    sql_request += 34;

    return sql_request;
}