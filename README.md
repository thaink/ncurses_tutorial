# Ncurses tutorial

This is examples of using basic features of ncurses.

To build the code using bazel, first you need to install ncurses:

```
sudo apt-get install libncurses5-dev libncursesw5-dev
```

Then you can run every examples as following:
```
bazel run -c opt //src:01_helloworld
```
