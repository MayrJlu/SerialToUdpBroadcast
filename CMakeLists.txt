# made by mr.Shivrin MOST GENIUS PROGRAMMER EVER
cmake_minimum_required(VERSION 3.10)
project(SerialToUdpBroadcast VERSION 1.0)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_executable(SerialToUdpBroadcast SerialToUdpBroadcast.cxx UdpClnt.cxx UdpClnt.h SrlPrtRd.cxx SrlPrtRd.h)
# debux exebutables
add_executable(SrlPrt SrlPrt.cxx SrlPrtRd.cxx SrlPrtRd.h)
add_executable(UdpClnt UdpC.cxx UdpClnt.cxx UdpClnt.h)
add_executable(UdpSrvr UdpS.cxx UdpSrvr.cxx UdpSrvr.h)
target_link_libraries(SerialToUdpBroadcast 
  serial
)
target_link_libraries(SrlPrt 
  serial
)
