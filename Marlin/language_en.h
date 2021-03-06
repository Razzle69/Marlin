/**
 * English
 *
 * LCD Menu Messages
 * Please note these are limited to 17 characters!
 *
 */
#ifndef LANGUAGE_EN_H
#define LANGUAGE_EN_H

#define WELCOME_MSG                         MACHINE_NAME " ready."
#define MSG_SD_INSERTED                     "Card inserted"
#define MSG_SD_REMOVED                      "Card removed"
#define MSG_MAIN                            "Main"
#define MSG_AUTOSTART                       "Autostart"
#define MSG_DISABLE_STEPPERS                "Disable steppers"
#define MSG_AUTO_HOME                       "Auto home"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_SET_ORIGIN                      "Set origin"
#define MSG_PREHEAT_PLA                     "Preheat PLA"
#define MSG_PREHEAT_PLA_N                   MSG_PREHEAT_PLA " "
#define MSG_PREHEAT_PLA_ALL                 MSG_PREHEAT_PLA " All"
#define MSG_PREHEAT_PLA_BEDONLY             MSG_PREHEAT_PLA " Bed"
#define MSG_PREHEAT_PLA_SETTINGS            MSG_PREHEAT_PLA " conf"
#define MSG_PREHEAT_ABS                     "Preheat ABS"
#define MSG_PREHEAT_ABS_N                   MSG_PREHEAT_ABS " "
#define MSG_PREHEAT_ABS_ALL                 MSG_PREHEAT_ABS " All"
#define MSG_PREHEAT_ABS_BEDONLY             MSG_PREHEAT_ABS " Bed"
#define MSG_PREHEAT_ABS_SETTINGS            MSG_PREHEAT_ABS " conf"
#define MSG_COOLDOWN                        "Cooldown"
#define MSG_SWITCH_PS_ON                    "Switch power on"
#define MSG_SWITCH_PS_OFF                   "Switch power off"
#define MSG_EXTRUDE                         "Extrude"
#define MSG_RETRACT                         "Retract"
#define MSG_MOVE_AXIS                       "Move axis"
#define MSG_MOVE_X                          "Move X"
#define MSG_MOVE_Y                          "Move Y"
#define MSG_MOVE_Z                          "Move Z"
#define MSG_MOVE_E                          "Extruder"
#define MSG_MOVE_01MM                       "Move 0.1mm"
#define MSG_MOVE_1MM                        "Move 1mm"
#define MSG_MOVE_10MM                       "Move 10mm"
#define MSG_SPEED                           "Speed"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_BED                             "Bed"
#define MSG_FAN_SPEED                       "Fan speed"
#define MSG_FLOW                            "Flow"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             " " STR_THERMOMETER " Min"
#define MSG_MAX                             " " STR_THERMOMETER " Max"
#define MSG_FACTOR                          " " STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        "Autotemp"
#define MSG_ON                              "On "
#define MSG_OFF                             "Off"
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Accel"
#define MSG_VXY_JERK                        "Vxy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_X                               "x"
#define MSG_Y                               "y"
#define MSG_Z                               "z"
#define MSG_E                               "e"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_TEMPERATURE                     "Temperature"
#define MSG_MOTION                          "Motion"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED		          "E in mm" STR_h3
#define MSG_FILAMENT_SIZE_EXTRUDER_0        "Fil. Dia. 1"
#define MSG_FILAMENT_SIZE_EXTRUDER_1        "Fil. Dia. 2"
#define MSG_FILAMENT_SIZE_EXTRUDER_2        "Fil. Dia. 3"
#define MSG_FILAMENT_SIZE_EXTRUDER_3        "Fil. Dia. 4"
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EPROM                     "Store memory"
#define MSG_LOAD_EPROM                      "Load memory"
#define MSG_RESTORE_FAILSAFE                "Restore failsafe"
#define MSG_REFRESH                         "Refresh"
#define MSG_WATCH                           "Info screen"
#define MSG_PREPARE                         "Prepare"
#define MSG_TUNE                            "Tune"
#define MSG_PAUSE_PRINT                     "Pause print"
#define MSG_RESUME_PRINT                    "Resume print"
#define MSG_STOP_PRINT                      "Stop print"
#define MSG_CARD_MENU                       "Print from SD"
#define MSG_NO_CARD                         "No SD card"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_RESUMING                        "Resuming print"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Change filament"
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Change SD card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_POSITION_UNKNOWN                "Home X/Y before Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"

#ifdef DELTA_CALIBRATION_MENU
    #define MSG_DELTA_CALIBRATE             "Delta Calibration"
    #define MSG_DELTA_CALIBRATE_X           "Calibrate X"
    #define MSG_DELTA_CALIBRATE_Y           "Calibrate Y"
    #define MSG_DELTA_CALIBRATE_Z           "Calibrate Z"
    #define MSG_DELTA_CALIBRATE_CENTER      "Calibrate Center"
#endif // DELTA_CALIBRATION_MENU

#endif // LANGUAGE_EN_H
