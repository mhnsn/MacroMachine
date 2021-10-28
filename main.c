/** @file */

#include <stdio.h>

enum ticTacToeControl_state
{
	init_st,
	computer_turn_st,
	display_winner_st,
	ad_timer_running_st,
	wait_for_user_st,
} currentState = init_st;

typedef struct
{
	char* name;
} state_t;

#define STATE_LIST(machineName, init, halt, ...) \
enum 	machineName ## _state	\
{														\
init,												\
__VA_ARGS__,								\
halt												\
} currentState = init_st; 

#define STATE_DEF(x)
#define TRANSITION(x,y)	

/**
* This is a 6-tuple for both mealy and moore machines.
*	
*  For mealy: (S, S_0, sigma, lambda, T, G) consisting of the following:
*		 - a finite set of states S
*		 - a start state (also called initial state) S_0 which is an element of S
*		 - a finite set called the input alphabet sigma
*		 - a finite set called the output alphabet Lambda
*		 - a transition function T, mapping pairs of a state and an input symbol to the corresponding next state.
*		 - an output function G, mapping pairs of a state and an input symbol to the corresponding output symbol.
*  
*	For moore: (Q, q_0, sigma, O, delta, G) consisting of the following:
*		 - A finite set of states Q
*		 - A start state (also called initial state) q_0 which is an element of Q
*		 - A finite set called the input alphabet sigma 
*		 - A finite set called the output alphabet O
*		 - A transition function delta mapping a state and the input alphabet to the next state
*		 - An output function G mapping each state to the output alphabet
*/
#define MACHINE(STATES, START_STATE, INPUT_ALPHABET, OUTPUT_ALPHABET, TRANSITION_FUNCTION, OUTPUT_FUNCTION) ;

#define INIT_MACHINE(init_st) do{} while(0);

// need a way to track either a Mealy or Moore machine
#ifdef MEALY
#define MEALY_OR_MOORE switch(CUR_STATE) {}; switch(CUR_STATE){};
#else
#define MEALY_OR_MOORE	switch(CUR_STATE) {}; switch(CUR_STATE){};
#endif

#define HALT_MACHINE() do{} while(0);

#define RUN(machineName) 			\
	do {												\
		INIT_MACHINE(START_STATE)	\
		MEALY_OR_MOORE						\
		HALT_MACHINE()						\
	} while(1);

#define CUR_STATE currentState

int main(void)
{
  RUN(the_incredible_machine);
  return 0;
}