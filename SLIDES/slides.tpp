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
<style>
section.code {
	font-size: 20pt;
}
</style>
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
TBD.
```


---
<!-- _class: code -->
# Exercise 1 - Background - StockItem Class
```
[[bash-exec: extract EG-CODE-STOCKITEM \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - Pre-Defined Tests - 1
```
[[bash-exec: extract  EG-CODE-STOCKREPO-UT-1 \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - Pre-Defined Tests - 2
```
[[bash-exec: extract  EG-CODE-STOCKREPO-UT-2 \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - Pre-Defined Tests - 3
```
[[bash-exec: extract  EG-CODE-STOCKREPO-UT-3 \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - Pre-Defined Tests - 4
```
[[bash-exec: extract  EG-CODE-STOCKREPO-UT-4 \*.cs ]]
```


---
# Review
---
# "Mocking vs Integration Testing"
- when which why ?

---
<!-- _class: code -->
# Exercise 2 - Background - UI 'Design'
[[bash-exec: extract  EG-CART-EXERCISE-UI \*.md ]]


---
# Exercise 2 - Description
- Using the UI descibed...
- Write - test first style...
- The necessary functions for the UI to operate... 
- as if they were server side:
    - get available stock to display
    - add stock item to cart
    - get total cost


---
<!-- _class: code -->
# Exercise 2 - Tests To Write
[[bash-exec: extract  -m EG-CART-TEST \*.md ]]


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

