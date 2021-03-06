#pragma once

#include <GLFW/glfw3.h> // For glfwGetTime()

#include <windows.h> 
#include <sstream>

namespace ST 
{
    namespace COMMON 
    {
		void CalculateFrameRate(GLFWwindow* pWindow);
		long long int GetFPSCount();
		void DisplayFrameRate(GLFWwindow* pWindow, const std::string& title);
		void CalculateFrameRateDeprecated();
	}
}