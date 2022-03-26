void cgame_screen(int x,int y,int wight,int height,int color){

	cgame_color(color);	
		
	for(int i=0+wight;i<=126-wight;i++){
		gotoxy(x+i,y+height),printf("█");	
		gotoxy(x+i,y+39-height),printf("█");	
	}	
	
	for(int j=1+height;j<=38-height;j++){
		gotoxy(x+wight,y+j),printf("█");	
		gotoxy(x+126-wight,y+j),printf("█");	
	}	
	
	
}

void cgame_pixel(int x,int y,int color){
	
	// CORES
	
	cgame_color(color);
	
	// DESENHAR PIXEL
	
	gotoxy(x,y),printf("█");
	
}

void cgame_rectangle(int x,int y,int width,int height,int color){
	
	// COLOR
	
	cgame_color(color);
	
	// LOGICAL RULES
	
	if(width<=0)width=1;
	if(height<=0)height=1;
	
	// RECTANGLE DRAWING
			
	for(int i=0;i<width;i++){
		for(int j=0;j<height;j++){
			
			gotoxy(x+i,y+j),printf("█");
		}
	}
	
	
}

void cgame_square(int x,int y,int area,int color){
	
	// COLOR
	
	cgame_color(color);
	
	// LOGICAL RULES
	
	if(area<=0 || area<=1 )area=2;
	
	// SQUARE DRAWING	
					
	for(int i=0;i<area;i++){
		for(int j=0;j<area-1;j++){
			
			gotoxy(x+i,y+j),printf("█");
		}
	}
	
	

}











































































