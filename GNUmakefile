PROJDIR := $(realpath $(CURDIR))

#--- SLIDES SECTION ---
SLIDE_DIR = $(PROJDIR)/SLIDES
SLIDES = $(SLIDE_DIR)/slides.html

.SUFFIXES: .tdd .marp .html

%.marp: %.tpp
	tpp $< > $@

%.html: %.marp
	marp $<

slides: $(SLIDES)

#--- SOURCE CODE SECTION ---
SOURCE_DIR := $(PROJDIR)/SRC	

HIDE=@
DNC := dnclean
DNT := dotnet test

.PHONY: clean test 

test::
	$(HIDE)cd $(SOURCE_DIR); echo "running tests in: $$(pwd)"; eval $(DNT);

#--- ALL

clean::
	$(HIDE)cd $(SOURCE_DIR); echo "cleaning: $$(pwd)"; eval $(DNC);
	$(HIDE)rm $(SLIDES)

