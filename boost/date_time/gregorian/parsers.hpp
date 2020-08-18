#ifndef GREGORIAN_PARSERS_HPP___
#define GREGORIAN_PARSERS_HPP___

/* Copyright (c) 2002,2003,2005 CrystalClear Software, Inc.
 * Use, modification and distribution is subject to the 
 * Boost Software License, Version 1.0. (See accompanying
 * file LICENSE_1_0.txt or http://www.boost.org/LICENSE_1_0.txt)
 * Author: Jeff Garland, Bart Garst
 * $Date: 2008-02-27 15:00:24 -0500 (Wed, 27 Feb 2008) $
 */

#include "boost/date_time/gregorian/gregorian_types.hpp"
#include "boost/date_time/date_parsing.hpp"
#include "boost/date_time/compiler_config.hpp"
#include "boost/date_time/parse_format_base.hpp"
#include <string>
#include <sstream>

namespace boost {
namespace gregorian {

  //! Return special_value from string argument
  /*! Return special_value from string argument. If argument is 
   * not one of the special value names (defined in src/gregorian/names.hpp), 
   * return 'not_special' */
  BOOST_DATE_TIME_DECL special_values special_value_from_string(const std::string& s);
  

#if !(defined(BOOST_NO_STD_ITERATOR_TRAITS))
  //! Stream should hold a date in the form of: 2002-1-25. Month number, abbrev, or name are accepted
  /* Arguments passed in by-value for convertability of char[] 
   * to iterator_type. Calls to from_stream_type are by-reference 
   * since conversion is already done */
  template<class iterator_type>
  inline date from_stream(iterator_type beg, iterator_type end) {
    if(beg == end)
    {
      return date(not_a_date_time);
    }
    typedef typename std::iterator_traits<iterator_type>::value_type value_type;
    return  date_time::from_stream_type<date>(beg, end, value_type());
  }
#endif //BOOST_NO_STD_ITERATOR_TRAITS
  
#if (defined(_MSC_VER) && (_MSC_VER < 1300))
    // This function cannot be compiled with MSVC 6.0 due to internal compiler shorcomings
#else

#  if !defined(BOOST_NO_STD_WSTRING)

#  endif // BOOST_NO_STD_WSTRING
#endif

} } //namespace gregorian

#endif
