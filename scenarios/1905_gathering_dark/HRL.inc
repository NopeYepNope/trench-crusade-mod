##############################
# Country definition for HRL #
##############################

country = {
  tag                = HRL
  capital            = 85
  dissent            = 0
  manpower           = 250
  energy             = 6000
  metal              = 3000
  rare_materials     = 1500
  oil                = 800
  supplies           = 1200
  money              = 60
  transports         = 20

  ownedprovinces         = { 85 86 87 125 126 127 128 }
  controlledprovinces    = { 85 86 87 125 126 127 128 }
  nationalprovinces      = { 85 86 87 125 126 127 128 }

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
    id       = { type = 14000 id = 52300 }
    name     = "HRL Army"
    location = 85
    division = {
      id             = { type = 14000 id = 52301 }
      name           = "HRL Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52302 }
      name           = "HRL Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
