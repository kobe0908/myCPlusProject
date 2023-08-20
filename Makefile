build:
	g++ main.cpp -o app
	
copy: 
	rm -rf $(CURDIR)
	cp -rf /mnt/c/Users/kobe/Desktop/myCPlusProject/ /home/frank/

run: 
	@g++ main.cpp -o app
	@./app 
	@rm app