clasdoc-g12-procedures
======================

[Here is a link to the current PDF file](https://clasweb.jlab.org/rungroups/g12/wiki/index.php/File:G12_procedures.pdf)

[Here is a link to the most current "working" version](https://clasweb.jlab.org/rungroups/g12/wiki/index.php/File:G12_procedures_working_version.pdf)

Summary and analysis procedures documentation for the g12 experiment with CLAS at JLab.

Building the PDF File
---------------------

This generally requires a newish version of ``XeLaTeX`` with the ``biblatex`` package. Unicode is used everywhere so this will not compile correctly with ``LaTeX`` or regular ``bibtex``. The ``bibtex`` replacement, ``biber``, is provided as a linux executable. For other operating systems, take a look at [biber's website](http://biblatex-biber.sourceforge.net/).

To create a PDF file from the source, run these commands:

    xelatex report
    ./biber report
    xelatex report
    xelatex report

This should be sufficient for all references to be caught and long tables to be properly sized.
