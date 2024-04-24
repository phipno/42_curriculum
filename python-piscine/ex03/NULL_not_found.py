def NULL_not_found(object: any) -> int:
  if type(object) is type(None):
    print("Nothing: " + str(object) + " " + str(type(None)))
  elif type(object) is float:
    print("Cheese: " + str(object) + " " + str(float))
  elif type(object) is int:
    print("Zero: " + str(object) + " " + str(int))
  elif object is "":
    print("Empty: " + str(object) + str(str))
  elif type(object) is bool:
    print("Fake: " + str(object) + " " + str(bool))
  else:
    print("Type not Found")
    return 1;
  