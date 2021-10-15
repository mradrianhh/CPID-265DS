CXX := g++
CXXFLAGS := -g -Wall -std=c++17

COMPDIR := components
OBJDIR := obj
SRCDIR := src
SIMDIR := simulation
EVENTDIR := events

SRC := $(wildcard $(SRCDIR)/$(COMPDIR)/*.cpp)  $(wildcard $(SRCDIR)/*.cpp) $(wildcard $(SRCDIR)/$(SIMDIR)/*.cpp) $(wildcard $(SRCDIR)/$(SIMDIR)/$(EVENTDIR)/*.cpp)

OBJ := $(patsubst %, $(OBJDIR)/%, $(SRC:%.cpp=%.o))

EXE := PID_265DS

all: $(EXE) clean

$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ): $(OBJDIR)/%.o : %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

$(OBJDIR):
	mkdir $(OBJDIR) && cd $(OBJDIR) && mkdir $(SRCDIR) && cd $(SRCDIR) && mkdir $(COMPDIR) && mkdir $(SIMDIR) && cd $(SIMDIR) && mkdir $(EVENTDIR)

clean:
	$(RM) -r $(OBJDIR)