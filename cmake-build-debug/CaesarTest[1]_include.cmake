if(EXISTS "C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug/CaesarTest[1]_tests.cmake")
  include("C:/Users/danie/CLionProjects/CryptoLib/cmake-build-debug/CaesarTest[1]_tests.cmake")
else()
  add_test(CaesarTest_NOT_BUILT CaesarTest_NOT_BUILT)
endif()