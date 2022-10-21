CC=gcc
CFLAGS=-g
TARGET:test.exe CommandParser/libcli.a pkt_gen.exe
LIBS=-lpthread -L ./CommandParser -lcli
OBJS=gluethread/glthread.o \
		  graph.o 		   \
		  topologies.o	   \
		  net.o			   \
		  comm.o		   \
		  Layer2/layer2.o  \
		  Layer3/layer3.o  \
		  Layer4/layer4.o  \
		  Layer5/layer5.o  \
		  Layer5/ping.o    \
		  nwcli.o		   \
		  utils.o		   \
		  Layer2/l2switch.o \
		  pkt_dump.o	   \
          WheelTimer/WheelTimer.o

pkt_gen.exe:pkt_gen.o
	${CC} ${CFLAGS} -I Layer3/layer3.h -I Layer2/layer2.h -I utils.h pkt_gen.o utils.o -o pkt_gen.exe

pkt_gen.o:pkt_gen.c
	${CC} ${CFLAGS} -c pkt_gen.c -o pkt_gen.o

test.exe:testapp.o ${OBJS} CommandParser/libcli.a
	${CC} ${CFLAGS} testapp.o ${OBJS} -o test.exe ${LIBS}

testapp.o:testapp.c
	${CC} ${CFLAGS} -c testapp.c -o testapp.o

gluethread/glthread.o:gluethread/glthread.c
	${CC} ${CFLAGS} -c -I gluethread gluethread/glthread.c -o gluethread/glthread.o

WheelTimer/WheelTimer.o:WheelTimer/WheelTimer.c
	${CC} ${CFLAGS} -c -I gluethread -I WheelTimer WheelTimer/WheelTimer.c -o WheelTimer/WheelTimer.o

graph.o:graph.c
	${CC} ${CFLAGS} -c -I . graph.c -o graph.o

topologies.o:topologies.c
	${CC} ${CFLAGS} -c -I . topologies.c -o topologies.o

net.o:net.c
	${CC} ${CFLAGS} -c -I . net.c -o net.o

comm.o:comm.c
	${CC} ${CFLAGS} -c -I . comm.c -o comm.o

pkt_dump.o:pkt_dump.c
	${CC} ${CFLAGS} -c -I . pkt_dump.c -o pkt_dump.o

Layer2/layer2.o:Layer2/layer2.c
	${CC} ${CFLAGS} -c -I . Layer2/layer2.c -o Layer2/layer2.o

Layer2/l2switch.o:Layer2/l2switch.c
	${CC} ${CFLAGS} -c -I . Layer2/l2switch.c -o Layer2/l2switch.o

Layer3/layer3.o:Layer3/layer3.c
	${CC} ${CFLAGS} -c -I . Layer3/layer3.c -o Layer3/layer3.o

Layer4/layer4.o:Layer4/layer4.c
	${CC} ${CFLAGS} -c -I . Layer4/layer4.c -o Layer4/layer4.o
	
Layer5/layer5.o:Layer5/layer5.c
	${CC} ${CFLAGS} -c -I . Layer5/layer5.c -o Layer5/layer5.o

Layer5/ping.o:Layer5/ping.c
	${CC} ${CFLAGS} -c -I . Layer5/ping.c -o Layer5/ping.o

nwcli.o:nwcli.c
	${CC} ${CFLAGS} -c -I . nwcli.c  -o nwcli.o

utils.o:utils.c
	${CC} ${CFLAGS} -c -I . utils.c -o utils.o

CommandParser/libcli.a:
	(cd CommandParser; make)
clean:
	rm -f *.o
	rm -f gluethread/glthread.o
	rm -f *exe
	rm -f Layer2/*.o
	rm -f Layer3/*.o
	rm -f Layer4/*.o
	rm -f Layer5/*.o
	rm -f WheelTimer/WheelTimer.o
all:
	make

cleanall:
	make clean
	(cd CommandParser; make clean)
	rm -f WheelTimer/WheelTimer.o
