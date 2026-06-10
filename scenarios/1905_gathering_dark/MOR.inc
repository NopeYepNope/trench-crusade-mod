##############################
# Country definition for MOR #
##############################

country = {
  tag                = MOR
  capital            = 461
  dissent            = 3
  manpower           = 60
  energy             = 600
  metal              = 300
  rare_materials     = 150
  oil                = 0
  supplies           = 200
  money              = 10
  transports         = 20

  ownedprovinces         = { 461 462 463 464 }
  controlledprovinces    = { 461 462 463 464 }
  nationalprovinces      = { 461 462 463 464 }

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
    id       = { type = 14000 id = 51600 }
    name     = "MOR Army"
    location = 461
    division = {
      id             = { type = 14000 id = 51601 }
      name           = "MOR Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51602 }
      name           = "MOR Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
