##############################
# Country definition for MAL #
##############################

country = {
  tag                = MAL
  capital            = 550
  dissent            = 3
  manpower           = 80
  energy             = 400
  metal              = 200
  rare_materials     = 100
  oil                = 0
  supplies           = 200
  money              = 8
  transports         = 20

  ownedprovinces         = { 550 551 552 553 554 }
  controlledprovinces    = { 550 551 552 553 554 }
  nationalprovinces      = { 550 551 552 553 554 }

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
    id       = { type = 14000 id = 51800 }
    name     = "MAL Army"
    location = 550
    division = {
      id             = { type = 14000 id = 51801 }
      name           = "MAL Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51802 }
      name           = "MAL Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
