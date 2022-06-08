/* command */
enum {
	CMD_ADD = 0,
	CMD_REMOVE,
	CMD_CHANGERATE,
	CMD_SETVALUE,
	CMD_GETVALUE,
	CMD_REPORT,
	CMD_MAX,
};

/* sub command */
enum {
	AP_SHUTDOWN = 0,
	AP_RESUME,
	AP_SUSPEND,
	SYSTEM_TIME,
	RTC_TIME,
	LCD_ON,
	LCD_OFF,
	POW_CONNECTED,
	POW_DISCONNECTED,
	CALL_IDLE,
	CALL_ACTIVE = 10,
	WHO_AM_I,
	VERSION_INFO,
	MOBEAM_DATA,
	MOBEAM_HOP_TABLE,
	MOBEAM_HOP_COUNT,
	LIBRARY_DATA,
	LIBRARY_CURRENTSTATUS,
	LIBRARY_CURRENTSTATUS_BATCH,
	LIBRARY_VERSIONINFO,
	PEDOMETER_USERHEIGHT = 20,
	PEDOMETER_USERWEIGHT,
	PEDOMETER_USERGENDER,
	PEDOMETER_INFOUPDATETIME,
	SENSOR_FACTORY,
	SENSOR_FLUSH,
	SENSOR_AXIS,
	SENSOR_SCAN_RESULT,
	SENSOR_REGISTER_DUMP,
	SENSOR_REGISTER_RW,
	PROXIMITY_THRESHOLD = 30,
	MAGNETIC_HWOFFSET,
	MAGNETIC_STATIC_MATRIX,
	PROXIMITY_OFFSET,
	LIGHT_COEF,
	CAL_DATA,
	ACCELOMETER_REACTIVE_ALERT,
	ACCELOMETER_LPF_ON_OFF,
	GYROSCOPE_TEMPERATURE_FACTORY,
	MAGNETIC_LOGGING,
	PROXIMITY_SETTING = 40,
	CURRENT_SYSTEM_TIME,
	GYROSCOPE_DPS_FACTORY,
	MOBEAM_BIT_LEN,
	MCU_SLEEP_TEST,
	SENSOR_NAME,
	PROXIMITY_ADDVAL,
	LIGHT_BRIGHTNESS,
	LIGHT_AB_HYSTERESIS,
	LIGHT_CAM_STATUS,
	LIGHT_SET_SAMPLING = 50,
	HALL_IC_STATUS,
	PROXIMITY_SETTING_MODE,
	LIGHT_FACTORY_STATE,
	LIGHT_PRJ_REGION,
	DMA_ADDRESS = 55,
	PM_STATE,
	NO_EVENT_CHECK,
	MOTOR_ON,
	MOTOR_OFF,
	CMD_VALUE_MAX,
};

/* CONVERT VALUE FOR SEM CONTEXT*/
#define SCONTEXT_AP_STATUS_SHUTDOWN                   0xD0
#define SCONTEXT_AP_STATUS_WAKEUP                     0xD1
#define SCONTEXT_AP_STATUS_SLEEP                      0xD2
#define SCONTEXT_AP_STATUS_RESUME                     0xD3
#define SCONTEXT_AP_STATUS_SUSPEND                    0xD4
#define SCONTEXT_AP_STATUS_RESET                      0xD5
#define SCONTEXT_AP_STATUS_POW_CONNECTED              0xD6
#define SCONTEXT_AP_STATUS_POW_DISCONNECTED           0xD7
#define SCONTEXT_AP_STATUS_CALL_IDLE                  0xD8
#define SCONTEXT_AP_STATUS_CALL_ACTIVE                0xD9

#define SCONTEXT_INST_LIBRARY_ADD                     0xB1
#define SCONTEXT_INST_LIBRARY_REMOVE                  0xB2
#define SCONTEXT_INST_LIB_NOTI                        0xB4
#define SCONTEXT_INST_LIB_SET_DATA                    0xC1
#define SCONTEXT_INST_LIB_GET_DATA                    0xB8

#define SCONTEXT_VALUE_CURRENTSYSTEMTIME              0x0E
#define SCONTEXT_VALUE_PEDOMETER_USERHEIGHT           0x12
#define SCONTEXT_VALUE_PEDOMETER_USERWEIGHT           0x13
#define SCONTEXT_VALUE_PEDOMETER_USERGENDER           0x14
#define SCONTEXT_VALUE_PEDOMETER_INFOUPDATETIME       0x15
#define SCONTEXT_VALUE_LIBRARY_DATA                   0x17

#define SCONTEXT_VALUE_CURRENTSTATUS                  0x01
#define SCONTEXT_VALUE_CURRENTSTATUS_BATCH            0x02
#define SCONTEXT_VALUE_VERSIONINFO                    0x03

