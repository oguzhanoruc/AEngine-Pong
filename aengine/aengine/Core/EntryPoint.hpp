#pragma once

#include "Core.hpp"
#include "glUtils/Window.hpp"

namespace aengine {

	class AE_API AE_Application 
	{
	public:
		AE_Application();
		~AE_Application();

		void Run();
		
		virtual void Update();
		virtual void Render();

	protected:
		aengine::Window*	m_Window;
	};

}