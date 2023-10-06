---
marp: true
theme: gaia
class: invert
paginate: true
footer: Basics of TDD in C# - An Introduction
header: Epyx/R2C
backgroundColor: darkblue
color: yellow
---
<style>
section.code {
	font-size: 20pt;
}
</style>
# A Basic Introduction to Test Driven Development in C#
![bg right:25% 80%](TDD.png)

- a half day mini-course
- based on practical work
- with a bit of theory


---
# Objectives
- Demonstrate what are unit tests.
- Basic intro C# infrastructure.
- How to implement code based on given tests
- How to write code from scratch using TDD approach (test code first)

---
# Agenda
- Some basic theory
    - what's a 'unit'?
    - what is the TDD approach?
- Exercises
    - write code to implement a gives set of pre-existing tests.
    - full 'TDD Approach' for a given example UI.
- Ask questions as we go
    - there are *no* stupid questions.


---
# Locations of Materials
- See: https://github.com/markcollinscope/csharp-unit
- Please use version tagged:

[[bash-exec: extract --old EG-VERSION-TAG \*.md ]]

- $ git checkout <tag-as-per-above>


---
# 'Unit' Tests

- What is a unit?
- A module/package/namespace that provides a related group of services/functions/objects.
- Tests focus on testing the unit - and *only* the unit.
- Compare to:
  - Integration testing
  - System testing
  - UI testing 


---
# Unit Testing in the Sprint Lifecycle
- Unit testing is a standard part of the development Lifecycle
- Time should be allocated (estimated) to include TDD/unit testing.
- NB: it's a non-trivial Exercise
- So 50%+ (!) extra time required - in the short term
- But less overall in the long term... (!)


---
# The TDD Mantra (New Code)
- Write the test (one test at a time)
    - Red: write the code so it fails (i.e. minimal)
    - Green: update the code so it works
    - Refactor: restructure the code (if necessary)

NB: Sometimes make sense to Refactor first - see later.
NB: Tests are first class code - no shortcuts, "oh it's only testing..."

---
# The TDD Mantra (Bugs)
- write a test to isolate the bug (red)
- fix the bug (green)
- refactor if necessary... unit tests facilitate this!


---
# Where Do 'Units' Come From?
- TDD discussion generally omit this!
- This is a *design* activity
- (Iteratively)
    - Identify packages (units).
    - Ensure dependencies are clean.
    - Start TDD with chosen packages...


---
# TDD Tools
- nUnit, jUnit, xUnit, ...
- Unit tests are *code* based
- nUnit for C# (used here)


---
# Basics of NUnit for C# - 1
- Set up a CSharp dotnet project: 
    - $ dotnet new sln
- Create sub-directory for each unitL
    - $ dotnet new classlib
- Create sub-directory for tests (rename files):
    - $ dotnet new nunit


---
# Basics of NUnit for C# - 2
- Add a reference to the files you are testing:
    - $ dotnet add <path/to>/MyExample/MyExample.csproj
- to run tests:
    - $ dotnet test

---
# NUnit - Command Line Output
![](TDD-CMD-OUT.png)


---
<!-- _class: code -->
# Example Code - CSharp Nunit Tests
```
[[bash-exec: extract --old  EG-CODE-STOCKREPO-UT-1 \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - StockItem Class
```
[[bash-exec: extract --old EG-CODE-STOCKITEM \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - Pre-Defined Tests - 1
```
[[bash-exec: extract --old  EG-CODE-STOCKREPO-UT-1 \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - Pre-Defined Tests - 2
```
[[bash-exec: extract --old  EG-CODE-STOCKREPO-UT-2 \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - Pre-Defined Tests - 3
```
[[bash-exec: extract --old  EG-CODE-STOCKREPO-UT-3 \*.cs ]]
```


---
<!-- _class: code -->
# Exercise 1 - Background - Pre-Defined Tests - 4
```
[[bash-exec: extract --old  EG-CODE-STOCKREPO-UT-4 \*.cs ]]
```


---
# Review
- Did the tests tell you all you need to know to implement?
- Are test-based examples of *using* (not testing) a unit useful?
- Any other thoughts?


---
# When To Refactor
- Some new tests require early refactoring to restructure code.
- When new test adds a fundamental change that invalidates existing design.
- To do this:
	- make incremental changes.
	- re-run existing tests until status: green.
- Then do new test.


---
# Mocking vs Integration Testing - 1
- Testing more than one unit is (strictly speaking) 'integration' testing.
- How can you test one unit when it "depends on" or "imports from ..." another?
- Can 'mock' the interface of the unit being dependended on.
- Requires 'dependency inversion' - as per *SOLID*.


---
# Mocking vs Integration Testing - 2

```
| unit-code |   | implementation |   | mock implementation |
     |                |                       |
     |        ---------------------------------
     |        |
(depends on)  | (implements)
     |        _
     v        v
| an_interface|

```
- 'unit-code' 'using' (depends on / uses / imports) 'an_interface'
- 'implementation'/'mock implementation' implement 'an_interface'


---
<!-- _class: code -->
# Exercise 2 - Background - UI 'Design'
[[bash-exec: extract --old  EG-CART-EXERCISE-UI \*.md ]]


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
[[bash-exec: extract --old EG-CART-TEST \*.cs ]]


---
# Review
- what did writing the tests tell you / make you think about?
- is the 'interface' of the tested unit different to what you might have done otherwise?
- what benefits does the 'external first' (unit interface first) offer, if any?
- any other thoughts?

---
# Pros and Cons - Summary
- Pros:
    - focus on external interface to unit emphasised (so better interface)
    - provides example code 'using' the unit in question.
    - facilitates reliable refactoring.
    - shows when modifications outside the tested unit cause bugs.
- Cons:
    - time!


---
# What We Haven't Discussed
- BDD & UI testing frameworks
- Coverage and related tools
- More on when and how to mock
- Dependency Inversion (DIP - SOLID) with TDD
- Estimating
- Using Visual Studio or other IDEs
- Other (non-functional) testing
    - Stress tests ... etc.



---
# Summary
- Some basic theory
    - what's a 'unit'?
    - what is the TDD approach?
- Exercises
    - write code to implement a gives set of pre-existing tests
    - full 'TDD Approach' for a given example UI


---
# Feedback 
- What do you think? 
- Need to know more?
- Keen to do unit tests?

Let me know!
