cmake_minimum_required(VERSION 3.29)
project(ProjetCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ProjetCpp main.cpp
        Livre.cpp
        Livre.h
        BD.cpp
        BD.h
        Recueil.cpp
        Recueil.h
        Roman.cpp
        Roman.h
        Theatre.cpp
        Theatre.h
        Album.cpp
        Album.h)
