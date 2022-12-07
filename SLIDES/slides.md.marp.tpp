---
marp: true
theme: gaia
class: invert
paginate: true
footer: Intro to TDD in C#
header: R2C Online      
backgroundColor: darkblue
color: yellow
---
# Intrduction to Test Driven Development in C#
![bg right:25% 80%](./IMAGES/TDD.png)

- a half day mini-course
- based on practical work
- with a bit of theory

---
# Agenda
- TBD...
- practicals ...
---
# Locations of Materials
- TBD...

---
# 'Unit' Tests

- What is a unit?
- Compared to:
  - Integration testing
  - System testing
  - UI testing 
- All benefit from automation!
---
# Unit Testing in the Sprint Lifecycle
- idea is that unit testing is a standard part of the development Lifecycle
- blah ...

---
# The TDD Mantra
- Write the test (one test at a time)
- Red: write the code so it fails (i.e. minimal)
- Green: update the code so it works
- Refactor: restructure the code (if necessary)

NB: Tests are first class code - no shortcuts, "oh it's only testing...""

---
# The TDD Mantra (Bugs)
- write a test to isolate the bug (red)
- fix the bug (green)
- refactor if necessary...


---
# Where Do 'Units' Come From?
- TDD discussion generally omit this!
- This is a design activity
- (Iteratively)
    - Identify packages (units)
    - Ensure dependencies are clean
    - Start TDD with chosen packages


---
# TDD Tools
- nUnit, jUnit, xUnit, ...
- Unit tests are *code* based
- Using nUnit here for C#
- See setup details


---
# Basics of NUnit for C#
- ...


---
# Example Code - CSharp Nunit Tests``
```

```
---
# Exercise - StockItem
```
[[bash-exec: extract EG-CODE-STOCKITEM \*.cs ]]
```

---
# Review
---
# "Mocking vs Integration Testing"
- when which why ?

---
# Exercise part 2
---
# Review
---
# Pros and Cons
-   
---
# What we haven't discussed
- BDD & UI testing frameworks
- Coverage and related tools
- More on when and how to mock
- Dependency Inversion (DIP - SOLID) with TDD
- Estimating
- Using Visual Studio or other IDEs
- Other (non-functional) testing
    - Stress tests ... etc.
---
# Summary & Feedback
- TBD.

- Feedback 
	- what do you think? 
	- Need to know more?
	- Keen to do unit tests?
---
