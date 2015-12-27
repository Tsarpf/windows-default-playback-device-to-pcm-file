#include "Source.h"
#include "AudioSink.h"
int main()
{
	CoInitialize(nullptr);
	AudioSink sink;
	RecordAudioStream(&sink);
}