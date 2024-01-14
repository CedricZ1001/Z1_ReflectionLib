
#ifndef message_name
#   error Please define 'message_name'
#endif

#ifndef message_body
#   error Please define 'message_body'
#endif

struct message_name {

#undef field_int64
#define field_int64(name, ...)  ::std::int64_t name = {__VA_ARGS__};
    message_body
    return os;
};






#define message_name  foo
#define message_body    \
    field_int64(i64,123)    \
    field_double(dbl)   \
    field_string(std,"hello")   \
    //

struct foo
{
  /* data */
  ::std::int64_t i64 =123;  
  double dbl = 0;
  ::std::string str = "hello";
};



inline
std::ostream& operator<<(std::ostream& os, const foo& f){
  os << "i64 = "<< f.i64 << ::std::endl;
  os << "dbl = "<< f.dbl << std::endl;
  os << "str = "<< f.str << std::endl;
  return os;
}
#undef message_name
#undef message_body