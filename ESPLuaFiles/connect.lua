
local module = {}

bootTime= nil
httpSrv=net.createServer(net.TCP)
temps = {}
humids = {}
pump_cur = 0
valve_cur = 0
lineTemps1 = {}
lineTemps2 = {}

local function ConnectToAP(ssid, pass)
print("\nResetting Station Mode.")
wifi.setmode(wifi.STATION)
print("\nAttempting to Connect to " ..ssid)
wifi.sta.config(ssid,pass)
status = wifi.sta.status()
tmr.alarm(0, 1000, 1, function() 
    if wifi.sta.getip()==nil then
      print("Still connecting to "..ssid.. "...") 
    else
      print('\nConnected: '..wifi.sta.getip())      
      --getInetTime()
      tmr.stop(0)      
    end
end)
end

function Ping()
    print('OK')
end

function listap(t)
    for k,v in pairs(t) do
    print(k.." : "..v)
    end
end

function SaveNewTempHumid(temp, humid)
table.insert(temps, 1, temp)
table.insert(humids, 1, humid)
end

function StartRestService(port)
    httpSrv:listen(port, function(conn)
        conn:on("receive", function(client, request)
            client:send('PONG')
            print('connection')
            client:close();
            collectgarbage();
        end)
    end)
end

function SetNodeStatus(pump, valve, lineTemp1, lineTemp2)
pump_cur = pump
valve_cur = valve
table.insert(lineTemps1, 1, lineTemp1)
table.insert(lineTemps2, 1, lineTemp2) 
end

function RequestMCUStatus()
    print('getSTAT')
end

function module.start()
 print("Configuring Wifi..")
 ConnectToAP(config.SSID["mySSID"], "wifiPass")
end

return module
