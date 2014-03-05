#Set this to @ to keep the makefile quiet
SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = IQmath_fake
TARGET_LIB = \
	lib/lib$(COMPONENT_NAME).a
	
TEST_TARGET = \
	$(COMPONENT_NAME)_tests

#--- Inputs ----#
PROJECT_HOME_DIR = .
CPPUTEST_HOME = cpputest

CPP_PLATFORM = Gcc

CPPUTEST_WARNINGFLAGS += -Wall 
CPPUTEST_WARNINGFLAGS += -Werror 
CPPUTEST_WARNINGFLAGS += -Wswitch-default 
CPPUTEST_WARNINGFLAGS += -Wswitch-enum  
CPPUTEST_CFLAGS += -std=c89
CPPUTEST_CFLAGS += -Wextra 
CPPUTEST_CFLAGS += -pedantic 
CPPUTEST_CFLAGS += -Wstrict-prototypes

SRC_DIRS = \


TEST_SRC_DIRS = \
	tests\
	mocks\
	tests/IQ_define\
	
INCLUDE_DIRS =\
  $(CPPUTEST_HOME)/include/\
  include/IQmath\
  include/*\

  

include $(CPPUTEST_HOME)/build/MakefileWorker.mk
