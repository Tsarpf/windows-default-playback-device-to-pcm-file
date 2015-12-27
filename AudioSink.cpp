#include "AudioSink.h"
#include <iostream>
#include <fstream>

AudioSink::AudioSink()
{
	file.open("test.pcm", std::ios::out | std::ios::app | std::ios::binary);
}


AudioSink::~AudioSink()
{
	file.close();
}

HRESULT AudioSink::SetFormat(WAVEFORMATEX* format)
{
	m_cbSize = format->cbSize;
	m_nBlockAlign = format->nBlockAlign;
	m_nChannels = format->nChannels;
	m_nSamplesPerSec = format->nSamplesPerSec;
	m_bitsPerSample = format->wBitsPerSample;

	HRESULT notImpl = 0;
	return notImpl;
}

//pData, numFramesAvailable, &bDone);
HRESULT AudioSink::CopyData(const BYTE* pData, const UINT32 numFramesAvailable, BOOL* bDone)
{
	int bytesPerSample = m_bitsPerSample / 8;
	unsigned int byteCount = numFramesAvailable * bytesPerSample * m_nChannels;

	int step = m_bitsPerSample / 8;

	file.write((const char *)pData, byteCount);

	HRESULT notImpl = 0;
	return notImpl;
}
