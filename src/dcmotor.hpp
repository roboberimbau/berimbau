#ifndef DCMOTOR_HPP_
#define DCMOTOR_HPP_

#include <stdint.h>

namespace dcmotor
{
	enum MotorAction
	{
		Break,
		TurnCW,
		TurnCCW,
		OFF,
	};
	
	class DCMotor
	{
	public:
		DCMotor();
		void Action(MotorAction Action, uint8_t Power);
		~DCMotor();
	private:
	};
}

#endif