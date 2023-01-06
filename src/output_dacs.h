#ifndef output_dacs_h_
#define output_dacs_h_

#include "Arduino.h"
#include "AudioStream.h"
#include "Adafruit_ZeroDMA.h"

class AudioOutputAnalogStereo : public AudioStream
{
	public:
	AudioOutputAnalogStereo(void) : AudioStream(2, inputQueueArray) { begin(); }
	void begin(void);
	// void analogReference(int ref);
	private:
	static audio_block_t *block_left_1st;
	static audio_block_t *block_left_2nd;
	static audio_block_t *block_right_1st;
	static audio_block_t *block_right_2nd;
	static audio_block_t block_silent;
	static bool update_responsibility;
	audio_block_t *inputQueueArray[2];
	static Adafruit_ZeroDMA *dma0;
	static DmacDescriptor *desc;
	static void isr(Adafruit_ZeroDMA *dma);

	// For test
	volatile uint32_t tone_incr;
};

#endif
