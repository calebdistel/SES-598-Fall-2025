exec xelab -debug typical -top ddc_spec_avg_tb -snapshot ddc_spec_avg_tb_snapshot
exec xsim -tclbatch simulation.tcl ddc_spec_avg_tb_snapshot
source xsim.dir/ddc_spec_avg_tb_snapshot/xsim_script.tcl
