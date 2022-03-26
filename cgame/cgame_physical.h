int cgame_collision_pixel(int x,int y,int a,int b,int c,int d,int view){

	if(view==1)gotoxy(x,y),printf("█");

	// (a,b) == (c,d) TRUE
	// (a,b) != (c,d) FALSE

	if(a==c && b==d)return 1;
	
	if(a!=c || b!=d)return 0;
	
}

int cgame_colission_rectangle(int x,int y,int width,int height,int a,int b,int c,int d,int view){
	
	// LOGICAL RULES
	
	if(width<=0)width=1;
	if(height<=0)height=1;
	
	// RECTANGLE DRAWING	
			
	for(int i=0;i<width;i++){
		for(int j=0;j<height;j++){
			
			if(view==1)gotoxy(x+i,y+j),printf("█");
		}
	}
	
	// (a,b) == (c,d) TRUE
	// (a,b) != (c,d) FALSE

	if(a==c && b==d)return 1;
	
	if(a!=c || b!=d)return 0;
	
}

int cgame_colission_squad(int x,int y,int area,int a,int b,int c,int d,int view){

	// LOGICAL RULES
	
	if(area<=0 || area<=1 )area=2;

	// SQUARE DRAWING
					
	for(int i=0;i<area;i++){
		for(int j=0;j<area-1;j++){
			
			if(view==1)gotoxy(x+i,y+j),printf("█");
			
		}
	}
	
	//CHECK COLLISION
	
	if(a==c && b==d)return 1;
	
	if(a!=c || b!=d)return 0;
	
}

int cgame_numrandom(int a,int b){
	 
	//RANDOM NUMBERS
	
	b=b+1;
	return a + rand() % (b - a);
	
}




