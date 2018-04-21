

//Como compilar: g++ main.cpp -o main -lopenal -lalut -fpermissive -w
//OpenAL: sudo apt-get install libopenal0a libopenal-dev
//ALUT: sudo apt-get install libalut0 libalut-dev

// Maximum data buffers we will need.
#define NUM_BUFFERS 1

// Maximum emissions we will need.
#define NUM_SOURCES 1

// These index the buffers and sources.
#define EXPLOSAO 0


// Buffers hold sound data.
ALuint Buffers[NUM_BUFFERS];

// Sources are points of emitting sound.
ALuint Sources[NUM_SOURCES];

// Position of the source sounds.
ALfloat SourcesPos[NUM_SOURCES][3];

// Velocity of the source sounds.
ALfloat SourcesVel[NUM_SOURCES][3];

// Position of the listener.
ALfloat ListenerPos[] = { 0.0, 0.0, 0.0 };

// Velocity of the listener.
ALfloat ListenerVel[] = { 0.0, 0.0, 0.0 };

// Orientation of the listener. (first 3 elements are "at", second 3 are "up")
ALfloat ListenerOri[] = { 0.0, 0.0, -1.0, 0.0, 1.0, 0.0 };

/*
 * ALboolean LoadALData()
 *
 *	This function will load our sample data from the disk using the alut
 *	utility and send the data into OpenAL as a buffer. A source is then
 *	also created to play that buffer.
 */
ALboolean LoadALData(){
	// Variables to load into.
	ALenum format;
	ALsizei size;
	ALvoid* data;
	ALsizei freq;
	ALboolean loop;

	// Load wav data into buffers.
	alGenBuffers(NUM_BUFFERS, Buffers);

	if(alGetError() != AL_NO_ERROR)	return AL_FALSE;

	alutLoadWAVFile("explosao.wav", &format, &data, &size, &freq, &loop);
	alBufferData(Buffers[EXPLOSAO], format, data, size, freq);
	alutUnloadWAV(format, data, size, freq);

	// Bind buffers into audio sources.
	alGenSources(NUM_SOURCES, Sources);

	if(alGetError() != AL_NO_ERROR) return AL_FALSE;

	alSourcei (Sources[EXPLOSAO], AL_BUFFER,   Buffers[EXPLOSAO]   );
	alSourcef (Sources[EXPLOSAO], AL_PITCH,    1.0f              );
	alSourcef (Sources[EXPLOSAO], AL_GAIN,     1.0f              );
	alSourcefv(Sources[EXPLOSAO], AL_POSITION, SourcesPos[EXPLOSAO]);
	alSourcefv(Sources[EXPLOSAO], AL_VELOCITY, SourcesVel[EXPLOSAO]);
	alSourcei (Sources[EXPLOSAO], AL_LOOPING,  AL_FALSE          );

	// Do another error check and return.
	if(alGetError() != AL_NO_ERROR) return AL_FALSE;

	return AL_TRUE;
}

/*
 * void SetListenerValues()
 *
 *	We already defined certain values for the listener, but we need
 *	to tell OpenAL to use that data. This function does just that.
 */
void SetListenerValues(){
	alListenerfv(AL_POSITION,    ListenerPos);
	alListenerfv(AL_VELOCITY,    ListenerVel);
	alListenerfv(AL_ORIENTATION, ListenerOri);
}

/*
 * void KillALData()
 *
 *	We have allocated memory for our buffers and sources which needs
 *	to be returned to the system. This function frees that memory.
 */
void KillALData(){
	alDeleteBuffers(NUM_BUFFERS, Buffers);
	alDeleteSources(NUM_SOURCES, Sources);
	alutExit();
}
