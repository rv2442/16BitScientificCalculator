
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name fourbit -dir "E:/Xilinx_XIE/fourbit/planAhead_run_1" -part xc6slx9tqg144-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "E:/Xilinx_XIE/fourbit/Main_Demo.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {E:/Xilinx_XIE/fourbit} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "main.ucf" [current_fileset -constrset]
add_files [list {main.ucf}] -fileset [get_property constrset [current_run]]
link_design
