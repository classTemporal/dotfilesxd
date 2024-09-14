/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

static const struct arg args[] = {
	/* function format          argument */
	{ temp, "TEMP: %s | ", "/sys/class/thermal/thermal_zone0/temp"},
	{ cpu_perc, "CPU: %s | "},
	{ ram_used, "RAM: %s/"},
	{ ram_total, "%s | "},
	{ wifi_essid, "WiFi: %s | ", "wlan0"},
	{ datetime, "TIME: %s | ",           "%F %T" },
	{ battery_perc, "BAT: %sP ", "BAT0" },
};
