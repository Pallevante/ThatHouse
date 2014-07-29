# Makefile
# Version 2014.07:3 by Peter Håkansson

# Changelog:
#
# Version 2014.07:1 
# First version with a -Wall flag
#
# Version 2014.07:2 
# Changed the flag to -std=c++11 standard.
#
# Version 2014.07:3
# Fixed so I think it works. Yay!


# The objects we need to create/reference
OBJECTS = BaseballBat.o Chapters.o Characters.o Dialog.o Game.o GameAI.o Garbage.o Inventory.o Item.o Juuli.o Main.o Note.o Player.o Rock.o Room.o RoomContent.o Sound.o Stephen.o Story.o ThreadWriting.o UserInput.o

# Output file
EXEC = ThatHouse

# Flags
CXXFLAGS = -Wall

# The compiler
CXX = g++ -std=c++11

all: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJECTS)