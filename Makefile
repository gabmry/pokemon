all:
	g++ main.cpp personnages.cpp dialogues.cpp -g3 -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio && ./a.out
	
