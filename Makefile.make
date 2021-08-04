# COMPILER_FLAGS specifies the additional compilation options we're using
# -w suppresses all warnings
# -Wl,-subsystem,windows gets rid of the console window
COMPILER_FLAGS = -Wall

# LINKER_FLAGS specifies the libraries we're linking against
LINKER_FLAGS = -lmingw32 -lSDL2main  -lSDL2 -lSDL2_image

# CC specifies which compiler we're using
CC = gcc

OBJS = main.o Init_Glob_Var.o CheckCircle.o Cleanup.o CreateTextures.o CreateWindow.o Delay.o DetectCollision.o DrawLine.o Game_Over.o GoBackward.o GoForward.o GoLeft.o GoRight.o LoadContent.o loop.o MoveCircle.o OnRender.o PlayLoop.o Random.o ResizeWindow.o Set_Background.o

OBJ_FLD = ./obj

OBJS_FILES = $(OBJ_FLD)/main.o $(OBJ_FLD)/Init_Glob_Var.o $(OBJ_FLD)/CheckCircle.o $(OBJ_FLD)/Cleanup.o $(OBJ_FLD)/CreateTextures.o $(OBJ_FLD)/CreateWindow.o $(OBJ_FLD)/Delay.o $(OBJ_FLD)/DetectCollision.o $(OBJ_FLD)/DrawLine.o $(OBJ_FLD)/Game_Over.o $(OBJ_FLD)/GoBackward.o $(OBJ_FLD)/GoForward.o $(OBJ_FLD)/GoLeft.o $(OBJ_FLD)/GoRight.o $(OBJ_FLD)/LoadContent.o $(OBJ_FLD)/loop.o $(OBJ_FLD)/MoveCircle.o $(OBJ_FLD)/OnRender.o $(OBJ_FLD)/PlayLoop.o $(OBJ_FLD)/Random.o $(OBJ_FLD)/ResizeWindow.o $(OBJ_FLD)/Set_Background.o

LIB_FOLDER = ./lib

SRC_FOLDER = ./src

HEADERS = ./include

EXE = ./bin/RobotGame.exe

# This is the target that compiles our executable
all: $(OBJS)
	$(CC) -o $(EXE) $(OBJS_FILES) -L$(LIB_FOLDER)/SDL2/lib -L$(LIB_FOLDER)/SDL2_image/lib $(LINKER_FLAGS) -s
main.o: $(HEADERS)/common.h $(HEADERS)/Prototypes_Fct.h $(HEADERS)/Define.h 
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/main.c -o $(OBJ_FLD)/main.o
Init_Glob_Var.o: $(HEADERS)/common.h $(HEADERS)/Define.h 
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/Init_Glob_Var.c -o $(OBJ_FLD)/Init_Glob_Var.o
CheckCircle.o: $(HEADERS)/common.h $(HEADERS)/Prototypes_Fct.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/CheckCircle.c -o $(OBJ_FLD)/CheckCircle.o
Cleanup.o: $(HEADERS)/common.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/Cleanup.c -o $(OBJ_FLD)/Cleanup.o
CreateTextures.o: $(HEADERS)/common.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/CreateTextures.c -o $(OBJ_FLD)/CreateTextures.o
CreateWindow.o: $(HEADERS)/common.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/CreateWindow.c -o $(OBJ_FLD)/CreateWindow.o
Delay.o: $(HEADERS)/common.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/Delay.c -o $(OBJ_FLD)/Delay.o
DetectCollision.o: $(HEADERS)/common.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/DetectCollision.c -o $(OBJ_FLD)/DetectCollision.o
DrawLine.o: $(HEADERS)/common.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/DrawLine.c -o $(OBJ_FLD)/DrawLine.o
Game_Over.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/Game_Over.c -o $(OBJ_FLD)/Game_Over.o
GoBackward.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/GoBackward.c -o $(OBJ_FLD)/GoBackward.o
GoForward.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/GoForward.c -o $(OBJ_FLD)/GoForward.o
GoLeft.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/GoLeft.c -o $(OBJ_FLD)/GoLeft.o
GoRight.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/GoRight.c -o $(OBJ_FLD)/GoRight.o
LoadContent.o: $(HEADERS)/common.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/LoadContent.c -o $(OBJ_FLD)/LoadContent.o
loop.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/loop.c -o $(OBJ_FLD)/loop.o
MoveCircle.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/MoveCircle.c -o $(OBJ_FLD)/MoveCircle.o
OnRender.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/OnRender.c -o $(OBJ_FLD)/OnRender.o
PlayLoop.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/PlayLoop.c -o $(OBJ_FLD)/PlayLoop.o
Random.o: $(HEADERS)/common.h $(HEADERS)/Define.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/Random.c -o $(OBJ_FLD)/Random.o
ResizeWindow.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/ResizeWindow.c -o $(OBJ_FLD)/ResizeWindow.o
Set_Background.o: $(HEADERS)/common.h $(HEADERS)/Define.h $(HEADERS)/Prototypes_Fct.h
	$(CC) $(COMPILER_FLAGS) -O2 -I$(LIB_FOLDER)/SDL2/include -I$(LIB_FOLDER)/SDL2_image/include -c $(SRC_FOLDER)/Set_Background.c -o $(OBJ_FLD)/Set_Background.o