#include "engine.hpp"
#include <iostream>

Engine::Engine() 
{

	if (debugMode) 
	{
		std::cout << "Making a graphics engine\n";
	}

	build_glfw_window();
}

void Engine::build_glfw_window() 
{

	glfwInit();

	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	if (window = glfwCreateWindow(width, height, "Window", nullptr, nullptr)) 
	{
		if (debugMode) 
		{
			std::cout << "Made a GLFW window called \"Window\", width: " << width << ", height: " << height << '\n';
		}
	}
	else 
	{
		if (debugMode) 
		{
			std::cout << "GLFW window creation failed\n";
		}
	}
}

Engine::~Engine() 
{

	if (debugMode) 
	{
		std::cout << "Successful!\n";
	}

	glfwTerminate();
}