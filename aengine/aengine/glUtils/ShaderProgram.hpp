#pragma once

#include "Core.hpp"
#include <stdint.h>

namespace aengine {
	
	class AE_API ShaderProgram
	{
	public:
		ShaderProgram();
		~ShaderProgram();

		void AttachShader(uint32_t shaderType, const char* fileName);
		
		void Link();
		void Use();

	private:
		uint32_t	m_ShaderId;

		const char* ReadFile(const char* fileName);
	};

}