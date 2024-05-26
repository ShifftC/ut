//
// Copyright (c) 2019-2020 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

// ensure no conflict between `Windows.h` and `ut.hpp`
#include <Windows.h>

#ifndef __MINGW32__
  #if not defined(min) || not defined(max)
    #error 'min' and 'max' should be defined
  #endif
#endif

#if defined(BOOST_UT_DISABLE_MODULE) || defined(BOOST_UT_DISABLE_STD_MODULE)
#include <chrono>
#include <fstream>
#endif

#if defined(BOOST_UT_DISABLE_MODULE)
#include <boost/ut.hpp>
#else
import boost.ut;
#endif

#ifndef __MINGW32__
  #if not defined(min) || not defined(max)
    #error 'min' and 'max' should still be defined
  #endif
#endif

namespace ut = boost::ut;

int main() {
  using namespace ut;
  expect(true);
}
