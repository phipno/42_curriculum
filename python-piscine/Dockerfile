# ------------------------------------------------------------------------------------ #
#                                                                                .|    #
#     Dockerfile                                     /     (__)          |/            #
#                                                          (oo)------/'   ,__,    ,    #
#     By: pnolte <pnolte@student.42heilbronn.de>        |  (__)     ||    (oo)_____/   #
#                                                             ||---/||    (__)    ||   #
#     Created: 2024/04/25 13:05:20 by pnolte         |/                 ,    ||--w||   #
#                                                  ,,       !              |'          #
#                                                       ,           ,|             |/  #
# ---------------8<------------------[ mooooooo ]------------------------------------- #


FROM python:3.10.14-bookworm

RUN apt-get update

RUN pip install --upgrade pip

RUN pip install flake8

RUN echo "alias norminette=flake8" >> ~/.bashrc

WORKDIR /cow🐄

EXPOSE 8000

CMD ["tail", "-f"]

#.~"~._.~"~._.~"~._.~"~.__.~"~._.~"~._.~  EOF  ~._.~"~.__.~"~._.~"~._.~"~._.~"~._.~"~._.~#