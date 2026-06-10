##############################
# Country definition for MAM #
##############################

country = {
  tag                = MAM
  capital            = 790
  dissent            = 0
  manpower           = 120
  energy             = 8000
  metal              = 4000
  rare_materials     = 2000
  oil                = 500
  supplies           = 800
  money              = 80
  transports         = 20

  ownedprovinces         = { 790 791 792 793 }
  controlledprovinces    = { 790 791 792 793 }
  nationalprovinces      = { 790 791 792 793 }

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
    id       = { type = 14000 id = 52500 }
    name     = "MAM Army"
    location = 790
    division = {
      id             = { type = 14000 id = 52501 }
      name           = "MAM Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52502 }
      name           = "MAM Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
