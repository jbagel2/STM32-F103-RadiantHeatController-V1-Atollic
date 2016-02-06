local module = {}

module.SSID = {}
module.SSID["mySSID"] = "Nonya"

module.REPORT_SERVER = ""
module.REPORT_PORT = 80
module.ID = node.chipid()

return module
