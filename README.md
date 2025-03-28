# LEX18 and LEX19
makeMake exercise

## IMPORTANT NOTE
This is a two lab session LEX.  In the gradebook you will receive just one grade (for LEX19) but it will be weighted as much as two LEXes.  Be sure to  add/commit/code your work to this repo.  Be sure you've done suitable testing of the script.  Remember, it has to create a correct makefile for all the C code in a directory, under the assumption that only one ```.c``` file will contain a definition of ```main``` function.  It is advisable to come up with additional test cases on your own, beyond the two that are provided already.

## Overview
This lab exercise is fairly open ended - it asks you to write a script to solve a given problem.  Demonstrate good development practices (advice: build and test incrementally) while writing the script, and add/commit/push frequently to the repo GitHub to capture your process.

Note that you will have two lab sessions to work on this LEX.

While you are permitted to work on the LEX until the regular deadline after the second lab session, it is recommended that you do active work on the LEX only during the timeframe of the two lab sessions, and that you use the time in between to reflect on what you did and plan what you need to do in the second session.  For example, you should plan to brush up on those aspects of writing either BASH scripts or makefiles that you found lacking.  Keep notes so you know what to review.

The rationale for this is that the Lab Practical Exam (LPR) will be split across two lab session as well, and for that you will NOT be permitted to touch the code between sessions.  Treating this LEX in the same way will help you prepare for the LPR.


### Helpful references

For a reminder of how to get the compiler to generate prerequisites from source files:
    https://www.gnu.org/software/make/manual/html_node/Automatic-Prerequisites.html

Info on how to get BASH to decompose filename.ext into filename and ext:
    https://www.gnu.org/software/bash/manual/html_node/Shell-Parameter-Expansion.html#Shell-Parameter-Expansion,%20${parameter%word}

How to get the current time and date:
    http://tldp.org/LDP/abs/html/timedate.html

## Exercise instructions
### Overall goal
Your task is to write a script that will generate a makefile to compile the C source code files in the current directory.

### Sample script inputs/outputs
In the 'testCase1' directory, you will find some C source code and a reference makefile (named 'ReferenceMakeFile') produced by my script.

In the 'testCase2' directory, you will find some slightly different C source code and a reference makefile (named 'ReferenceMakeFile') produced by my script.

**Note:** Your script must work for *any* directory with C code, as long as there is only one C source file defining a `main` function.

### Script usage
The script must accept up to three command line arguments. If three are provided, they must be interpreted as the following:
1. the name of the compiler to use,
2. the name (without extension) of the C source code file from which the executable is being produced, and
3. the name to use for the generated makefile,
in that order.   For example, I can invoke my script this way:
```bash
./makeMake.1.0 gcc main Makefile
```

If only two arguments are provided, they are interpreted as (1) and (2), and the user is prompted to enter a value for (3).

If only one argument is provided, it is interpreted as (1), and the user is prompted to enter values for (2) and (3).

If no arguments are provided, the user is prompted to enter values for (1), (2), and (3).

If more than three arguments are provided the script terminates with a usage message, along these lines:

```
Usage:
  makeMake compiler executable makefile
  makeMake compiler executable 
  makeMake compiler 
  makeMake 
```

### Script functionality
The script must build a functional makefile that follows the design principles we discussed for makefiles, such as making use of variables as appropriate, using the compiler to generate the prerequisites for targets, marking the clean target as .PHONY, etc. The generated makefile should have appropriate comments to improve readability. 

### Caveat
The generated makefile need not be exactly the same as the sample provided, but it gives you something to aim for. Of course, with a different set of files in the directory, a different makefile would be created. Refer to the reference links in the form description; you may also find ```man bash``` helpful when generating the tab at the start of recipe, especially this part:

> echo [-neE] [arg ...]
>               Output  the  args, separated by spaces, followed by a newline.  The return status is always 0.  If -n is specified,
>               the trailing newline is suppressed.  If the -e option is given, interpretation of the  following  backslash-escaped
>               characters is enabled.  The -E option disables the interpretation of these escape characters, even on systems where
>               they are interpreted by default.  The xpg_echo shell option may be used to dynamically  determine  whether  or  not
>               echo  expands  these  escape  characters  by default.  echo does not interpret -- to mean the end of options.  echo
>               interprets the following escape sequences:

>               \a     alert (bell)

>               \b     backspace

>               \c     suppress trailing newline

>               \e     an escape character

>               \f     form feed

>               \n     new line

>               \r     carriage return

>               \t     horizontal tab

>               \v     vertical tab

>               \\     backslash

>               \0nnn  the eight-bit character whose value is the octal value nnn (zero to three octal digits)

>               \xHH   the eight-bit character whose value is the hexadecimal value HH (one or two hex digits)

## Finishing up
Before you wrap up, make sure you have
1. **added/committed** your work to your **local repo**, and
2. **pushed** everything (including all branches) in your local repo to your **remote GitHub repo**.
If you don't do this we cannot review your work and give you credit!
