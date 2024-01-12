
#ifndef message_name
#error "Please define 'message_name'
#endif

#ifndef message_body
#error "Please define 'message_body'
#endif








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