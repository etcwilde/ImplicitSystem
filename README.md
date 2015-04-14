# ImplicitSystem
Implementing the blob tree

Evan Wilde | 2015

## History of the Blob Tree
Blobs are a form of implicit surface defined by a point a filter field falloff function, and an iso
to define where the surface exists. A "well behaved" field function will have a value of 1 at radius 0,
and at some max radius, will have a value of 0. 

Jim Blinn origianlly used Blobs, or "Blobby Molecules" to model electron density fields.

Since then they have evolved to handle other more complex geometries.

## Building The Blob Tree
### Requirements
- make
- g++
- glm
- doxygen
- cppunit (optional, for unit testing purposes)

### Compiling
#### As a library
`make library`

It will result in a directory `release/` containing `libImplicit.a`, `html/`, and `inc/`.<br>
`libImplicit.a` is the static library to link to.<br>
`inc/` contains the header files.<br>
`html/` contains the html documentation.<br>

#### For Developers
The makefile contains multiple ways of compiling the library for testing. When compiling as a library, 
it will not compile main.cpp, which allows you to implement tests without having them show up in the library
itself.

###### For debugging
`make debug` will compile the program for debugging purposes with flags `-Wall`, `-g`, and `-DDEBUG` set

###### For unit testing
`make test` will compile tests in `test/` as well as setting flags `-Wall`, `-DTEST`. It will link again `cppunit` and `dl`

###### For Testing
`make release` will compile with optimization flag `-O3` set

###### To Generate documentaiton
`make docs` will create a directory `docs/html/` containing the documentation for the implicit system.

## Structure
- The `master` branch is for working, apparently stable, code.
- The `dev` branch is for ideas being developed. This code will probably work.
- Assume all branches off of `dev` to be experimental and don't work.

### Naming Scheme
We will begin using the standard version scheme of major.minor.build
- major number will be incremented any time there is a public api-breaking change
- minor number will be incremented with every major change to the system
- build will be one of 0: alpha, 1: beta, 2: release
