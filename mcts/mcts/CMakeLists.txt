# CMakeList.txt : CMake project for mcts, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (mcts "main.cpp" "mcts.cpp" "mcts.h" "Node.cpp" "Node.h" "Tree.cpp" "Tree.h" "State.cpp" "State.h" "Board.cpp" "Board.h"  "Position.h")

set_property(TARGET mcts PROPERTY CXX_STANDARD 17)

# TODO: Add tests and install targets if needed.
