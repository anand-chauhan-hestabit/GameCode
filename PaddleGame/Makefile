# this code is building and dynamically compiled and run for linux

CXX := g++
CXXFLAGS := -std=c++11 -Wall

# Add the source files of your project
SOURCES := gameMode.cpp sourceFiles/UserInterFace.cpp  sourceFiles/ball.cpp sourceFiles/player.cpp sourceFiles/paddle.cpp sourceFiles/inputSystem.cpp

# Specify the name of the output executable
EXECUTABLE := dynamicPaddleGame

# Specify the libraries to link (e.g., SFML)
LIBRARIES := -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network 

.PHONY: all clean run

all: $(EXECUTABLE)

$(EXECUTABLE): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBRARIES)

clean:
	rm -f $(EXECUTABLE)

run: clean $(EXECUTABLE)
	./$(EXECUTABLE)



# this code is building and statically compiled run for linux

# CXX := g++
# CXXFLAGS := -std=c++14 -ILibrary/SFML/include
# LIBDIR := -LLibrary/SFML/lib -L/usr/X11R6/lib
# LIBS := -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -static-libgcc -static-libstdc++ -lX11 -lXrandr -ludev -lXcursor -lfreetype

# # Add the source files of your project
# SOURCES := gameMode.cpp sourceFiles/UserInterFace.cpp sourceFiles/ball.cpp sourceFiles/player.cpp sourceFiles/paddle.cpp sourceFiles/inputSystem.cpp

# # Specify the name of the output executable
# EXECUTABLE := StaticPaddleGame

# .PHONY: all clean run

# all: $(EXECUTABLE)

# $(EXECUTABLE): $(SOURCES)
# 	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBDIR) $(LIBS)

# clean:
# 	rm -f $(EXECUTABLE)

# run: clean $(EXECUTABLE)
# 	./$(EXECUTABLE)


