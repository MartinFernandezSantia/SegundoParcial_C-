#pragma once
#include "pch.h"
#include "Controller.cpp"

[STAThread]
int main()
{
  Controller^ controller = gcnew Controller();
  return 0;
}