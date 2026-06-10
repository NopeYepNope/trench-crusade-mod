##############################
# Country definition for LIL #
##############################

country = {
  tag                = LIL
  capital            = 815
  dissent            = 3
  manpower           = 100
  energy             = 500
  metal              = 250
  rare_materials     = 125
  oil                = 100
  supplies           = 300
  money              = 15
  transports         = 20

  ownedprovinces         = { 815 816 817 }
  controlledprovinces    = { 815 816 817 }
  nationalprovinces      = { 815 816 817 }

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
    id       = { type = 14000 id = 53300 }
    name     = "LIL Army"
    location = 815
    division = {
      id             = { type = 14000 id = 53301 }
      name           = "LIL Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 53302 }
      name           = "LIL Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
