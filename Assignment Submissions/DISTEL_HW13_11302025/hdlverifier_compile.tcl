# catch errors using try/on error
try {

# ======== Create Project ======== 
create_project -force wizprj hdlverifier_wizard_project


# ======== Add source files to project ========
set SRC1 {C:/Users/caleb/Documents/GitHub/SES-598-Fall-2025/DISTEL_HW13_11302025/hdlsrc/spec_avg_CRD}
add_file "$SRC1/Chirp.vhd"
add_file "$SRC1/Complex4Multiply.vhd"
add_file "$SRC1/Complex4Multiply_block.vhd"
add_file "$SRC1/Complex4Multiply_block1.vhd"
add_file "$SRC1/Complex4Multiply_block2.vhd"
add_file "$SRC1/CordicKernelMag.vhd"
add_file "$SRC1/CordicKernelMag_block.vhd"
add_file "$SRC1/CordicKernelMag_block1.vhd"
add_file "$SRC1/CordicKernelMag_block2.vhd"
add_file "$SRC1/CordicKernelMag_block3.vhd"
add_file "$SRC1/CordicKernelMag_block4.vhd"
add_file "$SRC1/CordicKernelMag_block5.vhd"
add_file "$SRC1/CordicKernelMag_block6.vhd"
add_file "$SRC1/CordicKernelMag_block7.vhd"
add_file "$SRC1/CordicKernelMag_block8.vhd"
add_file "$SRC1/CordicKernelMag_block9.vhd"
add_file "$SRC1/CordicKernelMag_block10.vhd"
add_file "$SRC1/CordicKernelMag_block11.vhd"
add_file "$SRC1/CordicKernelMag_block12.vhd"
add_file "$SRC1/CordicKernelMag_block13.vhd"
add_file "$SRC1/CordicKernelMag_block14.vhd"
add_file "$SRC1/CordicKernelMag_block15.vhd"
add_file "$SRC1/CordicKernelMag_block16.vhd"
add_file "$SRC1/CordicKernelMag_block17.vhd"
add_file "$SRC1/CordicKernelMag_block18.vhd"
add_file "$SRC1/CordicKernelMag_block19.vhd"
add_file "$SRC1/CordicKernelMag_block20.vhd"
add_file "$SRC1/CordicKernelMag_block21.vhd"
add_file "$SRC1/CordicKernelMag_block22.vhd"
add_file "$SRC1/Counter_Limited.vhd"
add_file "$SRC1/DDC.vhd"
add_file "$SRC1/DitherGen.vhd"
add_file "$SRC1/DitherGen_block.vhd"
add_file "$SRC1/FFT.vhd"
add_file "$SRC1/Increment_Real_World.vhd"
add_file "$SRC1/LookUpTableGen.vhd"
add_file "$SRC1/LookUpTableGen_block.vhd"
add_file "$SRC1/LPF.vhd"
add_file "$SRC1/NCO.vhd"
add_file "$SRC1/NCO1.vhd"
add_file "$SRC1/Quadrant_Mapper.vhd"
add_file "$SRC1/RADIX2FFT_bitNatural.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_1.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_1_block.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_2.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_3.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_4.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_5.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_6.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_7.vhd"
add_file "$SRC1/RADIX22FFT_CTRL1_8.vhd"
add_file "$SRC1/RADIX22FFT_SDF1_1.vhd"
add_file "$SRC1/RADIX22FFT_SDF1_3.vhd"
add_file "$SRC1/RADIX22FFT_SDF1_5.vhd"
add_file "$SRC1/RADIX22FFT_SDF1_7.vhd"
add_file "$SRC1/RADIX22FFT_SDF1_9.vhd"
add_file "$SRC1/RADIX22FFT_SDF2_2.vhd"
add_file "$SRC1/RADIX22FFT_SDF2_4.vhd"
add_file "$SRC1/RADIX22FFT_SDF2_6.vhd"
add_file "$SRC1/RADIX22FFT_SDF2_8.vhd"
add_file "$SRC1/SDFCommutator1.vhd"
add_file "$SRC1/SDFCommutator2.vhd"
add_file "$SRC1/SDFCommutator3.vhd"
add_file "$SRC1/SDFCommutator4.vhd"
add_file "$SRC1/SDFCommutator5.vhd"
add_file "$SRC1/SDFCommutator6.vhd"
add_file "$SRC1/SDFCommutator7.vhd"
add_file "$SRC1/SDFCommutator8.vhd"
add_file "$SRC1/SDFCommutator9.vhd"
add_file "$SRC1/SimpleDualPortRAM_generic.vhd"
add_file "$SRC1/Spec_Avg.vhd"
add_file "$SRC1/spec_avg_CRD.vhd"
add_file "$SRC1/spec_avg_CRD_pkg.vhd"
add_file "$SRC1/spec_avg_CRD_tc.vhd"
add_file "$SRC1/Subsystem.vhd"
add_file "$SRC1/Subsystem_pkg.vhd"
add_file "$SRC1/Subsystem_tc.vhd"
add_file "$SRC1/TWDLROM_3_1.vhd"
add_file "$SRC1/TWDLROM_5_1.vhd"
add_file "$SRC1/TWDLROM_7_1.vhd"
add_file "$SRC1/TWDLROM_9_1.vhd"
add_file "$SRC1/WaveformGen.vhd"
add_file "$SRC1/WaveformGen_block.vhd"
add_file "$SRC1/Wrap_To_Zero.vhd"


# ======== Elaboration options ========
set_property -name {xelab.snapshot} -value {mwcosim_query} -objects [get_filesets sim_1]

# ======== Compile and Elaborate ========
# Compile, elaborate, and start a sim image in order to auto determine
# the top module and its interface information.
set_property source_mgmt_mode All [current_project]
set_property SOURCE_SET sources_1 [get_filesets sim_1]
update_compile_order -fileset sim_1
launch_simulation

# ======== Gather Design Info ========
# DO NOT EDIT.  Needed for gathering top-level design information.
set TOP_MODULE [get_property top [get_fileset sim_1]]
set INPORT_NAMES [get_objects -filter { type == in_port }]
set OUTPORT_NAMES [get_objects -filter { type == out_port }]
report_scope [current_scope] > hdlverifier_tcl_query_info.txt
foreach {port} [concat $INPORT_NAMES $OUTPORT_NAMES] { report_object $port >> hdlverifier_tcl_query_info.txt}

} on error { errMsg errDetails } {
    puts "CAUGHT ERROR: $errMsg, $errDetails"
    exit 11
}

exit
