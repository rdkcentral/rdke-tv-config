# TV platform specific configs
OVERRIDES .= ":rdktv"

DISTRO_FEATURES:append = " RDKE_PLATFORM_TV "

THUNDER_STARTUP_SERVICES:append = " wpeframework-hdmicecsink.service wpeframework-avoutput.service"

# XIONE-14404 Amlogic devices need dynamic_svp_decryption enabled until this
# can be moved to the vendor layer.
DISTRO_FEATURES:append = " dynamic_svp_decryption"


#CTRLM configs
CTRLM_DEEPSLEEP_CLOSE_DB = "true"

# Element currently uses Llama repo for prebuilts.. Change this when Element gets it's own repo.
CTRLM_IRDB_UEI_AF_TARGET_NAME    = "sky_amlogic_llama"
CTRLM_IRDB_UEI_AF_MAJOR_VERSION  = "2"
CTRLM_IRDB_UEI_AF_MINOR_VERSION  = "4"
CTRLM_IRDB_UEI_SRC_URI_MD5SUM    = "f16d007a24c53889765ad400b23d6318"
CTRLM_IRDB_UEI_SRC_URI_SHA256SUM = "f705990bf0aad468f5579c615aa3ce03dbec649b7055974075e22efdf805e3d2"
CTRLM_IRDB_UEI_LOCAL_DB          = "true"

IRDB_MODE = "hybrid"
AUTH_ACTIVATION_STATUS:platco = "true"


#DOBBY SPECIFIC CONFIGS

#Dobby device specific settings
DOBBY_DEVICESETTINGS_FILE = "dobby.llama.json"

# Netflix specific configs 
NETFLIX_MEDIA_CACHE_CAPACITY = "238MB"
NETFLIX_MINAUDIOPTSGAP = "35"
LINUXLIBCVERSION = "4.9%"
