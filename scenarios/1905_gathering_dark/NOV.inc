##############################
# Country definition for NOV #
##############################

country = {
  tag                = NOV
  capital            = 295
  dissent            = 6
  manpower           = 150
  energy             = 2000
  metal              = 1000
  rare_materials     = 500
  oil                = 200
  supplies           = 400
  money              = 20
  transports         = 20

  ownedprovinces         = { 295 296 297 298 299 300 }
  controlledprovinces    = { 295 296 297 298 299 300 }
  nationalprovinces      = { 295 296 297 298 299 300 }

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
    id       = { type = 14000 id = 50900 }
    name     = "NOV Army"
    location = 295
    division = {
      id             = { type = 14000 id = 50901 }
      name           = "NOV Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 50902 }
      name           = "NOV Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
