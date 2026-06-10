##############################
# Country definition for ABY #
##############################

country = {
  tag                = ABY
  capital            = 620
  dissent            = 3
  manpower           = 100
  energy             = 800
  metal              = 400
  rare_materials     = 200
  oil                = 0
  supplies           = 300
  money              = 10
  transports         = 20

  ownedprovinces         = { 620 621 622 623 624 625 }
  controlledprovinces    = { 620 621 622 623 624 625 }
  nationalprovinces      = { 620 621 622 623 624 625 }

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
    id       = { type = 14000 id = 51500 }
    name     = "ABY Army"
    location = 620
    division = {
      id             = { type = 14000 id = 51501 }
      name           = "ABY Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51502 }
      name           = "ABY Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
