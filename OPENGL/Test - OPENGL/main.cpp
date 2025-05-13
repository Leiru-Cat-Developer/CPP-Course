#include <iostream>
#include <stdio.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;

const char* vertexShaderSource =
"#version 300 core\n"
"layout (location = 0) in vec3 aPos;\n"
"{/n"
"   glPosition = vec4(aPos.x aPos.y, a.Pos.z,1.0);\n"
"}\0";

const char* fragmentShaderSource =
"#version 330 core\n"
"out vec4 FragColor;\n"
"void main()\n"
"{\n"
"   FragColor = vec4(0.8f,0.3f,0.02f,1.0f);\n"
"}\n\0";

int main() {
	glfwInit();				//Inicializando la ventana

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);					//Especificando la version mayor
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);					//Especificando la version menor
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);	//Nucelo

	//Creando coordenadas del triangulo con flotantes
	GLfloat vertices[] =
	{
		-0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,			//LEFT		CORNER
		0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,				//RIGHT		CORNER
		0.f, 0.5f * float(sqrt(3)) * 2 / 3, 0.0f			//TOP		CORNER
	};

	GLFWwindow* window = glfwCreateWindow(800, 800, "Test", NULL, NULL);	//Creando la ventana

	//Si no carga la ventana
	if (window == NULL) {
		cout << "Error al cargar la ventana" << endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);				//Muestra la ventana

	gladLoadGL();							//Cargando GLAD
	glViewport(0,0,800,800);				//Puerto de vista configurado desde 0,0 hasta 800,800

	GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
	glCompileShader(vertexShader);

	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
	glCompileShader(fragmentShader);

	GLuint shaderProgram = glCreateProgram();

	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);

	glLinkProgram(shaderProgram);
	glDeleteShader(fragmentShader);

	GLuint VAO, VBO;
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);


	glClearColor(0.07f,0.13f,0.17f,1.0f);	//COLOR CON RGB MAS ALPHA
	glClear(GL_COLOR_BUFFER_BIT);			//Borra el background y agrega el nuevo
	glfwSwapBuffers(window);				//Cambiamos el buffer con el buffer de enfrente

	//Mantiene la ventana abierta
	while (!glfwWindowShouldClose(window)) {
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);	//COLOR CON RGB MAS ALPHA
		glClear(GL_COLOR_BUFFER_BIT);			//Borra el background y agrega el nuevo
		glUseProgram(shaderProgram);
		glBindVertexArray(VAO);
		glDrawArrays(GL_TRIANGLES, 0, 3);
		glfwSwapBuffers(window);

		glfwPollEvents();	//Eventos de GLFW
	}

	glDeleteVertexArrays(1, &VAO);
	glDeleteBuffers(1, &VBO);
	glDeleteProgram(shaderProgram);

	glfwDestroyWindow(window);					//Elimina la ventana
	glfwTerminate();							//Terminando la ventana
	return 0;
}