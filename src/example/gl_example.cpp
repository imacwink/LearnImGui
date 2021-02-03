#include "gl_example.h"

GLExample::GLExample()
{
    // TODO::
}

void GLExample::DrawSetting(GLFWwindow* a_window)
{
    mShader = new Shader();
    mShader->CreateShaderProgramFromFile("./res/shaders/vertex.glsl", "./res/shaders/fragment.glsl");
	mShader->CompileShaders();

    mTexture = new Texture();
    mTexture->CreateTexture("./res/textures/test.png"); 

    mVBO = new VertexBuffer(GL_ARRAY_BUFFER);
    mVAO = new VertexArray();
    mIBO = new IndexBuffer();

	GLfloat Vertices[] = 
	{
		 0.0f,   0.0f,    0.0f, 1.0f, 1.0f,
		 800.0f, 0.0f,    0.0f, 1.0f, 0.0f,
		 800.0f, 600.0f,  0.0f, 0.0f, 0.0f,
		 0.0f,   600.0f,  0.0f, 0.0f, 1.0f
	};

	GLuint Indices[6] = 
	{  
		0, 1, 3,
		1, 2, 3  
	};

	mVAO->Bind();
	mVBO->BufferData(sizeof(Vertices), Vertices, GL_STATIC_DRAW);
	mIBO->BufferData(sizeof(Indices), Indices, GL_STATIC_DRAW);
	mVBO->VertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)0);
	mVBO->VertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
	mVAO->Unbind();
}

void GLExample::ProcessInput(int a_direction, float a_deltaTime)
{
    // TODO::     
}

void GLExample::Update(float a_deltaTime)
{
    // TODO::
}

void GLExample::Draw(GLFWwindow* a_window)
{
    mTexture->Bind(0);

	mShader->Use();
	mShader->SetInteger("u_Texture", 0, 0);
	mShader->SetMatrix4("u_ViewProjectionMatrix", mProjectionMatrix, 0);

	mVAO->Bind();
	glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, (void*)0);
	mVAO->Unbind();
}

void GLExample::Uninstall()
{
}