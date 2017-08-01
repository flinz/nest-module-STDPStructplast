# This file is part of STDPStructplast.
#
# Copyright (C) 2017, see AUTHORS.
#
# STDPStructplast is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# STDPStructplast is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with STDPStructplast.  If not, see <http://www.gnu.org/licenses/>.
#
# For more information see: https://github.com/flinz/nest-module-STDPStructplast

cmake_minimum_required( VERSION 2.8.12 )

# Test SPORE core functions
add_test( NAME circular_buffer COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_LIST_DIR}/test_circular_buffer.py )
add_test( NAME tracing_node COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_LIST_DIR}/test_tracing_node.py )
add_test( NAME connection COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_LIST_DIR}/test_connection.py )