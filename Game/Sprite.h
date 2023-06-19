#ifndef _ImageShape_H
#define _ImageShape_H

#include "shape.h"
#include "QImage.h"
#include"MTObject.h"
class Sprite : public MTObject
{
protected:
	QImage* m_image;
	int		m_nImages;
	int		m_nActiveIndex;
	int		m_nTimes; 		//累积的时间
	int		m_nTimesPerFrame;
protected:
	int		m_nWidth, m_nHeight;
public:
	Sprite(void);
	~Sprite(void);

	int Init(const char* cFileName, const char* ext, int nImages, double scale = 1.0);

	void Render(QPainter& painter);

	virtual void Update(int time);

	void CheckFrame(int nTime);
	void CheckPosition(int width, int height);
};
#endif