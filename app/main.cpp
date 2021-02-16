/**
  ******************************************************************************
  * @file           : main.cpp
  * @brief          : Main program body
  ******************************************************************************
  */

#include <iostream>
#include <thread>
#include <chrono>

#include "calculator.hpp"


int main(void)
{
  uint32_t count = 0;
  Calculator calc;

  for (;;)
  {
    std::cout << "Alive-Count: " << count << "\r";
    std::cout.flush();
    count=calc.addition(count, 1); //Dummy use of Calculator

    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}