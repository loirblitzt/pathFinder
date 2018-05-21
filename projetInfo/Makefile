CC = gcc
include = include
src = src
objdir = obj
obj = $(objdir)/lecture.o $(objdir)/L_ARC.o $(objdir)/affichage.o $(objdir)/dijkstra.o  $(objdir)/liste.o
cmpflag = -ggdb #-g for allowing gdb debug -c for clean build
EXEC = test_dijkstra#main.exe

all : $(EXEC)

$(objdir)/%.o: $(src)/%.c
	$(CC) $(cmpflag) -c -I$(include) -o $@ $<

main.exe: $(obj)
	$(CC) -o $@ $^

ut_lec1 : $(obj) $(objdir)/ut_lecture.o
	$(CC) -o $@ $^
test_dijkstra : $(obj) $(objdir)/test_dijkstra.o
	$(CC) -o $@ $^	
clean:
	rm $(objdir)/*.o

mrproper: clean
