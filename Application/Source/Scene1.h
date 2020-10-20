#ifndef SCENE_1_H
#define SCENE_1_H

#include "Scene.h"

class Scene1 : public Scene
{
public:
	enum GEOMETRY_TYPE {
		GEO_TRIANGLE_1 = 0,
		GEO_TRIANGLE_2,
		NUM_GEOMETRY
	};

	Scene1();
	~Scene1();

	virtual void Init();
	virtual void Update(double dt);
	virtual void Render();
	virtual void Exit();

private:
	unsigned m_vertexArrayID[NUM_GEOMETRY];
	unsigned m_vertexBuffer[NUM_GEOMETRY];
	unsigned m_colorBuffer[NUM_GEOMETRY];
	unsigned m_programID;
};

#endif
