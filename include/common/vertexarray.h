#pragma once

#include <iostream>
#include <string>
#define GLEW_STATIC
#include <glad/glad.h>

using namespace std; 

namespace ST 
{
    namespace COMMON 
    {
		class VertexArray
		{
		public:

			VertexArray();
			~VertexArray();

			void Bind();
			void Unbind();

		private:

			GLuint array_id;
			GLenum type;
		};
	}
}
