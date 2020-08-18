#ifndef POSIXTIME_PARSERS_HPP___
#define POSIXTIME_PARSERS_HPP___

/* Copyright (c) 2002,2003 CrystalClear Software, Inc.
 * Use, modification and distribution is subject to the 
 * Boost Software License, Version 1.0. (See accompanying
 * file LICENSE_1_0.txt or http://www.boost.org/LICENSE_1_0.txt)
 * Author: Jeff Garland 
 * $Date: 2008-02-27 15:00:24 -0500 (Wed, 27 Feb 2008) $
 */

#include "boost/date_time/gregorian/gregorian.hpp"
#include "boost/date_time/time_parsing.hpp"
#include "boost/date_time/posix_time/posix_time_types.hpp"

 
namespace boost {

namespace posix_time {

  //! Creates a time_duration object from a delimited string
  /*! Expected format for string is "[-]h[h][:mm][:ss][.fff]".
   * A negative duration will be created if the first character in
   * string is a '-', all other '-' will be treated as delimiters.
   * Accepted delimiters are "-:,.". */


} } //namespace posix_time


#endif

