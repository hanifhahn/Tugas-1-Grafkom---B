#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>
#include<gl/glut.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	bool flag = true;
	float xPosition = 0;
	float yPosition = 0;
	//float counter = glutGet(GLUT_ELAPSED_TIME);
	int counter = 0;
	int naikTurun = 1;

	float angle = 0;
	float angleBalingAtas = 0;
	float angleBalingEkor = 0;
	float scale = 1;
	float size = 0.000001f;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void DrawColoredCube();
	void DrawColoredCube1();
	void DrawColoredCube2();
	void DrawColoredCube3();
	void DrawColoredCube4();
	void DrawColoredPlane();
};

