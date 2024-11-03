#!/usr/bin/env bash
#  `#define EE_HANDS` needs to be in config.h
qmk flash --keyboard cantor --keymap $1 --bootloader dfu-util-split-left

