# Rock-Paper-Scissors Game 👊✌️🖐️

A simple rock-paper-scissors game implemented in C/C++ as part of my internship at Cognifyz.

## Table of Contents
- [Introduction](#introduction)
- [How to Play](#how-to-play)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
- [Project Status](#project-status)

## Introduction

This project is a console-based rock-paper-scissors game. It allows a player to compete against the computer in this classic game of chance and strategy.

## How to Play

1. Run the executable (e.g., `rockpaperscissors.exe`).
2. The program will prompt you to choose:
    - Rock (R)
    - Paper (P)
    - Scissors (S)
3. Enter your choice and press Enter.
4. The computer will make its choice randomly.
5. The winner is determined based on the classic rules:
    - Rock beats Scissors
    - Paper beats Rock
    - Scissors beats Paper
6. The game announces the winner (or a tie) and asks if you want to play again.

## Features

- **Random Computer Choice:** The computer's moves are determined using a random number generator, making the game unpredictable.
- **User-Friendly Interface:**  The game provides clear prompts and instructions, making it easy for anyone to play.
- **Replay Functionality:** You can play multiple rounds without restarting the program.

## Technologies Used

- **C/C++:** The core programming language used for game logic, user input, and output.
- **Standard Library:** Utilized for random number generation and other common functions.

## Installation 

1. Clone this repository.
2. Compile the source code using your preferred C/C++ compiler (e.g., GCC, Clang):
    ```bash
    g++ rockpaperscissors.cpp -o rockpaperscissors
    ```
3. Run the executable:
    ```bash
    ./rockpaperscissors
    ```

## Project Status

This project was completed as Task #9 of my C/C++ developer internship at Cognifyz. It's a basic implementation and could be extended with additional features (e.g., score tracking, different difficulty levels, a graphical interface). 
