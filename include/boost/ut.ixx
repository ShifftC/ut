//
// Copyright (c) 2019-2021 Kris Jusiak (kris at jusiak dot net)
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
module;

#if __has_include(<iso646.h>)
#include <iso646.h>  // and, or, not, ...
#endif

#include <version>
#if defined(BOOST_UT_DISABLE_STD_MODULE)
#include <algorithm>
#include <array>
#include <chrono>
#include <concepts>
#include <cstdint>
#include <functional>
#include <iostream>
#include <memory>
#include <optional>
#include <sstream>
#include <stack>
#include <string_view>
#include <type_traits>
#include <unordered_map>
#include <utility>
#include <variant>
#include <vector>
#include <fstream>
#if defined(__cpp_exceptions)
#include <exception>
#endif
#if __has_include(<format>)
#include <format>
#endif
#if __has_include(<source_location>)
#include <source_location>
#endif
#else
#include <stdlib.h>
#endif

#if __has_include(<unistd.h>) and __has_include(<sys/wait.h>)
#include <sys/wait.h>
#include <unistd.h>
#endif

export module boost.ut;

#define BOOST_UT_EXPORT export

#include "boost/ut.hpp"
