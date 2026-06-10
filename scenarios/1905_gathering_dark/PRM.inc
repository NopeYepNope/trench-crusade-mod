##############################
# Country definition for PRM #
##############################

country = {
  tag                = PRM
  capital            = 416
  dissent            = 4
  manpower           = 40
  energy             = 300
  metal              = 150
  rare_materials     = 75
  oil                = 50
  supplies           = 100
  money              = 3
  transports         = 20

  ownedprovinces         = { 416 417 418 }
  controlledprovinces    = { 416 417 418 }
  nationalprovinces      = { 416 417 418 }

  techapps               = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic = 7
    political_left = 5
    freedom = 7
    open_society = 6
    interventionism = 4
    professional_army = 6
    defense_lobby = 7
    market_economy = 6
  }

  landunit = {
    id       = { type = 14000 id = 52100 }
    name     = "PRM Army"
    location = 416
    division = {
      id             = { type = 14000 id = 52101 }
      name           = "PRM Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52102 }
      name           = "PRM Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
