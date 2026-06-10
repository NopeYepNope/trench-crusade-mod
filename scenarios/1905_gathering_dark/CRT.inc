##############################
# Country definition for CRT #
##############################

country = {
  tag                = CRT
  capital            = 160
  dissent            = 0
  manpower           = 100
  energy             = 1000
  metal              = 500
  rare_materials     = 250
  oil                = 0
  supplies           = 300
  money              = 10
  transports         = 20

  ownedprovinces         = { 160 161 162 163 164 165 166 }
  controlledprovinces    = { 160 161 162 163 164 165 166 }
  nationalprovinces      = { 160 161 162 163 164 165 166 }

  techapps               = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic = 2
    political_left = 3
    freedom = 2
    open_society = 2
    interventionism = 8
    professional_army = 9
    defense_lobby = 9
    market_economy = 3
  }

  landunit = {
    id       = { type = 14000 id = 52400 }
    name     = "CRT Army"
    location = 160
    division = {
      id             = { type = 14000 id = 52401 }
      name           = "CRT Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52402 }
      name           = "CRT Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
