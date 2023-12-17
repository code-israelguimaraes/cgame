/*	
 * 	AUTHOR: ISRAEL SOUSA GUIMARAES
 *  CREATION DATE 29/01/2019
 *  VERSION CGAME: 0.1	
 *  OPERATION SYSTEM: LINUX
 * 	WRITTER IN: C
 *  MODO: CONSOLE
 *  FONT: TERMINUS 
 *  SIZE: 13
 * -------------------------------------------------------------------
 *
 * USE THE CHARACTERES DRAWING: █
 * 
 * -------------------------------------------------------------------
 *  
 * */

// LIBRARIES CGAME 0.1

/*CHANGE YOUR PATH,TO ACESS CGAME FILE*
 * 
 * EXEMPLE:#include "/home/user/xxxx/xxxxx/xxxxx/cgame_in.h"
 * 					/home/israelguimaraes/C/Games/Cgame/cgame_in.h 
 *
 */
 
#include "/home/israelguimaraes/C/Games/Cgame/cgame_in.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_sys.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_color.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_graphics.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_physical.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_text.h"
#include "/home/israelguimaraes/C/Games/Cgame/cgame_song.h"

// CGAME VARIABLES
char tecla;						// VARIABLE TO CAPTURE KEYBOARD
int start_game = 1;				// START GAME, BEING START = TRUE
int clocks = 0; 				// CLOCK VARIABLE FOR IN-GAME CONTROL			
int background = 0; 			// TERMINAL BACKGROUND COLOR (1 TO 16 COLORS)
int once=1;					    // LOOP VARIABLE ONLY ONCE, IF A FUNCTION IS REPEATED, IF NEEDED
int logic_controller = 0;       // GAME CONTROL VARIABLE
int stop=0;						// VARIABLE TO STOP GAME
int level=0;					// VARIABLE LEVEL
int score=0;					// SCORE GAME

/*MY GAME LIBRARY YOU CAN CREATE YOUR LIBRARIES AND PUT BELOW FOR ORGANIZATION
 * 
 * EXEMPLE:
 * 
 * #include ENEMY.H
 * #include PLAYER.H
 * #include FILE.H
 * 
 * */

//----------------------------------------------------------------------

int main(){

	//MY WINDOW TITLE
	system("echo '\033]0;My Title \007'");
	
	cgame_fullscreen();			  //FULLSCREEN
	cgame_background(background); //BACKGROUND COLOR
	cgame_clear();				  //CLEAR SCREEN

	while(start_game==1){

		// TURN OFF TERMINAL FUNCTION CURSOR OFF
		cgame_curso(0);
		cgame_echo(0);

		// ** YOUR CODE HERE BELOW **
	
		//--------------------------------------------------------------
		
		while(kbhit()){
		
			// KBHIT() = COMMAND FOR KEYBOARD DATA ENTRY
			tecla = getch();
		
			// LOGIC
			
			
		//--------------------------------------------------------------	
		}

		// GAME LOOPS (PUT ALL THE ANIMATION AND LOGIC FUNCTIONS BELOW KBHIT)
		srand(time(NULL));
		clocks++;
		if(clocks==100)clocks=0; //TIME CONTROL AT THE TERMINAL
		
		//--------------------------------------------------------------
		
		// ** CODE LOOP FUNCTIONS BELOW**
		
		//--------------------------------------------------------------
		
		cls_buffer(); // SCREEN CLEANING
		
		//--------------------------------------------------------------
		
		once=0; // VARIABLE TO PERFORM CODE ONCE IN THE PROGRAM
		
		//--------------------------------------------------------------
	
		//  TERMINAL FPS
		FPS("60");

	}
	
	// CONNECT TERMINAL FUNCTION
	cgame_curso(1);
	cgame_echo(1);
	
  return 0;

}
