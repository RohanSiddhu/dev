# CMakeList.txt : CMake project for mcts, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (mcts "mcts.cpp" "mcts.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET mcts PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
