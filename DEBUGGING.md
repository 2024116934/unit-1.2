# Optional Guide: Using Run and Debug

The VS Code debugger lets you pause a C program and follow it one line at a time. You do not need to use it for every activity, but it can help when a program compiles and runs but gives the wrong result.

1. Open **Run and Debug** from the left-hand toolbar.
2. Select the activity you are working on.
3. Click beside a line number to add a breakpoint.
4. Press `F5` or select the green play button.
5. Use **Step Over** to run one line at a time.

While paused, the **Variables** panel shows the current values stored in your variables. **Continue** runs until the next breakpoint or the end of the program.

Programs using `scanf()` or `fgets()` accept input through the terminal.

> The debugger can only start after the program compiles successfully. Fix compiler errors first.

For more detail, see the [ELEC2645 debugging reference](https://eee-elec2645.github.io/docs/debugging/debugging.html).
