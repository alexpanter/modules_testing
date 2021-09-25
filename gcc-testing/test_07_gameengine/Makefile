MAKEFLAGS += --no-print-directory

all: engine testgame

run:
	@cd testgame && make run

engine:
	@make -BC engine/

testgame:
	@make -BC testgame/


cleanall:
	rm -rf gcm.cache/
	mkdir -p gcm.cache
	cd engine/ && make clean
	cd testgame/ && make clean

