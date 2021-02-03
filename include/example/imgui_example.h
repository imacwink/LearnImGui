// System libs.
#include <imgui.h>
#include <imgui_impl_glfw_gl3.h>
#include <stdio.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

// Header includes.
// TODO: Include your headers here...

// Classes.
class ImGuiExample 
{
    public:
        ImGuiExample();

        void DrawSetting(GLFWwindow* a_window);
        void Update(float a_deltaTime);
        void Draw(GLFWwindow* a_window);
        void Uninstall();
        void ProcessInput(int a_direction, float a_deltaTime);
    
    private:

        bool mShowDemoWindow = true;
        bool mShowAnotherWindow = false;
        ImVec4 mClearColor = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
};