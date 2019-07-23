#ifndef LEPTJSON_H
#define LEPTJSON_H

/// the type of json value
typedef enum{
    LEPT_NULL,
    LEPT_FALSE,
    LEPT_TRUE,
    LEPT_NUMBER,
    LEPT_STRING,
    LEPT_ARRAY,
    LEPT_OBJECT
}lept_type;


/// the data struct of json
typedef struct{
    lept_type type;
}lept_value;

/// the return value of the func lept_parse()
enum{
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

/// APIS
int lept_parse(lept_value* v, const char* json);
lept_type lept_get_type(const lept_value* v);


#endif // LEPTJSON_H
