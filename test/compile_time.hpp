
// Copyright 2005-2009 Daniel James.
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/config.hpp>
#include <boost/type_traits/is_same.hpp>

template <class T>
void compile_time_tests(T*)
{
    static_assert(boost::is_same<T,
        typename BOOST_HASH_TEST_NAMESPACE::hash<T>::argument_type
    >::value);
    static_assert(boost::is_same<std::size_t,
        typename BOOST_HASH_TEST_NAMESPACE::hash<T>::result_type
    >::value);
}

