#tv-us specific configs

OVERRIDES .= ":rdktv-us"
MACHINEOVERRIDES .= ":rdkzram"

#TEXTTOSPEECH configs
TEXTTOSPEECH_ENDPOINT = "http://localhost:50050/nuanceEve/tts?"
TEXTTOSPEECH_SECURE_ENDPOINT = "http://localhost:50050/nuanceEve/tts?"
TEXTTOSPEECH_LANGUAGE = "en-US"
TEXTTOSPEECH_VOICE_FOR_EN = "ava"

#cleanup is in progress once done we can remove
DISTRO_FEATURES:append = ' aamp_amlogic'
DISTRO_FEATURES:append = " enable_nuance"
