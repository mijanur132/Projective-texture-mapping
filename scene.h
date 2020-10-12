#pragma once

#include "gui.h"
#include "framebuffer.h"
#include "ppc.h"
#include "TMesh.h"
#include "texture.h"



class Scene {
public:

	GUI *gui;
	FrameBuffer *fb;
	FrameBuffer* fb0, *fb1, *fb3, *fb4;
	PPC* ppc, *ppc0,*ppc1, *LightSrcPPC;
	
	TMesh* tmeshes;
	int tmeshesN;
	texture *t1, *t2, *t3, *t4, *t5;
	//int texesN;
	float vf;
	Scene();
	void DBG();
	void NewButton();
	void Render();
	void Render(FrameBuffer* rfb, PPC* rppc);
	void RenderProjector(FrameBuffer* fb0, FrameBuffer* fb1,PPC* ppc0, PPC* ppc1);
//	void Render(FrameBuffer* fb, PPC* ppc,TMesh* tmesh);
	V3 L; // point light source
	float ka; // ambient lighting coefficient
};

extern Scene *scene;