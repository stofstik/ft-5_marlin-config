/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Catalan
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_CA_H
#define LANGUAGE_CA_H

//#define MAPPER_NON
#define MAPPER_C2C3  // because of "ó"
// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
//#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME " preparada."
#define MSG_SD_INSERTED                     "SD detectada."
#define MSG_SD_REMOVED                      "SD expulsada."
#define MSG_MAIN                            "Menu principal"
#define MSG_AUTOSTART                       "Inici automatic"
#define MSG_DISABLE_STEPPERS                "Apagar motors"
#define MSG_AUTO_HOME                       "Home global"
#define MSG_LEVEL_BED_HOMING                "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               "Click to Begin"
#define MSG_LEVEL_BED_DONE                  "Leveling Done!"
#define MSG_LEVEL_BED_CANCEL                "Cancel"
#define MSG_SET_HOME_OFFSETS                "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            "Offsets applied"
#define MSG_SET_ORIGIN                      "Establir origen"
#define MSG_PREHEAT_PLA                     "Preescalfar PLA"
#define MSG_PREHEAT_PLA_N                   "Preescalfar PLA "
#define MSG_PREHEAT_PLA_ALL                 "Preesc. tot PLA"
#define MSG_PREHEAT_PLA_BEDONLY             "Preesc. llit PLA"
#define MSG_PREHEAT_PLA_SETTINGS            "Configuració PLA"
#define MSG_PREHEAT_ABS                     "Preescalfar ABS"
#define MSG_PREHEAT_ABS_N                   "Preescalfar ABS "
#define MSG_PREHEAT_ABS_ALL                 "Preesc. tot ABS"
#define MSG_PREHEAT_ABS_BEDONLY             "Preesc. llit ABS"
#define MSG_PREHEAT_ABS_SETTINGS            "Configuració ABS"
#define MSG_COOLDOWN                        "Refredar"
#define MSG_SWITCH_PS_ON                    "Switch power on"
#define MSG_SWITCH_PS_OFF                   "Switch power off"
#define MSG_EXTRUDE                         "Extruir"
#define MSG_RETRACT                         "Refredar"
#define MSG_MOVE_AXIS                       "Moure eixos"
#define MSG_MOVE_X                          "Moure X"
#define MSG_MOVE_Y                          "Moure Y"
#define MSG_MOVE_Z                          "Moure Z"
#define MSG_MOVE_E                          "Extrusor"
#define MSG_MOVE_01MM                       "Moure 0.1mm"
#define MSG_MOVE_1MM                        "Moure 1mm"
#define MSG_MOVE_10MM                       "Moure 10mm"
#define MSG_SPEED                           "Velocitat"
#define MSG_NOZZLE                          "Nozzle"
#define MSG_BED                             "Llit"
#define MSG_FAN_SPEED                       "Vel. Ventilador"
#define MSG_FLOW                            "Fluxe"
#define MSG_CONTROL                         "Control"
#define MSG_MIN                             LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " Fact"
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
#define MSG_X                               "X"
#define MSG_Y                               "Y"
#define MSG_Z                               "Z"
#define MSG_E                               "E"
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_XSTEPS                          "Xpassos/mm"
#define MSG_YSTEPS                          "Ypassos/mm"
#define MSG_ZSTEPS                          "Zpassos/mm"
#define MSG_ESTEPS                          "Epassos/mm"
#define MSG_TEMPERATURE                     "Temperatura"
#define MSG_MOTION                          "Moviment"
#define MSG_VOLUMETRIC                      "Filament"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "Contrast de LCD"
#define MSG_STORE_EPROM                     "Desar a memoria"
#define MSG_LOAD_EPROM                      "Carregar de mem."
#define MSG_RESTORE_FAILSAFE                "Rest. emergencia"
#define MSG_REFRESH                         "Refrescar"
#define MSG_WATCH                           "Pantalla Info."
#define MSG_PREPARE                         "Preparar"
#define MSG_TUNE                            "Calibrar"
#define MSG_PAUSE_PRINT                     "Pausa imp."
#define MSG_RESUME_PRINT                    "Reprendre imp."
#define MSG_STOP_PRINT                      "Parar inp."
#define MSG_CARD_MENU                       "Imprimir de SD"
#define MSG_NO_CARD                         "-Sense targeta SD"
#define MSG_DWELL                           "Repos..."
#define MSG_USERWAIT                        "Esperant usuari.."
#define MSG_RESUMING                        "Reprenent imp."
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "Sense moviment."
#define MSG_KILLED                          "PARADA DE EMERG. "
#define MSG_STOPPED                         "ATURAT. "
#define MSG_CONTROL_RETRACT                 "Retreure mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Retreure mm"
#define MSG_CONTROL_RETRACTF                "Retreure  F"
#define MSG_CONTROL_RETRACT_ZLIFT           "Aixecar mm"
#define MSG_CONTROL_RETRACT_RECOVER         "DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "Swap DesRet +mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "DesRet  F"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Canviar filament"
#define MSG_INIT_SDCARD                     "Iniciant SD"
#define MSG_CNG_SDCARD                      "Canviar SD"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_YX_UNHOMED                      "Home X/Y abans Z"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_END_HOUR                        "hours"
#define MSG_END_MINUTE                      "minutes"

#define MSG_DELTA_CALIBRATE                 "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          "Calibrate Center"

#endif // LANGUAGE_CA_H
