def all_thing_is_obj(object: any) -> int:
#(object: any) function parameters the name is object of type any
# '-> int' indicates the return type
  if type(object) is list:
    print("List : " + str(list))
  elif type(object) is tuple:
    print("Tuple : " + str(tuple))
  elif type(object) is set:
    print("Set : " + str(set))
  elif type(object) is dict:
    print("Dict : " + str(dict))
  elif type(object) is str:
    print(object + " is in the kitchen : " + str(str))
  elif type(object) is int:
    print("Type not found")
    return object;