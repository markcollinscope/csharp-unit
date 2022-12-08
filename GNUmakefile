PROJDIR := $(realpath $(CURDIR))

#--- SLIDES SECTION ---
SLIDES_DIR = $(PROJDIR)/SLIDES
SLIDES = $(SLIDES_DIR)/slides.html

.PHONY: slides
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
	$(HIDE)cd $(SOURCE_DIR); echo "Cleaning: $$(pwd)"; eval $(DNC);
	$(HIDE)echo 'Cleaning $(SLIDES_DIR)';  rm -f $(SLIDES)

