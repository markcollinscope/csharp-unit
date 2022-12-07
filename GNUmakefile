PROJDIR := $(realpath $(CURDIR))
SOURCE_DIR := $(PROJDIR)/SRC
SLIDE_DIR := $(PROJDIR)/SLIDES

HIDE=@
DNC := dnclean
DNT := dotnet test

SLIDES := $(SLIDE_DIR)/slides.html

.SUFFIXES: .tdd .marp .html

%.marp: %.tpp
	tpp $< > $@

%.html: %.marp
	echo marp %<

dum:	x.html

slides: $(SLIDES)
	
.PHONY: clean test 

test::
	$(HIDE)cd $(SOURCE_DIR); echo "running tests in: $$(pwd)"; eval $(DNT);

clean::
	$(HIDE)cd $(SOURCE_DIR); echo "cleaning: $$(pwd)"; eval $(DNC);
