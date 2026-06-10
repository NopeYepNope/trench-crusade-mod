##############################
# Country definition for GLK #
##############################

country = {
  tag                = GLK
  capital            = 465
  dissent            = 4
  manpower           = 120
  energy             = 400
  metal              = 200
  rare_materials     = 100
  oil                = 100
  supplies           = 200
  money              = 5
  transports         = 20

  ownedprovinces         = { 465 466 467 468 469 }
  controlledprovinces    = { 465 466 467 468 469 }
  nationalprovinces      = { 465 466 467 468 469 }

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
    id       = { type = 14000 id = 51900 }
    name     = "GLK Army"
    location = 465
    division = {
      id             = { type = 14000 id = 51901 }
      name           = "GLK Infantry Division"
      type           = infantry
      model          = 1
      strength       = 50
    }
    division = {
      id             = { type = 14000 id = 51902 }
      name           = "GLK Cavalry"
      type           = cavalry
      model          = 1
      strength       = 40
    }
  }
}
