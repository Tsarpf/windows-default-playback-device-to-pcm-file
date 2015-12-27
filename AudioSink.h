#pragma once

#include <mmdeviceapi.h>
#include <Audioclient.h>
#include <audiopolicy.h>
#include <iostream>
#include <fstream>

class AudioSink 
{
	WORD m_cbSize;
	DWORD m_nBlockAlign;
	WORD m_nChannels;
	DWORD m_nSamplesPerSec;
	WORD m_bitsPerSample;
	std::ofstream file;
public:
	AudioSink();
	~AudioSink();
	HRESULT SetFormat(WAVEFORMATEX* format);
	HRESULT CopyData(const BYTE*, const UINT32, BOOL *);
};
