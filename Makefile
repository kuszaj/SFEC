CXX        := g++
CXXFLAGS   := -std=c++11 -Wall -Wextra -pedantic
INCLUDES   := -Iinclude

PROJDIR    := .
EXAMPLEDIR := $(PROJDIR)/examples
SRCDIR     := $(EXAMPLEDIR)
BUILDDIR   := $(EXAMPLEDIR)/build
INSTALLDIR := /usr/local

SOURCES    := $(wildcard $(SRCDIR)/*.cpp)
TARGETS    := $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%,$(SOURCES))

.PHONY: all examples clean install uninstall

all: examples
examples: $(BUILDDIR) $(TARGETS)

$(BUILDDIR):
	mkdir -p $@

$(BUILDDIR)/%: $(EXAMPLEDIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $<

clean:
	rm -rf $(BUILDDIR)

install:
	@echo \*\*\* installing in $(INSTALLDIR)
	@if ! [ -d $(INSTALLDIR)/include/SFEC ] ;\
	then\
		mkdir -p $(INSTALLDIR)/include/SFEC ;\
	fi
	@cp -v include/SFEC/*.h $(INSTALLDIR)/include/SFEC
	@echo \*\*\* installed in $(INSTALLDIR)

uninstall:
	@echo \*\*\* removing $(INSTALLDIR)/include/SFEC
	rm -rf $(INSTALLDIR)/include/SFEC
	@echo \*\*\* removed $(INSTALLDIR)/include/SFEC
