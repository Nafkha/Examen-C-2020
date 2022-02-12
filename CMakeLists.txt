cmake_minimum_required(VERSION 3.21)
project(Revision)

set(CMAKE_CXX_STANDARD 14)

add_executable(Revision main.cpp Personne.cpp Personne.h Auteur.cpp Auteur.h Livre.cpp Livre.h)
