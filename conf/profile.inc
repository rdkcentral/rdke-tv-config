# TV platform specific configs
OVERRIDES .= ":rdktv"

DISTRO_FEATURES:append = " RDKE_PLATFORM_TV "

THUNDER_STARTUP_SERVICES:append = " wpeframework-hdmicecsink.service wpeframework-avoutput.service"

# XIONE-14404 Amlogic devices need dynamic_svp_decryption enabled until this
# can be moved to the vendor layer.
DISTRO_FEATURES:append = " dynamic_svp_decryption"


#CTRLM configs
CTRLM_DEEPSLEEP_CLOSE_DB = "true"
AUTH_ACTIVATION_STATUS:platco = "true"


#DOBBY SPECIFIC CONFIGS

#Dobby device specific settings
DOBBY_DEVICESETTINGS_FILE = "dobby.llama.json"

LINUXLIBCVERSION = "4.9%"

