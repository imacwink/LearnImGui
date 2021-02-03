#pragma once

#include <iostream>
#include <string>
#define GLEW_STATIC
#include <glad/glad.h>

namespace ST 
{
    namespace COMMON 
    {
		class IndexBuffer
		{
		public:

			IndexBuffer();
			~IndexBuffer();

			void BufferData(GLsizeiptr size, void* data, GLenum usage);
			void Bind();
			void Unbind();

		private:

			GLuint buffer_id;
			GLenum type;
		};
	}
}