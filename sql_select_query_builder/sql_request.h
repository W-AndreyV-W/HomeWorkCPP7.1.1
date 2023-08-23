#pragma once

#include <iostream>

struct SqlRequest {

    std::string construction();

    std::string requests = "SELECT ";
    std::string table_columns = "*";
    std::string operators = " FROM ";
    std::string table;
    std::string operator_condition = " WHERE ";
    std::string condition;
    std::string sql_request;
};