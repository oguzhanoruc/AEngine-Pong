#include "Window.hpp"

namespace aengine {

	Window::Window(int32_t width, int32_t height, const char* title, bool fullScreen)
	{
		if (!glfwInit())
			throw "Failed to Initialize GLFW!";

		m_Window = glfwCreateWindow(	width, 
									height, 
									title, 
									fullScreen ? glfwGetPrimaryMonitor() : NULL, 
									NULL);
		if (!m_Window)
		{
			glfwTerminate();
			throw "Failed to Create Window!";
		}

		glfwMakeContextCurrent(m_Window);

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
		{
			glfwTerminate();
			throw "Failed to Initialize GLAD!";
		}
	}

	Window::~Window()
	{
		glfwTerminate();
	}

	bool Window::WindowShouldClose()
	{
		return glfwWindowShouldClose(m_Window);
	}

	GLFWwindow* Window::GetWindow()
	{
		return m_Window;
	}

}