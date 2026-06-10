##############################
# Country definition for TRP #
##############################

country = {
  tag                = TRP
  capital            = 798
  dissent            = 0
  manpower           = 80
  energy             = 200
  metal              = 100
  rare_materials     = 50
  oil                = 0
  supplies           = 200
  money              = 5
  transports         = 20

  ownedprovinces         = { 798 806 }
  controlledprovinces    = { 798 806 }
  nationalprovinces      = { 798 806 }

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
    id       = { type = 14000 id = 51400 }
    name     = "TRP Army"
    location = 798
    division = {
      id             = { type = 14000 id = 51401 }
      name           = "TRP Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51402 }
      name           = "TRP Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
