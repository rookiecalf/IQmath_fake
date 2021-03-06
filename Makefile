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
	mocks/IQmath_Arithmetic\
	mocks/IQmath_Trigonometric\
	mocks/IQmath_FormatConversion\
	mocks/IQmath_Exponentiation\
	tests/IQmath_DataType\
	tests/IQmath_Arithmetic\
	tests/IQmath_Trigonometric\
	tests/IQmath_FormatConversion\
	tests/IQmath_Exponentiation\
	
INCLUDE_DIRS =\
  $(CPPUTEST_HOME)/include/\
  include/IQmath\
  include/*\
  mocks/include\

  

include $(CPPUTEST_HOME)/build/MakefileWorker.mk
