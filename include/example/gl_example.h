// System libs.
#include <iostream>

// Header includes.
// TODO: Include your headers here...
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "shader.h"
#include "texture.h"
#include "vertexbuffer.h"
#include "indexbuffer.h"
#include "vertexarray.h"

using namespace ST::COMMON;

// Classes.
class GLExample 
{
    public:
        GLExample();

        void DrawSetting(GLFWwindow* a_window);
        void Update(float a_deltaTime);
        void Draw(GLFWwindow* a_window);
        void Uninstall();
        void ProcessInput(int a_direction, float a_deltaTime);
    
    private:
        VertexBuffer* mVBO;
        VertexArray* mVAO;
        IndexBuffer* mIBO;
        Texture* mTexture;
        Shader* mShader;

        glm::mat4 mProjectionMatrix = glm::ortho(0.0f, 800.0f, 0.0f, 600.0f);
};