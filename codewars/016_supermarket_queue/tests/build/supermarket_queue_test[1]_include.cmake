if(EXISTS "/Users/anthonypelusocook/sandbox/cpp/codewars/016_supermarket_queue/tests/build/supermarket_queue_test[1]_tests.cmake")
  include("/Users/anthonypelusocook/sandbox/cpp/codewars/016_supermarket_queue/tests/build/supermarket_queue_test[1]_tests.cmake")
else()
  add_test(supermarket_queue_test_NOT_BUILT supermarket_queue_test_NOT_BUILT)
endif()
