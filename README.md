# Windows default playback device to pcm file
Writes any and all audio coming to the currently selected Windows default audio _playback_ device to a file in 16 bit 44.1khz stereo PCM. This means it can be used to record any audio that is currently playing.

A blog post with some extra insight: https://rabid.prototyping.xyz/programmatically-capture-whats-playing-on-windows/

- AudioListener is a cleaned up version of https://msdn.microsoft.com/en-us/library/windows/desktop/dd370800(v=vs.85).aspx
- Only works on Windows (obviously)
- Only tested once on my computer.
- Made in C++ using WASAPI
- Mostly for my personal use in live audio visualization
- Writes to a file named test.pcm
