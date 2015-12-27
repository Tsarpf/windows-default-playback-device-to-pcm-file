#pragma once

#include <mmdeviceapi.h>
#include <Audioclient.h>
#include <audiopolicy.h>
#include "AudioSink.h"

HRESULT RecordAudioStream(AudioSink *pMySink);
