#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/dss545/small_projects/FIR_filter_vivado/firExample.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
