//
// Bachelor of Software Engineering
// Media Design School
// Auckland
// New Zealand
//
// (c) 2018 Media Design School
//
// File Name	: 
// Description	: 
// Author		: Your Name
// Mail			: your.name@mediadesign.school.nz
//

#pragma once

#if !defined(__BACKGROUND_H__)
#define __BACKGROUND_H__

// Library Includes

// Local Includes
#include "entity.h"
#include "Sprite.h"

// Types

// Constants

// Prototypes
class CSprite;

class CBackGround : public CEntity
{
	// Member Functions
public:
	CBackGround();
	virtual ~CBackGround();

	virtual bool Initialise();

	virtual void Draw();
	virtual void Process(float _fDeltaTick);
	void DrawTiled(float _scrollSpeed, float _fDeltaTick);


protected:

private:
	CBackGround(const CBackGround& _kr);
	CBackGround& operator= (const CBackGround& _kr);

	// Member Variables
public:

protected:


private:
	HWND hwnd;
	HINSTANCE hInstance;
	HBITMAP bgHBMP;
	BITMAP bgBMP;
	CBackBuffer* pBackBuffer;
	float bX;
	float bY;
	float bW;
	float bH;
	float winW;
	float winH;
	float scrollY;
};

#endif