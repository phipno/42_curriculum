[Linux Build]
sudo apt update
sudo apt install build-essential libgl1-mesa-dev mesa-utils freeglut3-dev

compiling
g++ opengl_test.cpp -o opengl_test -lglut -lGLU -lGL

[macOS Build]
xcode-select --install
brew install freeglut

compiling
g++ opengl_test.cpp -o opengl_test -framework OpenGL -framework GLUT

[Windows Build]
Install freeglut 
Extract the freeglut files and place the libraries (.lib files) in the appropriate directories (like C:/MinGW/lib) and headers (.h files) in C:/MinGW/include.
setup c++ (MinGW or Linux subsystem)

compiling
g++ main.cpp -o opengl_test -lglut32 -lglu32 -lopengl32
