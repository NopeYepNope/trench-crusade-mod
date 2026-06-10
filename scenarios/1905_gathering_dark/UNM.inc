##############################
# Country definition for UNM #
##############################

country = {
  tag                = UNM
  capital            = 200
  dissent            = 8
  manpower           = 60
  energy             = 100
  metal              = 50
  rare_materials     = 25
  oil                = 0
  supplies           = 100
  money              = 2
  transports         = 20

  ownedprovinces         = { 200 201 202 }
  controlledprovinces    = { 200 201 202 }
  nationalprovinces      = { 200 201 202 }

  techapps               = { 1010 1020 1030 1040 1160 1170 1180 2290 2800 3010 3020 3030 3110 3120 3130 3210 3220 3230 3410 3420 3430 4500 5600 5700 8010 8020 8040 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic = 5
    political_left = 5
    freedom = 5
    open_society = 5
    interventionism = 5
    professional_army = 5
    defense_lobby = 5
    market_economy = 5
  }

  landunit = {
    id       = { type = 14000 id = 53200 }
    name     = "UNM Army"
    location = 200
    division = {
      id             = { type = 14000 id = 53201 }
      name           = "UNM Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 53202 }
      name           = "UNM Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
