# ------------------------------------------------------------------------------------ #
#                                                                                .|    #
#     Makefile                                       /     (__)          |/            #
#                                                          (oo)------/'   ,__,    ,    #
#     By: pnolte <pnolte@student.42heilbronn.de>        |  (__)     ||    (oo)_____/   #
#                                                             ||---/||    (__)    ||   #
#     Created: 2024/04/25 13:04:51 by pnolte         |/                 ,    ||--w||   #
#                                                  ,,       !              |'          #
#                                                       ,           ,|             |/  #
# ---------------8<------------------[ mooooooo ]------------------------------------- #


#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~ VARS  ~._.~"~.__.~"~._.~"~._.~"~._.~"~._.~"~._.~#

IMAGE_NAME := python-3.10_image
CONTAINER_NAME := python-3.10

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~ RULES ~._.~"~.__.~"~._.~"~._.~"~._.~"~._.~"~._.~#


build:
	docker build . -t $(IMAGE_NAME)

run:
	docker run -d -p 8000:8000 -v $(PWD):/cow🐄 --name $(CONTAINER_NAME) $(IMAGE_NAME)

stop:
	docker stop $(CONTAINER_NAME) || true
	docker rm $(CONTAINER_NAME) || true

clean: stop
	docker image rm $(IMAGE_NAME)

prune:
	docker container prune -f
	docker image prune -f
	docker system prune -f

exec:
	docker exec -it $(CONTAINER_NAME) bash

status:
	docker ps -a --filter "name=python-3.10"
	docker image ls

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~  EOF  ~._.~"~.__.~"~._.~"~._.~"~._.~"~._.~"~._.~#
