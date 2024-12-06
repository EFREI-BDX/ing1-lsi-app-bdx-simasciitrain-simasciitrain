cmake_minimum_required(VERSION 3.29.6)
project(simasciitrain)

set(CMAKE_CXX_STANDARD 20)

add_executable(simasciitrain main.cpp
        ITrain.h
        Train.cpp
        Train.h
        AbstractLocomotive.cpp
        AbstractLocomotive.h
        TypeLocomotive.cpp
        TypeLocomotive.h
        ElectricLocomotive.cpp
        ElectricLocomotive.h
        GasolineLocomotive.cpp
        GasolineLocomotive.h
        AbstractWagon.cpp
        AbstractWagon.h
        PassengerWagon.cpp
        PassengerWagon.h
        FreightWagon.cpp
        FreightWagon.h
        UtilityWagon.cpp
        UtilityWagon.h
        TypeWagon.cpp
        TypeWagon.h
        Wagons.cpp
        Wagons.h
        TrainElement.h
)
