#ifndef Joint_h
#define Joint_h

#include "Arduino.h"

class Joint{

	private:
		int v_min, v_max;
		float angle;
		float angle_dest;
		float move_duration;

	public:
		Joint();
		void setPos(int, int);
		void update();
		boolean isDone();
}

#endif