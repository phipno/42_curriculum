# 🗿 philosophers: learning the ways of philosophers [threads] 🗿

<img src="readme/philo_animate.gif" align="left" width="300px" style="margin-right:16px">

### 🔍 Why philosophers:
- You learn about threads
- Creating a logical programm which runs with custom amount of thread
- Get to know how hard thread debugging can be
- Thread safety is the <i>A und O</i>>, how we would say in german

### 📜 The Rules:
<b>Setup:</b><br>
- Philosophers sit around a round table.
- There is a bowl of spaghetti in the middle of the table.
- There are as many forks as there are philosophers.
<b>Activities:</b><br>
- Philosophers can eat, think, or sleep.
- They can only do one of these activities at a time.
<b>Eating:</b><br>
- To eat, a philosopher needs two forks: the one on their right and the one on their left.
- After eating, they put the forks back and go to sleep.
<b>Sleeping and Thinking:</b><br>
- After sleeping, they wake up and start thinking.
- After thinking, they may want to eat again.
<b>Rules:</b><br>
- Philosophers don't communicate with each other.
- They don't know if another philosopher is about to die of starvation.
- Philosophers need to eat regularly to avoid starvation.
<b>Goal:</b><br>
- Ensure that all philosophers get to eat and none of them starves.
  
<b>Implementation:</b><br>
- Every philosopher is a thread.
- And this the Input which our programm needs to parse: </b>
-> number_of_philosophers </b>
-> time_to_die </b>
-> time_to_eat </b>
-> time_to_sleep </b>
-> [number_of_times_each_philosopher_must_eat] <i>optional</i></b>

## 🧘 What it does:
<img src="readme/forever.png" width="49%">
<img src="readme/rip8.png" width="49%">

