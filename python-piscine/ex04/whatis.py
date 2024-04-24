import sys

try:  
  if len(sys.argv) == 2:
    try:
      interger = int(sys.argv[1])
      print(interger)
    except:
      raise AssertionError("AssertionError: argument is not an integer")
  elif len(sys.argv) > 2:
    raise AssertionError("AssertionError: more than one argument is provided")
  else:
    raise AssertionError("AssertionError: you need to provide a argument")
except AssertionError as msg:
  print(msg)
