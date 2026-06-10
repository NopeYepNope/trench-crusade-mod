##############################
# Country definition for NUM #
##############################

country = {
  tag                = NUM
  capital            = 460
  dissent            = 4
  manpower           = 60
  energy             = 500
  metal              = 250
  rare_materials     = 125
  oil                = 0
  supplies           = 200
  money              = 8
  transports         = 20

  ownedprovinces         = { 456 457 458 459 460 }
  controlledprovinces    = { 456 457 458 459 460 }
  nationalprovinces      = { 456 457 458 459 460 }

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
    id       = { type = 14000 id = 51700 }
    name     = "NUM Army"
    location = 460
    division = {
      id             = { type = 14000 id = 51701 }
      name           = "NUM Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51702 }
      name           = "NUM Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
