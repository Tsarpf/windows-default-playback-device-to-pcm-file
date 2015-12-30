#include "AudioListener.h"
#include "AudioSink.h"
int main()
{
	CoInitialize(nullptr);
	AudioListener listener(16, WAVE_FORMAT_PCM, 4, 0);
	AudioSink sink;
	listener.RecordAudioStream(&sink);
}