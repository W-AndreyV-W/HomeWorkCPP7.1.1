#include "sql_select_query_builder.h"

SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddColumn(const std::string& add_column) noexcept {

    if (num_column == 0) {

        sqlrequest.table_columns = add_column;
        num_column++;
    }
    else {

        sqlrequest.table_columns += ", " + add_column;
    }

    return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddFrom(const std::string& add_from) noexcept {

    sqlrequest.table = add_from;

    return *this;
}

SqlSelectQueryBuilder& SqlSelectQueryBuilder::AddWhere(const std::string& column, const std::string& meaning) noexcept {

    if (num_where == 0) {

        sqlrequest.condition = column + "=" + meaning;
        num_where++;
    }
    else {

        sqlrequest.condition += " AND " + column + "=" + meaning;
    }

    return *this;
}

std::string SqlSelectQueryBuilder::BuildQuery() noexcept {

    return sqlrequest.construction();
}