SHELL=/bin/zsh

#COLORS
BLACK				= \033[0;30m
RED			   = \033[0;31m
GREEN				= \033[0;32m
ORANGE			= \033[0;33m
BLUE				= \033[0;34m
PURPLE			= \033[0;35m
CYAN				= \033[0;36m
GRAY				= \033[0;37m
WHITE				= \033[0;38m
RESET				= \033[0m


ECHO = echo -e

SRC_DIR = src/
INP_DIR = inputs/
BIN_DIR = bin/
FILES = $(notdir $(wildcard $(SRC_DIR)*.cpp))
SRC = $(addprefix $(SRC_DIR),FILES)
INPUTS = $(addprefix $(INP_DIR),$(FILES))
NAMES = $(addprefix $(BIN_DIR),$(basename $(FILES)))
CXXFLAGS = -Wall -Wextra -Werror
RUN = 0


# FUNCTIONS

all: run

bin/%: src/%.cpp
	@$(ECHO) "$(GREEN)>>> compiling $(WHITE)$<$(RESET)"
	@g++ $< $(CXXFLAGS) -o $@

run: $(NAMES)
ifeq ($(RUN), 0)
	@$(foreach x,$(NAMES),$(ECHO) "$(CYAN)Running $(WHITE)$(notdir $x)$(RESET)" && $x < $(INP_DIR)$(notdir $x))
else
	@$(ECHO) "$(CYAN)Running $(WHITE)$(notdir $(RUN))$(RESET)" && $(BIN_DIR)$(RUN) < $(INP_DIR)$(RUN)
endif

clean:
	rm -f $(NAMES)
