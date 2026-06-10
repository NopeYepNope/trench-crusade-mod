##############################
# Country definition for SAM #
##############################

country = {
  tag                = SAM
  capital            = 810
  dissent            = 0
  manpower           = 300
  energy             = 3000
  metal              = 1500
  rare_materials     = 750
  oil                = 1000
  supplies           = 800
  money              = 40
  transports         = 20

  ownedprovinces         = { 810 811 812 813 814 }
  controlledprovinces    = { 810 811 812 813 814 }
  nationalprovinces      = { 810 811 812 813 814 }

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
    id       = { type = 14000 id = 52700 }
    name     = "SAM Army"
    location = 810
    division = {
      id             = { type = 14000 id = 52701 }
      name           = "SAM Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 52702 }
      name           = "SAM Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
