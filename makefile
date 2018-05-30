CC=g++
main.out: main.o pay_record.o payment.o user.o
	$(CC) main.o pay_record.o payment.o user.o -o main.out

main.o: main.cpp pay_record.h
	$(CC) -c main.cpp

pay_record.o: pay_record.cpp pay_record.h payment.h user.h
	$(CC) -c pay_record.cpp

payment.o: payment.cpp payment.h
	$(CC) -c payment.cpp

user.o: user.cpp user.h
	$(CC) -c user.cpp

clean:
	rm pay_record.o main.o payment.o user.o
