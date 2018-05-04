CC = gcc
include = include
src = src
objdir = obj
obj = $(objdir)/mytas.o  $(objdir)/testtri.o
EXEC = main.exe

all : $(EXEC)

$(objdir)/%.o: $(src)/%.c
	$(CC) -c -I$(include) -o $@ $<

main.exe: $(obj)
	$(CC) -o $@ $^

clean:
	rm $(objdir)/*.o

mrproper: clean
