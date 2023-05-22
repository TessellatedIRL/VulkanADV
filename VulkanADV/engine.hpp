#pragma once
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.hpp>

class Engine 
{

public:

	Engine();

	~Engine();

private:

	bool debugMode = true;

	int width{ 640 };
	int height{ 480 };
	GLFWwindow* window{ nullptr };

	void build_glfw_window();
};