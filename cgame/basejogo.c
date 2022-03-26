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

#include "/home/israel/C/Games/cgame/cgame_in.h"
#include "/home/israel/C/Games/cgame/cgame_sys.h"
#include "/home/israel/C/Games/cgame/cgame_color.h"
#include "/home/israel/C/Games/cgame/cgame_graphics.h"
#include "/home/israel/C/Games/cgame/cgame_physical.h"
#include "/home/israel/C/Games/cgame/cgame_text.h"
#include "/home/israel/C/Games/cgame/cgame_song.h"

//MY GAME LIBRARY


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

//----------------------------------------------------------------------

int main(){

	//MY WINDOW TITLE
	system("echo '\033]0;My Title \007'");
	
	cgame_fullscreen();			  //FULLSCREEN
	cgame_background(background); //BACKGROUND COLOR
	cgame_clear();

	while(start_game==1){

		// TURN OFF TERMINAL FUNCTION

		cgame_curso(0);
		cgame_echo(0);

		// ** YOUR CODE HERE **

		// OPTION SCRREN: LIMIT FOR ONE GAME
		
		cgame_screen(0,0,20,5,15);

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
		
		// ** CODE LOOP **
		
		//--------------------------------------------------------------
		
		cls_buffer(); // SCREEN CLEANING
		
		//--------------------------------------------------------------
		
		once=0; // VARIABLE TO PERFORM CODE ONCE IN THE PROGRAM
		
		//--------------------------------------------------------------
		
		// INFORMATION
		
		
		//  TERMINAL FPS

		FPS("60");

	}
	
	// CONNECT TERMINAL FUNCTION

	cgame_curso(1);
	cgame_echo(1);
	
  return 0;

}
