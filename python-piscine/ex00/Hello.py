# --------------------------8<----------------------------------------------- #
#                                                                        .|   #
#  Hello.py                                  /     (__)          |/           #
#                                                  (oo)------/'   ,__,    ,   #
#  By: phipno <phipno@gmail.com>                |  (__)     ||    (oo)_____/  #
#                                                     ||---/||    (__)    ||  #
#  Created: 2024/04/25 13:44 by phipno       |/                 ,    ||--w||  #
#                                          ,,       !              |'         #
#                                               ,           ,|             |/ #
# ------[ mooooooo ]--------------------------------------------------------- #

ft_list = ["Hello", "tata!"]
ft_tuple = ("Hello", "toto!")
ft_set = {"Hello", "tutu!"}
ft_dict = {"Hello" : "titi!"}

#Lists[] are ordered, changeable and allow duplicate values
ft_list[-1] = "World!"

#Tuple() are ordered, unchangeable and allow duplicate values
changable_list = list(ft_tuple)
changable_list[-1] = "France!"
ft_tuple = tuple(changable_list)

#Set{} unordered, unchangeable* and unindexed
#set items are unchangeable but you can remove and add
ft_set.remove("tutu!")
ft_set.add("Paris!")

#dict{} are used to store data values in key:value pairs
#are changeable and do not allow duplicates since python 3.7 ordered
ft_dict["Hello"] = "42Paris!"

print(ft_list)
print(ft_tuple)
print(ft_set)
print(ft_dict)

# ~"~._.~"~._.~"~._.~"~._.~"~._.~"~. E O F .~"~._.~"~._.~"~._.~"~._.~"~._.~"~ #
