#include "Sprite.h"

Sprite::Sprite(void)
{
	m_nImages = 0;
	m_image = 0;
	m_nActiveIndex = 0;
	m_nTimes = 0;

	m_nTimesPerFrame = 300;
}

Sprite::~Sprite(void)
{
	if (m_image)
	{
		delete[] m_image;
	}
}

int Sprite::Init(const char* cFileName, const char* ext, int nImages, double scale )
{
	m_nImages = nImages;
	m_image = new QImage[m_nImages];

	for (int m = 0; m < m_nImages; m++)
	{
		char cFile[256];
		if (m_nImages > 1)
			sprintf(cFile, "Image/%s%d.%s", cFileName, m, ext);
		else
			sprintf(cFile, "Image/%s.%s", cFileName, ext);

		m_image[m].load(cFile);
	}

	m_nHeight = m_image[0].height();
	m_nWidth = m_image[0].width();
	width = m_nWidth * scale;
	height = m_nHeight * scale;
	return 0;
}


void Sprite::Render(QPainter& painter)
{
	if (m_image == 0)return;

	QRectF target(center.x - m_nWidth / 2, center.y - m_nHeight / 2, m_nWidth, m_nHeight); //建立目标矩形
	QRectF source(0.0, 0.0, m_nWidth, m_nHeight); //建立源矩形，用来框定源图像文件中要显示的部分
	painter.drawImage(target, m_image[m_nActiveIndex], source);
}

void Sprite::Update(int time)
{
	MTObject::Update(time);
	CheckFrame(time);
}

void Sprite::CheckFrame(int time)
{
	if (m_nImages <= 0)return;

	m_nTimes += time;

	m_nActiveIndex = m_nTimes / m_nTimesPerFrame % m_nImages;
}

void Sprite::CheckPosition(int width, int height)
{
	/*if (pos.x <= m_nWidth / 2)
	{
		pos.x = m_nWidth / 2;
		velocity.x = -velocity.x;
	}
	else if (pos.x >= width - m_nWidth / 2) {
		pos.x = width - m_nWidth / 2;
		velocity.x = -velocity.x;
	}

	if (pos.y <= m_nHeight / 2) {
		pos.y = m_nHeight / 2;
		velocity.y = -velocity.y;
	}
	else if (pos.y >= height - m_nHeight / 2) {
		pos.y = height - m_nHeight / 2;
		velocity.y = -velocity.y;
	}*/
}