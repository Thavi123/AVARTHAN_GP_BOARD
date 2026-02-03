################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-249048550: ../generalpurpose.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"C:/ti/ccs2040/ccs/utils/sysconfig_1.26.0/sysconfig_cli.bat" -s "C:/ti/C2000Ware_6_00_01_00/.metadata/sdk.json" -d "F28P65x" -p "256ZEJ" -r "F28P65x_256ZEJ" --script "D:/git_code/generalpurpose/generalpurpose.syscfg" -o "syscfg" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-249048550 ../generalpurpose.syscfg
syscfg/board.h: build-249048550
syscfg/board.cmd.genlibs: build-249048550
syscfg/board.opt: build-249048550
syscfg/board.json: build-249048550
syscfg/pinmux.csv: build-249048550
syscfg/epwm.dot: build-249048550
syscfg/adc.dot: build-249048550
syscfg/c2000ware_libraries.cmd.genlibs: build-249048550
syscfg/c2000ware_libraries.opt: build-249048550
syscfg/c2000ware_libraries.c: build-249048550
syscfg/c2000ware_libraries.h: build-249048550
syscfg/clocktree.h: build-249048550
syscfg: build-249048550

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs2040/ccs/tools/compiler/ti-cgt-c2000_22.6.3.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu64 --tmu_support=tmu1 --vcu_support=vcrc -Ooff --include_path="D:/git_code/generalpurpose" --include_path="C:/ti/C2000Ware_6_00_01_00" --include_path="D:/git_code/generalpurpose/device" --include_path="C:/ti/C2000Ware_6_00_01_00/driverlib/f28p65x/driverlib/" --include_path="C:/ti/ccs2040/ccs/tools/compiler/ti-cgt-c2000_22.6.3.LTS/include" --define=_FLASH --define=DEBUG --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="D:/git_code/generalpurpose/CPU1_FLASH/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs2040/ccs/tools/compiler/ti-cgt-c2000_22.6.3.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu64 --tmu_support=tmu1 --vcu_support=vcrc -Ooff --include_path="D:/git_code/generalpurpose" --include_path="C:/ti/C2000Ware_6_00_01_00" --include_path="D:/git_code/generalpurpose/device" --include_path="C:/ti/C2000Ware_6_00_01_00/driverlib/f28p65x/driverlib/" --include_path="C:/ti/ccs2040/ccs/tools/compiler/ti-cgt-c2000_22.6.3.LTS/include" --define=_FLASH --define=DEBUG --define=CPU1 --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="D:/git_code/generalpurpose/CPU1_FLASH/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


