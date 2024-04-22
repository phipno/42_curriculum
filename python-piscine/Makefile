#*--------------------------------------------------------------------------------------*#
#*                                                                                .|    *#
#*     $FILENAME__________________________________    /     (__)          |/            *#
#*                                                          (oo)------/'   ,__,    ,    *#
#*     By: $AUTHOR________________________________       |  (__)     ||    (oo)_____/   *#
#*                                                             ||---/||    (__)    ||   *#
#*     Created: $CREATEDAT_________ by $CREATEDBY_    |/                 ,    ||--w||   *#
#*                                                  ,,       !              |'          *#
#*                                                       ,           ,|             |/  *#
#*----------------8<------------------[ mooooooo ]--------------------------------------*#

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~ VARS  ~._.~"~.__.~"~._.~"~._.~"~._.~"~._.~"~._.~#

IMAGE_NAME := python-piscine
CONTAINER_NAME := python-piscine

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~ RULES ~._.~"~.__.~"~._.~"~._.~"~._.~"~._.~"~._.~#

all: build run

build:
	docker build . -t $(IMAGE_NAME)

run:
	docker run -d -p 8000:8000 -v $(PWD):/app --name $(CONTAINER_NAME) $(IMAGE_NAME)

stop:
	docker stop $(CONTAINER_NAME) || true

clean: stop
	docker rm $(CONTAINER_NAME) || true

fclean: clean
	docker system prune
	docker volume prune

exec:
	docker exec -it $(CONTAINER_NAME) bash

status:
	@echo "\033[34m### Status ${COMPOSE_PROJECT_NAME} ###\033[0m"
	@@echo "\033[32mContainers:\033[0m"
	-@docker ps -a --filter "name=42_python"
	@echo "\033[32mImages:\033[0m"
	-@docker image ls

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~  EOF  ~._.~"~.__.~"~._.~"~._.~"~._.~"~._.~"~._.~#