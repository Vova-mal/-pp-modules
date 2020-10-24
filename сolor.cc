#if defined (_MSC_VER) && _MSC_VER < 1000
#define snprintf _snprintf
#endif

template < typename parsed_t >
static bool