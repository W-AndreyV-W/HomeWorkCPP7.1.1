#pragma once

#include "sql_request.h"

class SqlSelectQueryBuilder {

public:

    SqlSelectQueryBuilder& AddColumn(const std::string& add_column) noexcept;

    SqlSelectQueryBuilder& AddFrom(const std::string& add_from) noexcept;

    SqlSelectQueryBuilder& AddWhere(const std::string& column, const std::string& meaning) noexcept;

    std::string BuildQuery() noexcept;

private:

    SqlRequest sqlrequest;

    int num_column = 0;
    int num_where = 0;
};
