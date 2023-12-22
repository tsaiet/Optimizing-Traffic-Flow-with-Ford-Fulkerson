=================
Optimizing Traffic Flow with Ford-Fulkerson
=================

.. .. This is a template to specify what your project is and the execution plan.  You
.. will find it difficult to plan for things that you are not sure about.  Do
.. your best.

.. .. You are encouraged to use this plain-text `reStructuredText
..   <https://docutils.sourceforge.io/rst.html>`__ format.  :download:`Download
..   this file. <project_template.rst>`

.. .. Please give your project a name that clearly states the subject and is short
.. enough for people to remember.

.. .. Additional documents or files may be used.  They should be added to the
.. repository.

Basic Information
=================

.. .. Create a GitHub repository to host your project and add the URL here.  The
.. GitHub repository has an 'About' field, in which you are encouraged to write a
.. simple statement (preferably one sentence) to introduce the project.

Ford-Fulkerson is a mathematical tool used to optimize the flow of resources or 
entities through a network, which can be applied to improve traffic flow in a 
city or region. In this project, we aim to use Ford-Fulkerson to enhance traffic 
safety and reduce traffic congestion.

We can represent city roads as a directed graph; each intersection is modeled as a 
node and roads are represented as edges with maximum capacities determined by 
factors such as "the length of the road", "and the speed limit of the road", 
"The number of lanes". The source node is designated as "home," and the 
sink node is identified as "office."

* Github Repository: [https://github.com/tsaiet/Optimizing-Traffic-Flow-with-Ford-Fulkerson]

Problem to Solve
================

.. .. Describe the problem or the set of problems you want to solve.  Include
.. necessary background information without making it lengthy.

.. .. Some points may help you organize the problem description:

.. .. 1. The field or industry of the problem.
.. 2. The physics and/or the mathematics behind the problem.
.. 3. The algorithm or numerical method that should be applied to solve the
..    problem.

Traffic congestion is a significant challenge in transportation and urban planning, 
leading to many issues, including longer commute times and increased traffic accident rates.
By optimizing traffic flow using maximum flow algorithms, the project seeks to mitigate 
congestion and its associated problems. Ford-Fulkerson aims to optimize the flow of 
vehicles through road networks. 

Prospective Users
=================

.. .. Describe the users of your software and how they will use it.  It is OK to
.. combine this section with the previous one (`Problem to solve`_).

This project targets traffic application developers, taxi drivers, citizens, 
and government.

System Architecture
===================

.. .. Analyze how your system takes input, produces results, provides an interface, and
.. performs any other operations.  Describe the system's workflow.  You may
.. consider using a flow chart, but it is not required.  Specify the constraints
.. assumed in your system.  Describe the modularization of the system.

.. image:: https://github.com/tsaiet/nsdhw_23au/blob/tsaiet-project-proposal/project/tsaiet/System%20Architecture.png

API Description
===============

.. .. Show how your system can be programmed.  You are supposed to implement the
.. system using both C++ and Python.  Describe how a user writes a script in the
.. system.

Users have the option to include the library by linking it to their own project.

C++ users: 

``#include "includes/Ford_Fulkerson.cpp"``

Python users: 

``import Ford_Fulkerson as FF``

Engineering Infrastructure
==========================

.. .. Describe how you plan to put together the engineering system:

.. .. 1. Automatic build system and how to build your program
.. 2. Version control (show how you will use it)
.. 3. Testing framework
.. 4. Documentation

.. .. Some of the above information should be included in the documentation of your
.. software.

.. .. You may use continuous integration, but it is not required.  If you use it,
.. describe how it works in your code development.

1. Automatic build system: `CMake`
2. Version control: `git`
3. Testing framework: `Pytest`
4. Documentation: `README.rst`
5. Continuous Integration: `Github Actions`

Installation
==========

.. code-block:: bash

    $ git clone https://github.com/tsaiet/Optimizing-Traffic-Flow-with-Ford-Fulkerson.git
    $ cd Optimizing-Traffic-Flow-with-Ford-Fulkerson
    $ chmod +x TODO.sh
    $ ./TODO.sh

Usage
==========

- C++ user:
.. code-block:: bash

    $ g++ main.cpp -o main.o
    $ chmod +x main.o
    $ ./main.o


- Python user:
.. code-block:: bash

    $ python3 main.py


- Jupyter notebook user:
.. code-block:: bash

    $ jupyter notebook

Choose main.ipynb and run :)

References
==========

.. List the external references for the information provided in the proposal.

- https://en.wikipedia.org/wiki/Ford-Fulkerson_algorithm
