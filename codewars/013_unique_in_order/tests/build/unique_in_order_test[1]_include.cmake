if(EXISTS "/Users/anthonypelusocook/sandbox/cpp/codewars/013_unique_in_order/tests/build/unique_in_order_test[1]_tests.cmake")
  include("/Users/anthonypelusocook/sandbox/cpp/codewars/013_unique_in_order/tests/build/unique_in_order_test[1]_tests.cmake")
else()
  add_test(unique_in_order_test_NOT_BUILT unique_in_order_test_NOT_BUILT)
endif()