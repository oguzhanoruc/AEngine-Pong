#pragma once

#include "Core.hpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace aengine {

	class AE_API Window
	{
	public:
		Window(int32_t width, int32_t height, const char* title, bool fullScreen);
		~Window();
		bool WindowShouldClose();

		GLFWwindow* GetWindow();

	private:
		GLFWwindow*		m_Window;
	};

}