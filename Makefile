SLUG = FrankBussFormula
VERSION = 0.6.0

SOURCES += $(wildcard src/*.cpp src/formula/*.cpp)

DISTRIBUTABLES += $(wildcard LICENSE*) res

RACK_DIR ?= ../..
include $(RACK_DIR)/plugin.mk
