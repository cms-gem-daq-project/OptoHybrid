
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name OH -dir "Z:/Documents/PhD/Code/OptoHybrid/planAhead_run_1" -part xc6slx150tfgg676-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "Z:/Documents/PhD/Code/OptoHybrid/optohybrid_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {Z:/Documents/PhD/Code/OptoHybrid} {ipcore_dir} }
add_files [list {ipcore_dir/chipscope_icon.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/chipscope_ila.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/chipscope_vio.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/tracking_bx_fifo.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/tracking_data_fifo.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "Z:/Documents/PhD/Code/OptoHybrid/src/pinout.ucf" [current_fileset -constrset]
add_files [list {Z:/Documents/PhD/Code/OptoHybrid/src/pinout.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OptoHybrid/src/timing.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {Z:/Documents/PhD/Code/OptoHybrid/src/gtp.ucf}] -fileset [get_property constrset [current_run]]
link_design
