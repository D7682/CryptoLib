add_test([=[Caesar.DefaultConstructor]=]  C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug/CaesarTest.exe [==[--gtest_filter=Caesar.DefaultConstructor]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Caesar.DefaultConstructor]=]  PROPERTIES WORKING_DIRECTORY C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[Caesar.getShift]=]  C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug/CaesarTest.exe [==[--gtest_filter=Caesar.getShift]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Caesar.getShift]=]  PROPERTIES WORKING_DIRECTORY C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[Caesar.Encrypt]=]  C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug/CaesarTest.exe [==[--gtest_filter=Caesar.Encrypt]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Caesar.Encrypt]=]  PROPERTIES WORKING_DIRECTORY C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[Caesar.Decrypt]=]  C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug/CaesarTest.exe [==[--gtest_filter=Caesar.Decrypt]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[Caesar.Decrypt]=]  PROPERTIES WORKING_DIRECTORY C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  CaesarTest_TESTS Caesar.DefaultConstructor Caesar.getShift Caesar.Encrypt Caesar.Decrypt)
