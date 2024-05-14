<div float="left">
  <img src="readme/cub3d.drawio.svg" width="40%"> <img src="readme/cloudy.png" width="60%">
</div>
Wolfenstein 3D

The video game Wolfenstein 3D was built from a square based grid of uniform height walls meeting solid-colored floors and ceilings. In order to draw the world, a single ray was traced for every column of screen pixels and a vertical slice of wall texture was selected and scaled according to where in the world the ray hits a wall and how far it travels before doing so.[8]

The purpose of the grid based levels was twofold — ray-wall collisions can be found more quickly since the potential hits become more predictable and memory overhead is reduced. However, encoding wide-open areas takes extra space. 
