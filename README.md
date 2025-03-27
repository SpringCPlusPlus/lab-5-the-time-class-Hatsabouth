[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/ZAEoKxFh)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=18890665)
-------------------------------------------------------
In this lab you will implement operator overloading for a Time class in C++.

The Time class represents a time duration with hours and minutes. Thus, adding two Time objects means combining their durations to find the total elapsed time.

Fill in the missing code in the Time.cpp file

Hints:
- When adding or subtracting minutes, use the modulo operator (%) to handle minutes exceeding 59.
- When subtracting minutes, you may need to borrow from the hours.
- For the comparison operators, compare the total minutes (hours * 60 + minutes).

---------------------------------------------------------

 If you want to run my included unit tests, you can type at the shell prompt:
 make test
 
 This command will compile all files and then run the executable a.out
