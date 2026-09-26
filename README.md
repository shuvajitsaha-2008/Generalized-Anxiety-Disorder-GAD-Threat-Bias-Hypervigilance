# Generalized Anxiety Disorder (GAD): Threat Bias & Hypervigilance

By - Shuvajit Saha

This is a simple C programming project based on **attention, reaction time and threat-related words**.

The main idea is to make small games that can show how a person reacts to positive and negative information. These results may show some attention patterns related to threat bias, but **this project cannot diagnose GAD**.

## Games

### 1. Dot-Probe Task

Two words are shown on the left and right side of the screen for a short time.

Example:

```text
FLOWER                 KNIFE
```

The words then disappear and dots appear on both sides.

The program asks something like:

```text
Where was KNIFE?
```

The participant presses the **← or → arrow key** according to the position of the word.

The reaction time is recorded for each round. Positive and negative words are compared at the end.

Some example words:

**Positive:**
`flower, butterfly, puppy, garden, tourist`

**Negative:**
`knife, accident, injury, attack, earthquake`

The sides and questions are randomly selected in every round.

---

### 2. Colour Word Quiz

In this game, a word is displayed in a different colour.

For example:

```text
        RED
```

The word and its actual colour can be different.

The participant has to answer questions such as:

* What was the word?
* What was the colour?

The program records the answer and reaction time.

This is based on the idea of the **Stroop effect** and is used to demonstrate selective attention.

---

## Main Idea

The project mainly focuses on:

* Reaction time
* Selective attention
* Threat-related attention
* Hypervigilance
* Difference between positive and negative responses

The results are only used to observe patterns in the experiment and **should not be considered a medical diagnosis**.

## Made With

* **C Programming**
* **Dev-C++**
* `stdio.h`
* `stdlib.h`
* `time.h`
* `conio.h`
* `windows.h`

##  Future Ideas

Some things that can be added later:

* More games
* Emoji-based task
* Word memory task
* More participants and rounds
* Graphs for reaction time
* Saving results in a file
* Basic data analysis

## Disclaimer

This is a **college-level educational project**. It is not a medical or psychological diagnostic tool.

---

### Author

Shuvajit Saha (35)
B.Tech CSE (AI & ML)
