#include "EntryPoint.hpp"

namespace aengine {

	AE_Application::AE_Application()
	{
		m_Window = new Window(600, 600, "AEngine Application", false);
	}
	AE_Application::~AE_Application()
	{
		delete m_Window;
	}

	void AE_Application::Run()
	{
		while (!m_Window->WindowShouldClose())
		{
			Update();
			Render();
		}
	}
	void AE_Application::Update()
	{
		
	}
	void AE_Application::Render()
	{
		glClearColor(1.0f, 1.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		glfwSwapBuffers(m_Window->GetWindow());
		glfwPollEvents();
	}

}