#include "FileWriteSink.h"
#include <iostream>
#include <fstream>

FileWriteSink::FileWriteSink(int Channels, int BitDepth)
{
	m_nChannels = Channels;
	m_bitDepth = BitDepth;
	file.open("test.pcm", std::ios::out | std::ios::app | std::ios::binary);
}


FileWriteSink::~FileWriteSink()
{
	file.close();
}

int FileWriteSink::CopyData(const BYTE* Data, const int NumFramesAvailable)
{
	int bytesPerSample = m_bitDepth / 8;
	unsigned int byteCount = NumFramesAvailable * bytesPerSample * m_nChannels;

	file.write((const char *)Data, byteCount);

	HRESULT notImpl = 0;
	return notImpl;
}
