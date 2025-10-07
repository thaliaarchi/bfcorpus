PROGRAMS=mandelbrot.b mandelbrot-huge.b mandelbrot-titannic.b

CPP=cpp

COMMENT="      A mandelbrot set fractal viewer in brainf*** written by Erik Bosman"

all: $(PROGRAMS)

%.b: %.bmacro
	(echo $(COMMENT) && $(CPP) -P $< | bfstrip) > $@

clean:
	-rm $(PROGRAMS)

