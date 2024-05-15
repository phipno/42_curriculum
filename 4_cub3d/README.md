# 🎮 Cub3D: A Wolfenstein 3D copy 🎮

### 🔍 Why Cub3D:
- It is the second graphic project.
- We build our own raycaster, not a raytracer. Raytracing often follows physical properties of light.
- Again a group project. My partner <a href="https://github.com/jweeeezy" target="_blank">Jakob Willert</a>

### 🕹️ How it works:
- We have a game map, called <i>.cub</i>. Our parser only accepts correct formatted <i>.cub</i> files.
<div float="left">
  <img src="readme/cubfile.png" width="40%"> <img src="readme/cloudy.png" width="50%">
</div>
<br>
<br>

- From that map we get a player position and the current viewing direction
- We can now calculate for every column of screen pixel the distance to the wall from our current player position
- With this we scale the height of the wall accordingly to its travel distance
<div float="left">
  <img src="readme/cub3d.drawio.svg" width="38%"> <img src="readme/explain.png" width="53%">
</div>
<br>
<br>

- Since programming something like this it involves bugs
<div float="left">
  <img src="readme/cub3d_fail.gif" width="50%"> <img src="readme/trippy.png" width="41%">
</div>
<br>
<br>

- Texture were hard to add. They needed to be scaled and traversed to fit into each colomn.
- This gave me a better understanding of how pictures files work.
- A collection of our weird selfmade texture 
<img src="readme/textures.png" width="90%"/>
