#pragma once

#include <cstdlib>
#include <ctime>
#include <string>

using std::string;

class GameOfLife {
private:
	bool** grid;
    bool** tempGrid;
    
    int *xdomain;
    int *ydomain;
    
	int width;
	int height;
    int countNeighbors(const int, const int);
public:
    GameOfLife(const int w, const int h);
	~GameOfLife();
	void randomInit(const double probability = 0.1);
        void setInitConfig(const string init_config);
	void iterate();
    bool organismAt(const int x, const int y);
};
