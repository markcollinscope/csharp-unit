---
marp: true
theme: gaia
class: invert
paginate: true
font-size: 12
footer: Basics of TDD in C# - An Introduction
header: Epyx/R2C
backgroundColor: darkblue
color: yellow
---
<style>
h1 {
  font-size: 28pt;
}

ul, li {
  font-size: 22pt;
}

section.code {
	font-size: 20pt;
}
</style>
# Beginners Introduction to Test Driven Development in C#
![bg right:25% 80%](TDD.png)

- a half day mini-course
- based on practical work
- with a bit of theory
- NB: gives a 'flavour' of TDD - as an introduction only

---
# Pre-requisites
- A basic understanding of how to test a function/procedure/method something like:
    - e.g. string function fizzbuzz(int n) returns an empty string ("") or:
    - "fizz" if 'n' is divisible exactly by 3.
    - "buzz" if 'n' is divisible exactly by 5.
    - "fizz buzz" if both conditions hold.
- A basic understanding of 'Assertions'
    - e.g. Assert(x == 10) - throws test exceptions if x != 10.
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
# The TDD Mantra - Red Green Refactor (New Code)
- When developing a new function:
- write a test (one test at a time)
    - Red (fail): implement the function so the code compiles and the test fails.
    - Green (pass): update the code so the test passes.
    - Then Refactor: restructure the code (if necessary) - so the test still passes.

NB: Tests are first class code - no shortcuts, "oh it's only testing..."

---
# The TDD Mantra (Bugs)
- write a test to isolate the bug (Red)
- fix the bug (Green)
- refactor if necessary...


---
# Where Do 'Units' Come From?
- TDD discussion generally omit this!
- This is a *design* activity
- (Iteratively)
    - Identify packages (units).
    - Ensure dependencies are clean.
    - Start TDD with chosen packages...
- But: that's a huge subject beyond the scope here!


---
# TDD Tools
- nUnit, jUnit, xUnit, ...
- Unit tests are *code* based
- nUnit for C# (used here)


---
# Basics of NUnit for C# - 1
- Set up a CSharp dotnet project: 
    - $ dotnet new sln
- Create sub-directory for each unit
    - $ dotnet new classlib
- Create sub-directory for tests
    - $ dotnet new nunit
- NB: rename files as necessary


---
# Basics of NUnit for C# - 2
- Add a reference to the files you are testing:
    - $ dotnet add <path/to>/MyExample/MyExample.csproj
- to run tests:
    - $ dotnet test

---
# NUnit - Output When Run On Command Line
![](TDD-CMD-OUT.png)


---
# Exercise 1 - Task
- using the code provided - top level directory 'Exercise 1'
- implement the StockRepo class to pass the tests defined 
- see following slides...


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
# Exercise Review
- Did the tests tell you all you need to know to implement the required function(s)?
- What was easy?
- What was hard?
- It's a different 'mind-set' - so expect it to be challenging.

---
# Refactoring
- Refactoring: changing the structure of code without changing the functionality.
- Some new tests - i.e. new functionality - may require early refactoring to restructure code.
- To do this:
	- make incremental changes.
	- re-run existing tests until status: green.
    - loop until you're happy with new code structure.
- Then do new test.
- Red Green Refactor vs Refactor Red Green ...

---
# Brief notes on 'mocking' interfaces - 1
- Testing more than one unit is (strictly speaking) 'integration' testing.
- How can you test one unit when it "depends on" or "imports from ..." another?
- Can 'mock' the interface of the unit being dependended on.
- Requires 'dependency inversion' - as per *SOLID*.

---
# Brief notes on 'mocking' interfaces - 2

```
    | unit-code |   | implementation |   | mock implementation |
            |                |                       |
            |        ---------------------------------
            |        |
    (uses)  |        | (implements)
            |        |
            v        v
          | an interface |

```
- 'unit-code' 'using' (depends on / uses / imports) 'an interface'
- 'implementation' AND 'mock implementation' both implement 'an interface'


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
    - and - of course - shows if changes to code introduce new bugs ... 
    - (regression testing)
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
