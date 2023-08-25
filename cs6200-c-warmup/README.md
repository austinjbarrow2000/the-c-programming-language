# C Warmup

Here is a little programming challenge to practice your C skills prior to the projects being released. This isn't a graded assignment, or really an assignment at all. It's only for your own personal practice.

In this directory, there are two Python scripts and a Bash script

* `generate-input.py` - Writes a text file of 10000 lines to `stdout`, where each line contains some random number of integers, separated by spaces
* `validate.py` - This script takes two parameters `inputfile` and `outputfile`. The input file is the data generated by `generate-input.py`. The output file is the file that you will generate. This script will go through the input, sum up each line, then compare the result with the corresponding line in `outputfile`
* `test.sh` - This program will generate the input, call your program with the name of the input and output programs, then run `validate.py` against your output.

Your task is to write a C program that reads in the file generated by `generate-input.py`. The name of the program should be `sum-input`, and it should take two command line arguments:

```bash
$ sum-input input.txt output.txt
```

Here is what the overall flow should look like, with a simplified version of the input:

```bash
$ ./generate-input.py > input.txt
$ cat input.txt
8 8 1 8
2 3 4 6 4
9 5 3 8
3 2 1 5
3 4 6
2 5 1 2
1 2 9 8 2
2 5 1
3 3 3 7 9
8 8 7
$ ./sum-input input.txt output.txt
$ cat output.txt
25
19
25
11
13
10
22
8
25
23
$ ./validate.py input.txt output.txt
All results matched!
```

If the expected output is not correct, you will see 

```bash
$ ./validate.py input.txt output.txt
Line 0 result 17 does not match expected value 15
Line 4 result 2 does not match expected value 10
Line 7 result 3 does not match expected value 13
```

There is a skeleton `sum-input.c` for you to fill in as well as a `Makefile` you can use. 